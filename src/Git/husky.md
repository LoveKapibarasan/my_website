# husky (Dog??)

For node.js only.

```bash
npm install husky --save-dev
npx husky init

```

```
.husky/ # project root
├── pre-commit   # Before git commit
└── pre-push     # Before git push
```

```bash
#!/bin/sh
. "$(dirname -- "$0")/_/husky.sh"

# example
bash ./example/example.sh

```

```bash
npm install lint-staged --save-dev
npx lint-staged # lint staged files
```