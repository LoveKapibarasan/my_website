// generate_data.cpp
// Walk a directory tree and produce data.js for the Explorer UI.
// Emits: const demoFS = { ... };
// Build:  g++ -std=c++17 -O2 generate_data.cpp -o generate_data
// Usage:  ./generate_data <root_dir> [output_path]
// Example: ./generate_data ./public ./data.js

#include <algorithm>
#include <chrono>
#include <cctype>
#include <filesystem>
#include <fstream>
#include <iostream>
#include <memory>
#include <string>
#include <vector>

namespace fs = std::filesystem;

static const std::string BASE_URL =
    "https://fascinating-babka-9cd698.netlify.app/"; // base URL for ALL files

struct Node {
  std::string name;
  std::string type;        // "folder" or "file"
  uintmax_t size = 0;      // files only
  long long modified = 0;  // epoch millis
  std::string url;         // set for all files
  std::vector<Node> children; // folders only
};

static std::string to_lower(std::string s) {
  std::transform(s.begin(), s.end(), s.begin(),
                 [](unsigned char c) { return std::tolower(c); });
  return s;
}

static long long filetime_to_millis(fs::file_time_type ftime) {
  using namespace std::chrono;
  auto sctp =
      time_point_cast<system_clock::duration>(ftime - fs::file_time_type::clock::now() +
                                              system_clock::now());
  return duration_cast<milliseconds>(sctp.time_since_epoch()).count();
}

static std::string json_escape(const std::string &s) {
  std::string out;
  out.reserve(s.size() + 8);
  for (unsigned char c : s) {
    switch (c) {
    case '"': out += "\\\""; break;
    case '\\': out += "\\\\"; break;
    case '\b': out += "\\b"; break;
    case '\f': out += "\\f"; break;
    case '\n': out += "\\n"; break;
    case '\r': out += "\\r"; break;
    case '\t': out += "\\t"; break;
    default:
      if (c < 0x20) {
        char buf[7];
        std::snprintf(buf, sizeof(buf), "\\u%04x", c);
        out += buf;
      } else {
        out += static_cast<char>(c);
      }
    }
  }
  return out;
}

// Percent-encode path segments except for unreserved + '/'.
static std::string url_encode_path(const std::string &p) {
  static auto is_unreserved = [](unsigned char c) {
    return (std::isalnum(c)) || c == '-' || c == '_' || c == '.' || c == '~' || c == '/';
  };
  const char *hex = "0123456789ABCDEF";
  std::string out;
  out.reserve(p.size() * 3);
  for (unsigned char c : p) {
    if (is_unreserved(c)) {
      out += c;
    } else {
      out += '%';
      out += hex[c >> 4];
      out += hex[c & 15];
    }
  }
  return out;
}

Node build_tree(const fs::path &current, const fs::path &rel_from_root) {
  Node n;
  n.name = current.filename().empty() ? std::string("root")
                                      : current.filename().string();
  n.type = fs::is_directory(current) ? "folder" : "file";

  std::error_code ec;
  auto ftime = fs::last_write_time(current, ec);
  n.modified = ec ? 0 : filetime_to_millis(ftime);

  if (n.type == "file") {
    n.size = fs::file_size(current, ec);
    if (ec) n.size = 0;

    // Build URL for ALL files from relative path with forward slashes.
    std::string relunix = rel_from_root.generic_string();
    if (!relunix.empty() && relunix.front() == '/') relunix.erase(0, 1);
    n.url = BASE_URL + url_encode_path(relunix);
  } else {
    for (auto &de : fs::directory_iterator(current)) {
      std::error_code tec;
      auto st = de.symlink_status(tec);
      if (tec) continue;
      if (fs::is_symlink(st)) continue; // skip symlinks
      fs::path child_rel = rel_from_root / de.path().filename();
      n.children.emplace_back(build_tree(de.path(), child_rel));
    }
    // Sort: folders first, then by name (case-insensitive)
    std::sort(n.children.begin(), n.children.end(),
              [](const Node &a, const Node &b) {
                if (a.type != b.type) return a.type == "folder";
                return to_lower(a.name) < to_lower(b.name);
              });
  }
  return n;
}

void write_node(std::ostream &os, const Node &n, int indent = 0) {
  std::string ind(indent, ' ');
  os << ind << "{\n";
  os << ind << "  \"name\": \"" << json_escape(n.name) << "\",\n";
  os << ind << "  \"type\": \"" << n.type << "\"";
  if (n.type == "file") {
    os << ",\n" << ind << "  \"size\": " << n.size << ",\n";
    os << ind << "  \"modified\": " << n.modified << ",\n";
    os << ind << "  \"url\": \"" << json_escape(n.url) << "\"";
  } else {
    os << ",\n" << ind << "  \"children\": [\n";
    for (size_t i = 0; i < n.children.size(); ++i) {
      write_node(os, n.children[i], indent + 4);
      if (i + 1 < n.children.size()) os << ",";
      os << "\n";
    }
    os << ind << "  ]";
  }
  os << "\n" << ind << "}";
}

int main(int argc, char **argv) {
  if (argc < 2) {
    std::cerr << "Usage: " << argv[0] << " <root_dir> [output_path]\n";
    return 1;
  }
  fs::path root = fs::path(argv[1]);
  if (!fs::exists(root) || !fs::is_directory(root)) {
    std::cerr << "Error: root_dir does not exist or is not a directory\n";
    return 2;
  }

  std::unique_ptr<std::ostream> outOwned;
  std::ostream *out = &std::cout;
  if (argc >= 3) {
    outOwned = std::make_unique<std::ofstream>(argv[2]);
    if (!*outOwned) {
      std::cerr << "Error: cannot open output file\n";
      return 3;
    }
    out = outOwned.get();
  }

  Node rootNode;
  rootNode.name = "root";
  rootNode.type = "folder";
  rootNode.modified = 0;

  for (auto &de : fs::directory_iterator(root)) {
    std::error_code tec;
    auto st = de.symlink_status(tec);
    if (tec) continue;
    if (fs::is_symlink(st)) continue;
    fs::path child_rel = de.path().lexically_relative(root);
    rootNode.children.emplace_back(build_tree(de.path(), child_rel));
  }

  std::sort(rootNode.children.begin(), rootNode.children.end(),
            [](const Node &a, const Node &b) {
              if (a.type != b.type) return a.type == "folder";
              return to_lower(a.name) < to_lower(b.name);
            });

  *out << "// Auto-generated by generate_data.cpp\n";
  *out << "const demoFS = ";
  write_node(*out, rootNode, 0);
  *out << ";\n";
  return 0;
}
