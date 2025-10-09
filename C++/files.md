

* `std::directory_iterator` = `ls -a`


```cpp
    namespace fs = std::filesystem;
    const fs::path targetPath("/usr");
    const auto dirIter = fs::directory_iterator(targetPath);
```
[Ref1](https://zenn.dev/enchan1207/articles/29de772131de13)
