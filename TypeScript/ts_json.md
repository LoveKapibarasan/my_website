

#### JS
```js
const data = JSON.parse('{"id": 1, "name": "Alice"}');
console.log(data.name); // Works, but no guarantee name exists
```

#### TS with Type assertion
```ts
type User = { id: number; name: string };

const data2 = JSON.parse('{"id": 1, "name": "Alice"}') as User;

console.log(data2.name); // ✅ type-safe at compile time
```


#### Stringfy

```ts
JSON.stringify(value, replacer?, space?)
const obj = { name: "Alice", age: 25 };
const json = JSON.stringify(obj);
console.log(json);
// Output: {"name":"Alice","age":25}
```
