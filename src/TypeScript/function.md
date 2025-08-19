```ts
function add(a: number, b: number): number {
  return a + b;
}
// export f(argument_0: type ): return_type{
// }

const result = add(2, 3); // ✅ OK
// add("2", "3"); // ❌ Error
```