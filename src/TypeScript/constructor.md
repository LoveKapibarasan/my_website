```ts
class Person {
  name: string;
  age: number;

  constructor(name: string, age: number) {
    // Runs when `new Person(...)` is called
    this.name = name;
    this.age = age;
  }
}

const p = new Person("Alice", 30);
console.log(p.name); // "Alice"
```