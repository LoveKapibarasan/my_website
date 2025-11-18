## 📂 Example Directory Structure

```bash
myapp/
│── app/
│   ├── __init__.py
│   ├── main.py          # Entry point
│   ├── core/            # Config and shared utilities
│   │   ├── __init__.py
│   │   └── config.py
│   ├── api/             # Routing
│   │   ├── __init__.py
│   │   ├── deps.py      # Shared dependencies
│   │   └── v1/          # Versioned API
│   │       ├── __init__.py
│   │       ├── routes_items.py
│   │       └── routes_users.py
│   ├── models/          # Pydantic & DB models
│   │   ├── __init__.py
│   │   ├── item.py
│   │   └── user.py
│   └── services/        # Business logic
│       ├── __init__.py
│       └── item_service.py
│
└── requirements.txt
```

---

## Example Code

### `app/main.py` (Entry Point)

```python
from fastapi import FastAPI
from app.api.v1 import routes_items, routes_users

app = FastAPI(
    title="My Large App",
    description="Sample structure for a large FastAPI app",
    version="1.0.0"
)

# Register routers
app.include_router(routes_items.router, prefix="/api/v1/items", tags=["Items"])
app.include_router(routes_users.router, prefix="/api/v1/users", tags=["Users"])
```

---

### `app/models/item.py`

```python
from pydantic import BaseModel

class Item(BaseModel):
    id: int
    name: str
    price: float
    in_stock: bool = True
```

---

### `app/models/user.py`

```python
from pydantic import BaseModel, EmailStr

class User(BaseModel):
    id: int
    username: str
    email: EmailStr
```

---

### API behavior
`app/api/v1/routes_items.py`

```python
from fastapi import APIRouter
from app.models.item import Item
from app.services.item_service import get_items, create_item

router = APIRouter()

@router.get("/", response_model=list[Item])
def read_items():
    return get_items()

@router.post("/", response_model=Item)
def add_item(item: Item):
    return create_item(item)
```

---

### `app/services/item_service.py`

```python
from app.models.item import Item

# Mock data (replace with DB access in production)
items = [
    Item(id=1, name="Laptop", price=1200.0, in_stock=True),
    Item(id=2, name="Phone", price=800.0, in_stock=False),
]

def get_items() -> list[Item]:
    return items

def create_item(item: Item) -> Item:
    items.append(item)
    return item
```

---

### `app/core/config.py`

```python
import os

class Settings:
    PROJECT_NAME: str = "My Large App"
    API_V1_STR: str = "/api/v1"
    DATABASE_URL: str = os.getenv("DATABASE_URL", "sqlite:///./test.db")

settings = Settings()
```

---

## Key Points

* **`main.py`** → Entry point, registers routers.
* **`api/`** → Organized routes (`items`, `users`, etc.).
* **`models/`** → Request/response Pydantic models & DB models.
* **`services/`** → Business logic (DB operations, external APIs, etc.).
* **`core/`** → Settings, auth, shared configs.

This structure keeps the app maintainable as it grows.

---

