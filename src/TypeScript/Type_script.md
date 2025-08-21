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



