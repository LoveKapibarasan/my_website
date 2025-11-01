# "Python"
`
From 1990オランダのプログラマー Guido van Rossum（グイド・ヴァン・ロッサム） がクリスマス休暇中に趣味で新しいスクリプト言語を作り始めました。

from comedy England (BBC) 「Monty Python’s Flying Circus」 

* Python(ヘビ) is nor relevant.

* (URL)[https://www.python.org/]

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

## Type check

```python
def print_message(msg: str) -> None:
    print(msg)
```

* ◯ bool ✗boolean
