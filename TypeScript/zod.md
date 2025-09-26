### `zod`

* Check type also executing.

```ts
import { z } from "zod";

// Rule for executing
const UserSchema = z.object({ // object type schema
  id: z.number({message: "Error_message"}),
  name: z.string(),
});

// TypeScript create type of typescript from zod schema
type User = z.infer<typeof UserSchema>;


const data = { id: 1, name: "Alice" };
const result = UserSchema.parse(data); // OK
console.log(result);

const badData = { id: "1", name: "Bob" };
UserSchema.parse(badData); // ❌ Error: id must be number
```

`z.record(KeySchema_optional, ValueSchema)` $\sim$ `Record<K, V>`

> Villain of Superman -- "General Zod"
