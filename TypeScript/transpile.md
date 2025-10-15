✘　compile

## tsconfig.json in the root directly

```json
{
  "compilerOptions": {
    "target": "ES2020",            // JavaScript version to output
    "module": "commonjs",          // Module system
    "strict": true,                // Enable strict type checking
    "esModuleInterop": true,       // Compatibility between import and require
    "noEmit": true,                 // Do not ourput JS. Only do type check
    "outDir": "./dist",            // Output folder for compiled files
    "rootDir": "./src"             // Root folder of source files
  },
  "include": ["src/**/*"],         // Files to compile
  "references": [
    {
      "path": "./tsconfig.node.json" // nodemon
    }
  ],
  "exclude": ["node_modules"]      // Files/folders to ignore
}
```



| Option              | Description                                                 |
| ------------------- | ----------------------------------------------------------- |
| `target`            | JavaScript version to output (`ES5`, `ES6`, `ES2020`, etc.) |
| `module`            | Module format (`commonjs`, `esnext`, etc.)                  |
| `strict`            | Turns on all strict type-checking options                   |
| `esModuleInterop`   | Ensures compatibility between `import` and `require`        |
| `outDir`            | Output directory for compiled JS files                      |
| `rootDir`           | Root directory of your TypeScript source files              |
| `baseUrl` / `paths` | Set up path aliases for module imports                      |

```bash
npx tsc --init
npx tsc "$file1" "$file2"
npx tsc # Compile based on tsconfig.json
npx tsc watch # = npx tsc w = nodemon
# --build 
# --verbose
```



With `rootDir`
```
project/
├── tsconfig.json
├── src/              ← remains
│   ├── index.ts
│   ├── utils.ts
│   └── types/
│       └── user.ts
├── dist/             ← generated
│   ├── index.js , index.d.ts  ←  d.ts type definition file
│   ├── utils.js
│   └── types/
│       └── user.js
└── package.json
```
Without
```
project/
├── dist/
│   └── src/              ← src is included
│       ├── index.js
│       ├── utils.js
│       └── types/
│           └── user.js
```
