Python allows you to create custom data types using several approaches. 

## 1. **Classes (Most Common)**


## 2. **Data Classes (Python 3.7+)**

```python
from dataclasses import dataclass

@dataclass
class Point:
    x: float
    y: float

    def distance_from_origin(self):
        return (self.x**2 + self.y**2)**0.5

# Usage
p = Point(3.0, 4.0)
print(p)  # Point(x=3.0, y=4.0)
print(p.distance_from_origin())  # 5.0
```

## 3. **Named Tuples**

```python
from collections import namedtuple

# Method 1: Using namedtuple
Person = namedtuple('Person', ['name', 'age', 'city'])

# Method 2: Using NamedTuple (Python 3.6+)
from typing import NamedTuple

class Employee(NamedTuple):
    name: str
    id: int
    department: str

# Usage
emp = Employee("Bob", 12345, "Engineering")
print(emp.name)  # Bob
print(emp[0])    # Bob (also accessible by index)
```

## 4. **Enumerations**

```python
from enum import Enum, auto

class Color(Enum):
    RED = 1
    GREEN = 2
    BLUE = 3

class Status(Enum):
    PENDING = auto()
    APPROVED = auto()
    REJECTED = auto()

# Usage
favorite = Color.RED
print(favorite)        # Color.RED
print(favorite.value)  # 1
```
