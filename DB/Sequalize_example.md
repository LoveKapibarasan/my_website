# Sequalize

* ORM Library for Node.js

## Example

```bash
npm install sequelize sequelize-typescript mysql2
npm install --save-dev typescript @types/node
```


### `src/models/User.ts`
```ts
import { Table, Column, Model, DataType } from "sequelize-typescript";

@Table({
  tableName: "users",
  timestamps: true
})
export class User extends Model<User> {
  @Column({
    type: DataType.STRING,
    allowNull: false
  })
  name!: string;

  @Column({
    type: DataType.STRING,
    unique: true,
    allowNull: false
  })
  email!: string;
}
```

### `src/index.ts`

```ts
import { Sequelize } from "sequelize-typescript";
import { User } from "./models/User";

async function main() {
  const sequelize = new Sequelize({
    dialect: "mysql", // or 'postgres' | 'sqlite'
    host: "localhost",
    username: "root",
    password: "password",
    database: "test_db",
    models: [User],
    logging: false
  });

  try {
    await sequelize.authenticate();
    console.log("✅ Database connected.");

    await sequelize.sync({ force: true }); // create tables
    console.log("✅ Tables synced.");

    // Create
    const user = await User.create({ name: "Alice", email: "alice@example.com" });
    console.log("Created:", user.toJSON());

    // Read
    const found = await User.findOne({ where: { email: "alice@example.com" } });
    console.log("Found:", found?.toJSON());

    // Update
    if (found) {
      found.name = "Alice Updated";
      await found.save();
    }

    // Delete
    if (found) {
      await found.destroy();
      console.log("Deleted user.");
    }
  } catch (error) {
    console.error("❌ Error:", error);
  } finally {
    await sequelize.close();
  }
}

main();
```

### Run

```bash
npx tsc
node dist/index.js
```
