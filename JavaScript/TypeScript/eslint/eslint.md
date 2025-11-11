# Difference

Prettier = automatic code formatter (style)

ESLint = code linter (finds problems, possible bugs, bad patterns)


# ESLint (ECMAScript Lint)

“Lint” = term from old UNIX tools → means static code analysis (finding potential errors, bad patterns, or risky code before running it).

* ESLint is a static code analysis tool for JavaScript/TypeScript that automatically checks your code for quality and style issues.

```bash
# Install in project
npm install eslint --save-dev

# Or with yarn
yarn add eslint --dev

npx eslint --init

# Check src directory
npx eslint src
# fix
npx eslint src --fix
```
## config (.eslintrc.json)
```json
{
  "env": {
    "browser": true,
    "es2021": true
  },
  "extends": [
    "eslint:recommended",
    "plugin:@typescript-eslint/recommended"
  ],
  "parser": "@typescript-eslint/parser",
  "plugins": ["@typescript-eslint"],
  "rules": {
    "semi": ["error", "always"],
    "quotes": ["error", "double"]
  }
}
```
* **🔹 env**

Defines the environments your code is meant to run in. This enables specific global variables.

"browser": true → allows browser globals like window, document, etc.
"es2021": true → enables ES2021 (modern JavaScript) features, like logical assignment operators (&&=, ||=).

* **🔹 extends**
Loads base rule sets.

"eslint:recommended" → enables a set of recommended rules by ESLint itself.

"plugin:@typescript-eslint/recommended" → adds recommended rules for TypeScript (such as type safety checks).

* **🔹 parser**

"@typescript-eslint/parser" → tells ESLint to use the special TypeScript parser, so it can understand TypeScript syntax (interfaces, types, enums, etc.).

* **🔹 plugins**
["@typescript-eslint"] → adds extra rules for TypeScript, provided by the ESLint TypeScript plugin.