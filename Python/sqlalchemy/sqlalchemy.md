

ORM（Object Relational Mapper）+ SQL tool kit.

**Engine**: database connection

**Session(ORM)**

**metadata**
* stores table definition



### Basic

```python
from sqlalchemy import create_engine, MetaData, Table, Column, Integer, String, select

engine = create_engine("sqlite+pysqlite:///./example.db", echo=True, future=True)
metadata = MetaData()

users = Table(
    "users", metadata,
    Column("id", Integer, primary_key=True),
    Column("name", String, nullable=False),
)

# create all table
metadata.create_all(engine)
```

### ORM

```python
from sqlalchemy import create_engine, Integer, String, Column, ForeignKey, select
from sqlalchemy.orm import declarative_base, relationship, sessionmaker

Base = declarative_base()

class User(Base):
    __tablename__ = "users"
    id = Column(Integer, primary_key=True)
    name = Column(String, nullable=False)
    addresses = relationship("Address", back_populates="user")
```

