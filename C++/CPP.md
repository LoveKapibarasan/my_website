#  C++ basic manual

## List of compilers

* GCC/G++
* Clang


## How to compile


### GCC/G++

```cpp
g++ program.cpp -o program
```

### Clang
```
clang++ program.cpp -o program
```

## How to execute

```bash
./program
```

## Preprocessor directive
```cpp
// Windows
#ifdef _WIN32 // If defined
```


## Comment
* `//`, `/**/`
## Print
```cpp
#include <iostream> 
using namespace std; // omit std
cout << "Hello," << "World " << var << " !" << endl;
// cout = console output
// <<  = insert
// endl = \n + buffer flush
// \\n = \n
```

### Debug
```cpp
#include <spdlog/spdlog.h>

int main() {
    spdlog::info("Debug: x = {}", 42);
    spdlog::warn("This is a warning message.");
    spdlog::error("An error occurred!");
    return 0;
}
```

