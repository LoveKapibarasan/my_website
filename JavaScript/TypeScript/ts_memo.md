# Type Script


```ts
const x

type xxx = {
  a: boolean,
  b: number[], // array
  c: string | null
  d: custom_type,
}


// explicitly declare type (Type Anotation)
// Often ommited if Typescript does
const x:type = "foo";
var xx:type = "foo";

// need Type Anotation
const function: (name: type;...) => { name:type ... } // type annotation

const function: (name: type;...) => { name:type ... } = () => {} // assign 
```


**Export**
`export{}`
`export default function()`
* default export. `import arbitral_name from './file.js';`
* === `module.export{}` in JS.

**Export type**

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

`if(object)`: truthy check with any
`Truthy`: Object, String, Number.. <-> 
`Non-Truthy`: 0, null, undefined, false, 0, ""
`!` = null assertion
`?` = optional


**String**
`string`
`.length`


* `const`: constant value
* `let`(`var`, older)


**Decorator**
* Give meta information
```ts
@d_name(object)
property: type;
```
e.g.
```ts
@GqlAssociation({
  // Pairs
  key1: value1,
  key2: value2,
  xxxQuery: { query: XXX_QUERY },
})
field: Type; // Automatically Execute GraphQL and store
```

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


**Local Strage**
`localStorage.getItem(xxxKey)`
`localStorage.removeItem(xxxKey);`


**Source Map**
* Identify source code from compiled js.
* `.map`
```bash
vite build --sourcemap
```

**Console**
* Open inspector on a browser.
* avoid in production environment.
* Debug tool.
`console.log("literal_1", ..variable, .."literal_n)`, `console.info()`, `console.warn()`、`console.error()`、`console.table()`、`console.time()`


