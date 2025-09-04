#　TS + Vue

* `src/vite-env.d.ts`

Type definition file by TypeScript
```ts
/// <reference types="vite/client" />
declare module '*.vue' {
  import { DefineComponent } from 'vue'
  const component: DefineComponent<{}, {}, any>
  export default component
}
```
* `src/main.ts`

Entrypoint for an application.
```ts
import { createApp } from 'vue'
import App from './App.vue'
import './style.css' // Tailwind 
createApp(App).mount('#app')
```