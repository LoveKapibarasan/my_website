# Type Script


```ts
const x

const function: (name: type;...) => { name:type ... } // type annotation

const function: (name: type;...) => { name:type ... } = () => {} // assign 
```




## Export type

```ts
// user.ts
export type User = {
  id: number;
  name: string;
  email?: string;
};

// main.ts
import type { User } from "./user";

const newUser: User = {
  id: 1,
  name: "Alice",
};
```
When executing, it will not exist.(Compile check)


! = null assertion
? = optional


### ambient(取り巻く)宣言(declare)
`declare`: This is only type definition without implementation

```js
x = 30;          // error TS2304: Cannot find name 'x'.
console.log(x);  // error TS2304: Cannot find name 'x'.
```
This js does not work in ts without declare.

### Global Scope
* `global`


**Window interface**
* Window object = browser
    ```ts
    // Window can be ommited
    window.alert("Hello");
    window.location.href;         // Curent URL
    window.document;              // HTMLドキュメント
    window.localStorage;
    window.console.log("test");
    ```
```ts
declare global{
    interface Window {
        myCustomProperty: string;
    }
}
```

* `window.APP_CONFIG`: can be accessed with `console.log(window.APP_CONFIG.apiUrl);`
* `import.meta.env`: When `npm run build`, it get value from `.env`. It need `VITE_` prefix in vite environment.

