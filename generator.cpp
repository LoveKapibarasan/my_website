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
    std::cout << "[LOG] Compiling Markdown to HTML using Pandoc..." << std::endl;
    // Create temp input file
    char tmpInput[] = "/tmp/md_input_XXXXXX";
    int fdIn = mkstemp(tmpInput);
    if (fdIn == -1) {
        std::cerr << "[ERROR] mkstemp failed for input" << std::endl;
        throw std::runtime_error("mkstemp failed for input");
    }
    write(fdIn, markdownText.c_str(), markdownText.size());
    close(fdIn);

    // Create temp output file
    char tmpOutput[] = "/tmp/md_output_XXXXXX";
    int fdOut = mkstemp(tmpOutput);
    if (fdOut == -1) {
        std::cerr << "[ERROR] mkstemp failed for output" << std::endl;
        throw std::runtime_error("mkstemp failed for output");
    }
    close(fdOut);

    // Call pandoc to convert Markdown → HTML
    std::string cmd = "pandoc " + std::string(tmpInput) + " -f markdown -t html -o " + std::string(tmpOutput);
    int ret = std::system(cmd.c_str());
    if (ret != 0) {
        std::cerr << "[ERROR] pandoc command failed" << std::endl;
        throw std::runtime_error("pandoc command failed");
    }

    // Read HTML output
    std::ifstream outFile(tmpOutput);
    std::stringstream buffer;
    buffer << outFile.rdbuf();
    outFile.close();

    // Clean up temp files
    remove(tmpInput);
    remove(tmpOutput);

    std::cout << "[LOG] Markdown compiled to HTML successfully." << std::endl;
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
    // Match {{"key"}}, {{“key”}}, {{”key”}} but ignore escaped quotes and remove backslashes
    std::regex placeholder(R"(\{\{\s*(["“”])([^\\"“”]+)\1\s*\}\})");
    std::string result;
    std::sregex_iterator it(text.begin(), text.end(), placeholder);
    std::sregex_iterator end;
    size_t lastPos = 0;
    result.reserve(text.size());

    auto normalize_key = [](std::string key) -> std::string {
        // Remove backslashes
        key.erase(std::remove(key.begin(), key.end(), '\\'), key.end());
        // Remove all quotes (straight and curly)
        key.erase(std::remove(key.begin(), key.end(), '"'), key.end());
        std::string curly_left = "\xe2\x80\x9c"; // “
        std::string curly_right = "\xe2\x80\x9d"; // ”
        size_t pos;
        while ((pos = key.find(curly_left)) != std::string::npos) {
            key.replace(pos, curly_left.length(), "");
        }
        while ((pos = key.find(curly_right)) != std::string::npos) {
            key.replace(pos, curly_right.length(), "");
        }
        // Remove all spaces
        key.erase(std::remove_if(key.begin(), key.end(), ::isspace), key.end());
        return key;
    };

    for (; it != end; ++it) {
        auto match = *it;
        std::string key = match[2].str();
        std::string norm_key = normalize_key(key);
        std::cout << "[LOG] Placeholder: '" << key << "' normalized to: '" << norm_key << "'" << std::endl;
        result.append(text.substr(lastPos, match.position() - lastPos));
        bool matched = false;
        for (const auto& kv : translations) {
            std::string yaml_key_norm = kv.first;
            std::string norm_key_lower = norm_key;
            std::transform(yaml_key_norm.begin(), yaml_key_norm.end(), yaml_key_norm.begin(), ::tolower);
            std::transform(norm_key_lower.begin(), norm_key_lower.end(), norm_key_lower.begin(), ::tolower);
            std::cout << "[LOG] Comparing normalized placeholder: '" << norm_key_lower << "' with normalized YAML key: '" << yaml_key_norm << "'" << std::endl;
            if (yaml_key_norm == norm_key_lower) {
                std::cout << "[LOG] Found translation: '" << kv.second << "' for key: '" << kv.first << "'" << std::endl;
                result.append(kv.second);
                matched = true;
                break;
            }
        }
        if (!matched) {
            std::cout << "[LOG] No translation found for normalized key: '" << norm_key << "'" << std::endl;
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
    auto normalize_key = [](std::string key) -> std::string {
        key.erase(std::remove(key.begin(), key.end(), '\\'), key.end());
        key.erase(std::remove(key.begin(), key.end(), '"'), key.end());
        std::string curly_left = "\xe2\x80\x9c"; // “
        std::string curly_right = "\xe2\x80\x9d"; // ”
        size_t pos;
        while ((pos = key.find(curly_left)) != std::string::npos) {
            key.replace(pos, curly_left.length(), "");
        }
        while ((pos = key.find(curly_right)) != std::string::npos) {
            key.replace(pos, curly_right.length(), "");
        }
        // Remove all spaces
        key.erase(std::remove_if(key.begin(), key.end(), ::isspace), key.end());
        // Convert to lowercase for case-insensitive comparison
        std::transform(key.begin(), key.end(), key.begin(), ::tolower);
        return key;
    };
    for (auto it = root.begin(); it != root.end(); ++it) {
        std::string raw_key = it->first.as<std::string>();
        std::string norm_key = normalize_key(raw_key);
        translations[norm_key] = it->second.as<std::string>();
    }
    return translations;
}

// ==========================================================
// Step 1: If file is NOT Markdown → copy directly to public
// ==========================================================
void copyFileTopublic(const fs::path &srcFile, const fs::path &publicFile) {
    std::cout << "[LOG] Copying file: " << srcFile << " to " << publicFile << std::endl;
    fs::create_directories(publicFile.parent_path());
    fs::copy_file(srcFile, publicFile, fs::copy_options::overwrite_existing);
    std::cout << "[LOG] File copied." << std::endl;
}

// ==========================================================
// Step 2: If file IS Markdown → process as described
// ==========================================================
void processMarkdownFile(const fs::path &mdPath, const fs::path &srcRoot, const fs::path &publicRoot) {
    // --- Read source Markdown file ---
    std::cout << "[LOG] Processing Markdown file: " << mdPath << std::endl;
    std::ifstream inFile(mdPath);
    if (!inFile) {
        std::cerr << "[ERROR] Failed to open: " << mdPath << std::endl;
        return;
    }
    std::stringstream buffer;
    buffer << inFile.rdbuf();
    std::string mdContent = buffer.str();

    // Get relative path from src to maintain folder structure in public
    fs::path relPath = fs::relative(mdPath, srcRoot);

    // --- (1) Create default English HTML ---
    // Remove only the {{" and "}} markers, keep the text inside
    std::string englishContent = std::regex_replace(mdContent, std::regex(R"(\{\{\")"), "");
    englishContent = std::regex_replace(englishContent, std::regex(R"(\"\}\})"), "");
    std::string html_en = compileMarkdownToHtml(englishContent);

    // Save as original_name_en.html in public (same relative location as src)
    fs::path publicEnPath = publicRoot / relPath.parent_path() / (mdPath.stem().string() + "_en.html");
    fs::create_directories(publicEnPath.parent_path());
    std::ofstream outEn(publicEnPath);
    outEn << html_en;
    outEn.close();
    std::cout << "[LOG] Saved English HTML: " << publicEnPath << std::endl;

    // --- (2) Go up and find "i18n" folder ---
    fs::path i18nFolder = mdPath.parent_path() / "i18n";
    if (!fs::exists(i18nFolder) || !fs::is_directory(i18nFolder)) {
        std::cout << "[LOG] No i18n folder found for: " << mdPath << std::endl;
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

                std::cout << "[LOG] Processing translation: " << langCode << " for " << mdPath << std::endl;

                // Load translation map
                auto translations = loadYamlTranslations(entry.path());

                // --- (4) Replace placeholders in Markdown ---
                std::string replaced = replacePlaceholders(mdContent, translations);

                // Compile replaced Markdown → HTML
                std::string html_lang = compileMarkdownToHtml(replaced);

                // Save as original_name_langcode.html
                fs::path publicLangPath = publicRoot / relPath.parent_path() / (mdPath.stem().string() + "_" + langCode + ".html");
                fs::create_directories(publicLangPath.parent_path());
                std::ofstream outLang(publicLangPath);
                outLang << html_lang;
                outLang.close();
                std::cout << "[LOG] Saved translated HTML: " << publicLangPath << std::endl;
            }
        }
    }
}

