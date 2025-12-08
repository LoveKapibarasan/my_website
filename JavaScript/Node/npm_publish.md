## ① Prepare package.json 
```bash
npm init
```

| Field           | Description                                 |
| --------------- | ------------------------------------------- |
| `name`          | Package name (must be unique on npm)        |
| `version`       | Version number (e.g. 1.0.0)                 |
| `main`          | Entry point file (e.g. dist/index.js)       |
| `files`         | (Optional) Files to include when publishing |
| `bin`           | (Optional) For distributing a CLI tool      |
| `scripts.build` | (Optional) Build command (e.g. ts → js)     |
| `keywords`      | Search keywords                             |
| `license`       | License (MIT / Apache-2.0 etc.)             |

## ② Create npm account & login
```bash
npm login
```

## ③ Prepare package for publishing

If using TypeScript, output compiled JS to dist/.

Exclude unnecessary files using .npmignore (separate from .gitignore), e.g.:

## ④ Publish
```bash
npm publish
```
   *  Default: public

   *  For private publish → `npm publish --access=restricted`

## ⑤ Version updates 
```bash
npm version patch   # or minor / major
npm publish
```
