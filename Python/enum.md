

[Reference](https://docs.python.org/en/3/library/enum.html)
```python
from enum import Enum

# class syntax
class Color(Enum):
    RED = 1
    GREEN = 2
    BLUE = 3

# functional syntax
Color = Enum('Color', [('RED', 1), ('GREEN', 2), ('BLUE', 3)])
```