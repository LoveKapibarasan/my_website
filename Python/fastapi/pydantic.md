# Pydantic

**Pydantic** is a library often used together with FastAPI. In short:

---

## 🔹 What is Pydantic?

* **Data validation**
  → Automatically checks if incoming data has the correct type and format.

* **Data parsing**
  → Automatically converts types (e.g., string `"123"` to integer `123`).

* **Data models (schemas)**
  → By inheriting from `BaseModel`, you can declare what kind of data your app expects.

* **Role in FastAPI**
  → Defines request bodies and response formats, which are then automatically reflected in Swagger UI.

---

## 🔹 Simple Example

```python
from pydantic import BaseModel

# Define a data model
class User(BaseModel):
    id: int
    name: str
    email: str
    is_active: bool = True  # default value

# Input data (e.g., JSON)
input_data = {
    "id": "1",          # ← string is fine (auto-converted to int)
    "name": "Alice",
    "email": "alice@example.com"
}

# Parse through the model
user = User(**input_data)

print(user)
# → id=1 name='Alice' email='alice@example.com' is_active=True

print(user.dict())
# → {'id': 1, 'name': 'Alice', 'email': 'alice@example.com', 'is_active': True}
```

---

## 🔹 Benefits

1. **Type safety** → Automatic validation reduces bugs.
2. **Declarative** → Data structures are clearly defined with classes.
3. **FastAPI integration** → Works directly with auto-generated API docs.

---

👉 In summary, **Pydantic = a tool for safe data handling in Python with type checking & conversion**, and it’s basically the “heart” of FastAPI.

---

Which would you like to dive into next?

* **Concrete usage in FastAPI**
* **Pydantic basics (required/optional fields, validation rules)**
