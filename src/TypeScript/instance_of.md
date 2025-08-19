
```ts
object instanceof Constructor
```
```ts
class Animal {}
class Dog extends Animal {}

const d = new Dog();

console.log(d instanceof Dog);    // true
console.log(d instanceof Animal); // true (Dog extends Animal)
console.log(d instanceof Object); // true (all objects inherit from Object)
console.log(d instanceof Array);  // false

```

