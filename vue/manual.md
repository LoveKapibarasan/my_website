# Vue 3 + Vite

---

## 🔹 1. Requirements

* Node.js (recommended: 18 or higher)
  → Check with `node -v`
* npm or yarn (either works)

---

## 🔹 2. Create a Project

```bash
# Create with npm
npm create vite@latest <name>

# Choose in the prompt
# ? Select a framework: › Vue
# ? Select a variant: › JavaScript or TypeScript
```

```bash
cd my-vue-app
npm install
npm run dev
```

👉 Your app will be running at `http://localhost:5173/`

---

## 🔹 3. Directory Structure (initial)

```
my-vue-app/
├── index.html
├── package.json
├── vite.config.js
├── src/
│   ├── main.js        # Entry point
│   ├── App.vue        # Root component
│   └── components/    # Component folder
```

---

## 🔹 4. Example Code

### `src/components/Hello.vue`

```vue
<template>
  <div>
    <h1>Hello {{ name }} 👋</h1>
    <button @click="toggle">Toggle</button>
    <p v-if="show">This is Vue 3 + Vite!</p>
  </div>
</template>

<script setup>
import { ref } from "vue"

const name = ref("World")
const show = ref(true)

function toggle() {
  show.value = !show.value
}
</script>

<style scoped>
h1 { color: #42b983; }
</style>
```

### `src/App.vue`

```vue
<template>
  <Hello />
</template>

<script setup>
import Hello from "./components/Hello.vue"
</script>
```

---

## 🔹 5. Fetching from FastAPI

Example: `src/components/Items.vue`

```vue
<template>
  <div>
    <h2>Items from FastAPI</h2>
    <ul>
      <li v-for="item in items" :key="item.id">
        {{ item.name }} - {{ item.price }} €
      </li>
    </ul>
  </div>
</template>

<script setup>
import { ref, onMounted } from "vue"

const items = ref([])

onMounted(async () => {
  const res = await fetch("http://localhost:8000/api/v1/items")
  items.value = await res.json()
})
</script>
```

---

## 🔹 6. FastAPI (CORS Settings) `app/main.py`

Allow Vue ([http://localhost:5173](http://localhost:5173)) to access FastAPI ([http://localhost:8000](http://localhost:8000)):

```python
from fastapi.middleware.cors import CORSMiddleware

app.add_middleware(
    CORSMiddleware,
    allow_origins=["http://localhost:5173"],  # Vue dev server
    allow_credentials=True,
    allow_methods=["*"],
    allow_headers=["*"],
)
```

---

## 🔹 7. Production Build

```bash
npm run build
```

This generates the `dist/` folder, which can then be:

* Deployed to Nginx
* Or served by FastAPI using `StaticFiles`

---

