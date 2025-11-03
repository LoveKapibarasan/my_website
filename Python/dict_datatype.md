### Dict(Dictionary)
 

```python
# Create
person = {
    "name": "太郎",
    "age": 25,
    "city": "東京"
}

person2 = dict(name="花子", age=30, city="大阪")

# Get
print(person["name"])  
```


```python
from dataclasses import dataclass, field
from typing import List

@dataclass
class Product:
    name: str
    price: int
    stock: int = 0

product = Product("ノートPC", 120000, 5)

# toDict
print(asdict(product))


@dataclass(frozen=True)  
class ImmutablePerson:
    name: str
    age: int
```
