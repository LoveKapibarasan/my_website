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

### PHP

* Doctrine

* Eloquent（Laravel）