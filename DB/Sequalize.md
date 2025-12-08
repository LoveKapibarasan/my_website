**migration**
* is a file that describes changes you want to make to your database, like creating tables or constraints.
* It used used to patch or fix bugs, bad database design(e.g. `flatten`) without losing data.

* in `/migration/timestamp-xxx`.

```bash
# do migration at the root of project
# create a table or change data structure safely
npx sequelize-cli db:migrate --debug
```

`.sequelizerc`
```
const path = require('path');

module.exports = {  'config': path.resolve('xxx.js'),
  'models-path': path.resolve('Data', 'src', 'model'),
  'seeders-path': path.resolve('seeders'), // insert dummy data in development environment
  'migrations-path': path.resolve('migrations') 
}
```
**Config**:
```js
module.exports = {
  development: {
    username: 'dev_user',
    password: 'dev_pass',
    database: 'dev_db',
    host: 'localhost',
    port: 5432,
    dialect: 'postgres'
  },
  production: {
    username: process.env.DB_USER,
    password: process.env.DB_PASSWORD,
    database: process.env.DB_NAME,
    host: process.env.DB_HOST,
    port: process.env.DB_PORT,
    dialect: 'postgres'
  }
}
```

**SQL**
`queryInterface.sequelize.query()`
* Up: migration
* Down: RollBack

```js
import { QueryInterface } from 'sequelize';

module.exports = {
  async up(queryInterface: QueryInterface) {
    await queryInterface.createTable('users', {
      id: {
        type: DataTypes.INTEGER,
        primaryKey: true,
        autoIncrement: true
      },
      name: DataTypes.STRING
    });
  },
  async down(queryInterface: QueryInterface) {
    await queryInterface.dropTable('users');
  }
};
```

* `createTable()` 
* `dropTable()`
* `addColumn()`
* `removeColumn()`
* `renameTable()`
