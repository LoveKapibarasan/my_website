# "Python"
`
From 1990オランダのプログラマー Guido van Rossum（グイド・ヴァン・ロッサム） がクリスマス休暇中に趣味で新しいスクリプト言語を作り始めました。

from comedy England (BBC) 「Monty Python’s Flying Circus」 

* Python(ヘビ) is nor relevant.

* (URL)[https://www.python.org/]

### Install
* `~ 3.14`: `.msix`
* `%LocalAppData%\Python\bin`: Fixed Install Path

### Style
[CPython](https://github.com/python/cpython)
[RustPython](https://github.com/RustPython/RustPython.git)

## Components
* Interactive Mode -- execute per line
        * >>
        * exit
* Script
* Module
* Interpreter
* venv
* pip
* toml
* requirements
* piinstaller 


### Script vs. Module

```python
if __name__ == "__main__":
```


```python
assert condition,b
```

```python
if len(sys.argv) < 3:
        print("Usage: ~")
        sys.exit(1)
```




`%` = magic command for terminal command.

### Import

1. Package import

```python
from package import module
from package.module import function
```

2. relative import

```python
# the same level
from . import module
from .module import function

# parent
from .. import module
from ..package import module
```
> Do not add `.py` extension.

### Type check

```python
# type name:type
def print_message(msg: str) -> None:
    print(msg)
```
* `str`
* ◯ :bool ✗:boolean


### Interface

1. Not impletemted
```python
def f()
        pass
```

