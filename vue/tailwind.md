# 🚀 Vue 3 + TypeScript + TailwindCSS Manual

## 1. Install Tailwind

```bash
npm install -D tailwindcss @tailwindcss/postcss autoprefixer
```

### Config files (Tailwind v4+ has no `init`)

**tailwind.config.js**

```js
/** @type {import('tailwindcss').Config} */
export default {
  content: [
    "./index.html",
    "./src/**/*.{vue,js,ts,jsx,tsx}"
  ],
  theme: {
    extend: {},
  },
  plugins: [],
}
```

**postcss.config.js**

```js
import tailwindcss from '@tailwindcss/postcss'
import autoprefixer from 'autoprefixer'

export default {
  plugins: [
    tailwindcss,
    autoprefixer,
  ],
}
```

---

## Setup Stylesheet

**src/style.css**

```css
@tailwind base;
@tailwind components;
@tailwind utilities;
```

**src/main.ts**

```ts
import { createApp } from 'vue'
import App from './App.vue'
import './style.css'

createApp(App).mount('#app')
```

