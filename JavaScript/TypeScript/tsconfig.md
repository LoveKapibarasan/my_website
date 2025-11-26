## tsconfig.json

Setting file.

```json
{
  "compilerOptions": {
    "target": "ES2019",
    "module": "commonjs",
    "outDir": "dist",
    "rootDir": "src",
    "strict": true,
    "esModuleInterop": true,
    "skipLibCheck": true
  },
  "include": ["src/**/*"],
  "exclude": ["node_modules"]
}
```

## tsconfig.tsbuildinfo
* It stores metadata about the last compilation — what files were compiled, their version hashes, dependencies, etc.
