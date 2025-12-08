
1. Create npm account
2. `npm login`
3. Create `package.json` and `.npmignore`
4. `npm publish`
`npm publish --access public` -- with scope for free plan
`@username/package-name` or `@organization/package-name`

```json
{
  "name": "@username/packagename",
}
```

**Version Management**
```bash
npm version patch  # 1.0.0 → 1.0.1
npm version minor  # 1.0.0 → 1.1.0
npm version major  # 1.0.0 → 2.0.0

npm publish
```
