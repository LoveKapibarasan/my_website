#include <iostream>
#include <fstream>
#include <filesystem>
#include <regex>
#include <map>
#include <string>
#include <sstream>
#include <stdexcept>
#include <cstdlib>
#include <unistd.h> // mkstemp, write, close
#include <yaml-cpp/yaml.h> // Requires yaml-cpp library

namespace fs = std::filesystem;

// ==========================================================
// Helper: Compile Markdown to HTML using Pandoc (external tool)
// ==========================================================
std::string compileMarkdownToHtml(const std::string &markdownText) {
    // Create temp input file
    char tmpInput[] = "/tmp/md_input_XXXXXX";
    int fdIn = mkstemp(tmpInput);
    if (fdIn == -1) throw std::runtime_error("mkstemp failed for input");
    write(fdIn, markdownText.c_str(), markdownText.size());
    close(fdIn);

    // Create temp output file
    char tmpOutput[] = "/tmp/md_output_XXXXXX";
    int fdOut = mkstemp(tmpOutput);
    if (fdOut == -1) throw std::runtime_error("mkstemp failed for output");
    close(fdOut);

    // Call pandoc to convert Markdown → HTML
    std::string cmd = "pandoc " + std::string(tmpInput) + " -f markdown -t html -o " + std::string(tmpOutput);
    int ret = std::system(cmd.c_str());
    if (ret != 0) throw std::runtime_error("pandoc command failed");

    // Read HTML output
    std::ifstream outFile(tmpOutput);
    std::stringstream buffer;
    buffer << outFile.rdbuf();
    outFile.close();

    // Clean up temp files
    remove(tmpInput);
    remove(tmpOutput);

    return buffer.str();
}

// ==========================================================
// Helper: Remove all {{...}} placeholders without replacing
// ==========================================================
// Remove only {{"key"}} placeholders

std::string removePlaceholders(const std::string &text) {
    std::regex placeholder(R"(\{\{\s*\"[^\"]+\"\s*\}\})");
    return std::regex_replace(text, placeholder, "");
}

// Replace {{"key"}} with translations
std::string replacePlaceholders(const std::string &text, const std::map<std::string, std::string> &translations) {
    std::regex placeholder(R"(\{\{\s*\"([^\"]+)\"\s*\}\})");
    std::string result;
    std::sregex_iterator it(text.begin(), text.end(), placeholder);
    std::sregex_iterator end;
    size_t lastPos = 0;
    result.reserve(text.size());

    for (; it != end; ++it) {
        auto match = *it;
        std::string key = match[1].str();
        result.append(text.substr(lastPos, match.position() - lastPos));
        auto found = translations.find(key);
        if (found != translations.end()) {
            result.append(found->second);
        } else {
            result.append(match.str()); // leave placeholder unchanged if not found
        }
        lastPos = match.position() + match.length();
    }
    result.append(text.substr(lastPos));
    return result;
}


// ==========================================================
// Helper: Load key-value translations from a YAML file
// ==========================================================
std::map<std::string, std::string> loadYamlTranslations(const fs::path &yamlPath) {
    std::map<std::string, std::string> translations;
    YAML::Node root = YAML::LoadFile(yamlPath.string());
    for (auto it = root.begin(); it != root.end(); ++it) {
        translations[it->first.as<std::string>()] = it->second.as<std::string>();
    }
    return translations;
}

// ==========================================================
// Step 1: If file is NOT Markdown → copy directly to dist
// ==========================================================
void copyFileToDist(const fs::path &srcFile, const fs::path &distFile) {
    fs::create_directories(distFile.parent_path());
    fs::copy_file(srcFile, distFile, fs::copy_options::overwrite_existing);
}

// ==========================================================
// Step 2: If file IS Markdown → process as described
// ==========================================================
void processMarkdownFile(const fs::path &mdPath, const fs::path &srcRoot, const fs::path &distRoot) {
    // --- Read source Markdown file ---
    std::ifstream inFile(mdPath);
    if (!inFile) {
        std::cerr << "Failed to open: " << mdPath << "\n";
        return;
    }
    std::stringstream buffer;
    buffer << inFile.rdbuf();
    std::string mdContent = buffer.str();

    // Get relative path from src to maintain folder structure in dist
    fs::path relPath = fs::relative(mdPath, srcRoot);

    // --- (1) Create default English HTML ---
    // Remove placeholders {{...}} and compile to HTML
    std::string noPlaceholder = removePlaceholders(mdContent);
    std::string html_en = compileMarkdownToHtml(noPlaceholder);

    // Save as original_name_en.html in dist (same relative location as src)
    fs::path distEnPath = distRoot / relPath.parent_path() / (mdPath.stem().string() + "_en.html");
    fs::create_directories(distEnPath.parent_path());
    std::ofstream outEn(distEnPath);
    outEn << html_en;
    outEn.close();

    // --- (2) Go up and find "i18n" folder ---
    fs::path i18nFolder = mdPath.parent_path() / "i18n";
    if (!fs::exists(i18nFolder) || !fs::is_directory(i18nFolder)) {
        return; // No translations → stop here
    }

    // --- (3) For each langcode_i18n.yaml in i18n folder ---
    for (const auto &entry : fs::directory_iterator(i18nFolder)) {
        if (entry.is_regular_file() && entry.path().extension() == ".yaml") {
            std::string filename = entry.path().filename().string();
            size_t underscorePos = filename.find("_i18n.yaml");
            if (underscorePos != std::string::npos) {
                // Extract langcode from file name
                std::string langCode = filename.substr(0, underscorePos);

                // Load translation map
                auto translations = loadYamlTranslations(entry.path());

                // --- (4) Replace placeholders in Markdown ---
                std::string replaced = replacePlaceholders(mdContent, translations);

                // Compile replaced Markdown → HTML
                std::string html_lang = compileMarkdownToHtml(replaced);

                // Save as original_name_langcode.html
                fs::path distLangPath = distRoot / relPath.parent_path() / (mdPath.stem().string() + "_" + langCode + ".html");
                fs::create_directories(distLangPath.parent_path());
                std::ofstream outLang(distLangPath);
                outLang << html_lang;
                outLang.close();
            }
        }
    }
}

// ==========================================================
// Recursive: Walk through src folder and process all files
// ==========================================================
void processSrcFolder(const fs::path &srcRoot, const fs::path &distRoot) {
    for (auto &entry : fs::recursive_directory_iterator(srcRoot)) {
        if (entry.is_regular_file()) {
            fs::path relPath = fs::relative(entry.path(), srcRoot);
            fs::path distPath = distRoot / relPath;
            if (entry.path().extension() == ".md") {
                processMarkdownFile(entry.path(), srcRoot, distRoot);
            } else {
                copyFileToDist(entry.path(), distPath);
            }
        }
    }
}

// ==========================================================
// Main Entry
// ==========================================================
int main() {
    fs::path site_root = fs::current_path(); // You can set absolute path here if needed
    fs::path srcDir = site_root / "src";
    fs::path distDir = site_root / "dist";

    if (!fs::exists(srcDir)) {
        std::cerr << "src directory not found.\n";
        return 1;
    }

    processSrcFolder(srcDir, distDir);

    std::cout << "Site generation complete.\n";
    return 0;
}
