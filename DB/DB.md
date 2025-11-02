## 

* Foreign Key
    * `ON DELETE CASCADE ON UPDATE CASCADE`
* Primary key

**Transaction**
* `Auto Commit`
* `Commit`: Execute
* `RollBack`: Cancel

### Diagram

1. Schema Diagram
* Concept
* Relationship between entities.

1. ER Diagram（Entity-Relationship Diagram）
* Implementation
* Table, Attributes(Column), PK or FK and reference.


* use (the power of 2) - 1 for `VARCHAR(n)`


**Flatten**
（TableA, TableB,..) -> One Table
```
Nested:
{ id: 1, name: "太郎", tags: ["Python", "JavaScript"] }

flatten:
id=1, name="太郎", tag="Python"
id=1, name="太郎", tag="JavaScript"
```

## Cloud Database

```yaml
host: mydb.abc123xyz.us-east-1.rds.amazonaws.com
port: port_number
user: admin
password: xxxxx
database: name
```
#### Instance ＝ A server that the cloud automatically provides for you

* When you specify things like CPU, memory, and disk (SSD) performance,
→ the cloud will provision a virtual machine behind the scenes that fits those specs.

* On that machine, software like PostgreSQL / MySQL / MongoDB is pre-installed and already running.

* You only need to think about “using the database” — you don’t see or manage the OS or the machine itself.

## ORM（Object-Relational Mapping）
* a mechanism for connecting  object-oriented programming (classes and objects) with  relational databases (tables, rows, and columns) without SQL.

Table ↔ Class ↔ Instance

```ts
// User Class
class User {
  id!: number;
  name!: string;
}

// ORM
const users = await UserRepository.findAll(); // SELECT * FROM users;
```


### JavaScript / TypeScript

* Sequelize

* TypeORM

* Prisma

### Python

* SQLAlchemy

* Django ORM

### Java

* Hibernate

* JPA (Java Persistence API)

**JDBC**
* Java Database Connectivity. 
* It's a Java API (Application Programming Interface) that allows Java programs to interact with databases.

### PHP

* Doctrine

* Eloquent（Laravel）

## DB
* MariaDB
* PostgreSQL


## Inmemory DB

* (e.g. H2, valkey, redis)
* used for storing cache or testing purpose.

### Time Stamp

* `createdAt` and `updatedAt`
