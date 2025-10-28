**migration**
* is a file that describes changes you want to make to your database, like creating tables or constraints.

* in `\migration` folder.

```bash
# do migration at the root of project
npx sequelize-cli db:migrate --debug
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
