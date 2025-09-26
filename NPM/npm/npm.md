# npm = node.js package manager

# Basic Flow

```bash
npm install # install dependencies
npm run buil # typically build command is defined
npm run start # 
```

## Notes

```bash
npm init -y # Auto setup
```


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


* **"keywords"**

- for searching npm package.

## Notes

## 
**Install**
* `npm i` = `npm install`
  * Install all dependencies and create `node_modules` folder.
  * --verbose 「冗長な」「しゃべりすぎな」
```txt
📁 my-project
 ┣ 📄 package.json        ← Dependencies
 ┗ 📁 node_modules/       ← ← after npm install
 |       @name

```

* `--prefix` = cd  

* `-D` = `--save-dev` = saves it under

* `@` = scope indicator
> The package belongs to the scope (organization or namespace) e.g.@directus.

* `-g` = global install. `~/.npm-global/lib/node_modules`

## Version

```bash
npm show <name> version
npm info <name> # dependencies
```


## npx
* a command that comes with npm (since npm v5.2.0) and is used to run Node.js packages **without installing them globally.**

## nodemon

* {{"If you change your source code (like .js, .ts, .json, etc.),
nodemon automatically restarts your Node.js process for you — so you don’t need to stop and start it manually every time you make a change."}}

## SSl certification Error

```bash
npm config set strict-ssl false
```


**Localhost conflict**
```bash
npm run dev -- --host 127.0.0.1
```

## np ci
```bash
npm ci（Continuous Integration ）# Strictly follow package-lock.json
```