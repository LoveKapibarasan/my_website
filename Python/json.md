

| Purpose                                     | Method         | Example                               |
| ------------------------------------------- | -------------- | ------------------------------------- |
| Convert a **Python object → JSON string**   | `json.dumps()` | `json.dumps({"a":1})` → `'{"a": 1}'`  |
| Write a Python object as JSON to a **file** | `json.dump()`  | `json.dump(data, f)`                  |
| Parse a JSON **string → Python object**     | `json.loads()` | `json.loads('{"a": 1}')` → `{'a': 1}` |
| Read JSON from a **file → Python object**   | `json.load()`  | `json.load(f)`                        |

### Load from file
```python
import json
with open('data.json', 'r', encoding='utf-8') as f:
    data = json.load(f)
```

### Dict to JSON
```python
import json

# Dict → JSON
data = {"name": "佐藤", "age": 25}
json_string = json.dumps(data, ensure_ascii=False, indent=2)
print(json_string)

# JSON → Dict
json_text = '{"name": "田中", "age": 28}'
obj = json.loads(json_text)
print(obj)
```
