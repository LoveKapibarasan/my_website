# Vite
* フランス語で「速い」
* by Evan You（Vue.jsの作者）
* TS + esbuild(JS -> TS, by GO) for development,  Rollup (JavaScript) for deploy

**Config**: `vite.config.ts`
* transpile and return file when needed.

### Native ES modules
```html
<script src="bundle.js"></script>

<!-- Now -->
<script type="module">
  import App from './App.js';
</script>
```

### vite.config.ts
```ts
import { defineConfig } from 'vite'
import react from '@vitejs/plugin-react'

export default defineConfig({
  // Plugin
  plugins: [react()],
  
  // base path
  base: '/',
  
  // dev server
  server: {
    port: 3000,
    open: true,  // automatically open a browser
    host: true   // liste on 0.0.0.0 
  },
  
  // build setting
  build: {
    outDir: 'dist',
    sourcemap: true,
    minify: 'esbuild'
  },
  // alias setting
  resolve: {
    alias: {
      '@': path.resolve(__dirname, './src')
    }
  }
})

```

### Alias

```ts
// without
import { User } from '../../../model/interfaces/User'

// alias
import { User } from '@interfaces/User'
```
