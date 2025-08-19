

```bash
npm run script
```

**package.json**

```json
{
  "scripts": {
    "script": "ts-node src/index.ts"
  }
}
// start, clean are often used
```

| Field             | Description                                                         |
| ----------------- | ------------------------------------------------------------------- |
| `name`            | Project name (also used as the package name when publishing to npm) |
| `version`         | Project version (follows Semantic Versioning)                       |
| `description`     | Short description of the project                                    |
| `main`            | Entry point file when the package is required/imported as a module  |
| `scripts`         | Commands you can run with `npm run <script-name>`                   |
| `dependencies`    | List of libraries required at runtime                               |
| `devDependencies` | List of libraries required only during development                  |
| `engines`         | Specifies the required Node.js / npm version                        |
| `license`         | License information for the project                                 |


## Notes

## 
* `npm i` = `npm install`
  * Install all dependencies and create `node_modules` folder.


* `-D` = `--save-dev` = saves it under

* `@` = scope indicator
> The package belongs to the scope (organization or namespace) e.g.@directus.

## npx
* a command that comes with npm (since npm v5.2.0) and is used to run Node.js packages **without installing them globally.**
