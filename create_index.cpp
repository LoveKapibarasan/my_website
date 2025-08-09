// generate_data.cpp
// Walks a directory tree and produces a data.js file compatible with the Explorer template.
// It emits: const demoFS = { ... };
// Build:  g++ -std=c++17 -O2 generate_data.cpp -o generate_data
// Usage:  ./generate_data <root_dir> [output_path]
// Example: ./generate_data ./public ./data.js

#include <bits/stdc++.h>
#include <filesystem>

namespace fs = std::filesystem;

static const std::string BASE_URL = "https://fascinating-babka-9cd698.netlify.app/"; // base URL for html files

struct Node {
  std::string name;
  std::string type; // "folder" or "file"
  uintmax_t size = 0;           // files only
  long long modified = 0;       // epoch millis
  std::string url;              // set for .html files
  std::vector<Node> children;   // folders only
};

static std::string to_lower(std::string s){
  std::transform(s.begin(), s.end(), s.begin(), [](unsigned char c){return std::tolower(c);});
  return s;
}

static bool is_html_file(const fs::directory_entry &de){
  if(!de.is_regular_file()) return false;
  auto ext = to_lower(de.path().extension().string());
  return (ext == ".html" || ext == ".htm");
}

static long long filetime_to_millis(fs::file_time_type ftime){
  using namespace std::chrono;
  auto sctp = time_point_cast<system_clock::duration>(
      ftime - fs::file_time_type::clock::now() + system_clock::now());
  return duration_cast<milliseconds>(sctp.time_since_epoch()).count();
}

static std::string json_escape(const std::string &s){
  std::string out; out.reserve(s.size()+8);
  for(char c: s){
    switch(c){
      case '"': out += "\\\""; break;
      case '\\': out += "\\\\"; break;
      case '\b': out += "\\b"; break;
      case '\f': out += "\\f"; break;
      case '\n': out += "\\n"; break;
      case '\r': out += "\\r"; break;
      case '\t': out += "\\t"; break;
      default:
        if(static_cast<unsigned char>(c) < 0x20){
          char buf[7];
          std::snprintf(buf, sizeof(buf), "\\u%04x", c);
          out += buf;
        } else out += c;
    }
  }
  return out;
}

Node build_tree(const fs::path &root, const fs::path &current, const fs::path &rel){
  Node n;
  n.name = current.filename().empty() ? std::string("root") : current.filename().string();
  n.type = fs::is_directory(current) ? "folder" : "file";

  std::error_code ec;
  auto ftime = fs::last_write_time(current, ec);
  if(!ec) n.modified = filetime_to_millis(ftime); else n.modified = 0;

  if(n.type == "file"){
    n.size = fs::file_size(current, ec);
    if(ec) n.size = 0;
    if(is_html_file(fs::directory_entry(current))){
      // Build URL from relative path using forward slashes
      fs::path relpath = rel; // relative to root
      std::string relunix = relpath.generic_string();
      if(!relunix.empty() && relunix[0] == '/') relunix.erase(0,1);
      n.url = BASE_URL + relunix;
    }
  } else {
    // folder: iterate children
    std::vector<Node> kids;
    for (auto &de : fs::directory_iterator(current)){
      // skip symlinks
      std::error_code tec; auto stat = de.symlink_status(tec);
      if(tec) continue;
      if(fs::is_symlink(stat)) continue;

      fs::path child_rel = rel / de.path().filename();
      kids.emplace_back(build_tree(root, de.path(), child_rel));
    }
    // sort: folders first by name, then files by name
    std::sort(kids.begin(), kids.end(), [](const Node &a, const Node &b){
      if(a.type != b.type) return a.type == "folder"; // folders first
      return to_lower(a.name) < to_lower(b.name);
    });
    n.children = std::move(kids);
  }
  return n;
}

void write_node(std::ostream &os, const Node &n, int indent=0){
  auto ind = std::string(indent, ' ');
  os << ind << "{\n";
  os << ind << "  \"name\": \"" << json_escape(n.name) << "\",\n";
  os << ind << "  \"type\": \"" << n.type << "\"";
  if(n.type == "file"){
    os << ",\n" << ind << "  \"size\": " << n.size << ",\n";
    os << ind << "  \"modified\": " << n.modified;
    if(!n.url.empty()){
      os << ",\n" << ind << "  \"url\": \"" << json_escape(n.url) << "\"";
    }
  } else {
    os << ",\n" << ind << "  \"children\": [\n";
    for(size_t i=0;i<n.children.size();++i){
      write_node(os, n.children[i], indent+4);
      if(i+1<n.children.size()) os << ",";
      os << "\n";
    }
    os << ind << "  ]";
  }
  os << "\n" << ind << "}";
}

int main(int argc, char **argv){
  if(argc < 2){
    std::cerr << "Usage: " << argv[0] << " <root_dir> [output_path]\n";
    return 1;
  }
  fs::path root = fs::path(argv[1]);
  if(!fs::exists(root) || !fs::is_directory(root)){
    std::cerr << "Error: root_dir does not exist or is not a directory\n";
    return 2;
  }

  std::unique_ptr<std::ostream> outOwned;
  std::ostream *out = &std::cout;
  if(argc >= 3){
    outOwned = std::make_unique<std::ofstream>(argv[2]);
    if(!*outOwned){
      std::cerr << "Error: cannot open output file\n";
      return 3;
    }
    out = outOwned.get();
  }

  Node rootNode;
  rootNode.name = "root";
  rootNode.type = "folder";
  rootNode.modified = 0;
  for(auto &de : fs::directory_iterator(root)){
    std::error_code tec; auto st = de.symlink_status(tec);
    if(tec) continue; if(fs::is_symlink(st)) continue;
    Node child = build_tree(root, de.path(), de.path().lexically_relative(root));
    rootNode.children.push_back(std::move(child));
  }
  std::sort(rootNode.children.begin(), rootNode.children.end(), [](const Node &a, const Node &b){
    if(a.type != b.type) return a.type == "folder";
    return to_lower(a.name) < to_lower(b.name);
  });

  // Emit JS file that the template can load before its script.
  *out << "// Auto-generated by generate_data.cpp\n";
  *out << "const demoFS = ";
  write_node(*out, rootNode, 0);
  *out << ";\n";

  return 0;
}