// ==========================================================
// Recursive: Walk through src folder and process all files
// ==========================================================
void processSrcFolder(const fs::path &srcRoot, const fs::path &publicRoot) {
    std::cout << "[LOG] Starting to process src folder: " << srcRoot << std::endl;
    for (auto &entry : fs::recursive_directory_iterator(srcRoot)) {
        if (entry.is_regular_file()) {
            fs::path relPath = fs::relative(entry.path(), srcRoot);
            fs::path publicPath = publicRoot / relPath;
            if (entry.path().extension() == ".md") {
                processMarkdownFile(entry.path(), srcRoot, publicRoot);
            } else {
                copyFileTopublic(entry.path(), publicPath);
            }
        }
    }
    std::cout << "[LOG] Finished processing src folder." << std::endl;
}

// ==========================================================
// Main Entry
// ==========================================================
int main() {
    std::cout << "[LOG] Site generator started." << std::endl;
    fs::path site_root = fs::current_path(); // You can set absolute path here if needed
    fs::path srcDir = site_root / "src";
    fs::path publicDir = site_root / "public";

    if (!fs::exists(srcDir)) {
        std::cerr << "[ERROR] src directory not found." << std::endl;
        return 1;
    }

    processSrcFolder(srcDir, publicDir);

    std::cout << "[LOG] Site generation complete." << std::endl;
    return 0;
}
