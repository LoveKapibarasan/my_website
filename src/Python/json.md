

| Purpose                                     | Method         | Example                               |
| ------------------------------------------- | -------------- | ------------------------------------- |
| Convert a **Python object → JSON string**   | `json.dumps()` | `json.dumps({"a":1})` → `'{"a": 1}'`  |
| Write a Python object as JSON to a **file** | `json.dump()`  | `json.dump(data, f)`                  |
| Parse a JSON **string → Python object**     | `json.loads()` | `json.loads('{"a": 1}')` → `{'a': 1}` |
| Read JSON from a **file → Python object**   | `json.load()`  | `json.load(f)`                        |

