
| Type              | Description                                                        |            |
| ----------------- | ------------------------------------------------------------------ | ---------- |
| `string`          | Text values (e.g., `"hello"`).                                     |            |
| `number`          | Numeric values (integers, floats, etc.).                           |            |
| `boolean`         | Logical values `true` or `false`.                                  |            |
| `bigint`          | Arbitrary-precision integers (e.g., `123n`).                       |            |
| `symbol`          | Unique, immutable values often used as object keys.                |            |
| `null`            | Explicitly empty value.                                            |            |
| `undefined`       | Value not assigned.                                                |            |
| `any`             | Any type (disables type checking for that value).                  |            |
| `unknown`         | Any type, but must be type-checked before use.                     |            |
| `never`           | No possible value (e.g., function that always throws).             |            |
| `void`            | No return value (e.g., function that returns nothing).             |            |
| `object`          | Non-primitive values (arrays, objects, functions).                 |            |
| Array type        | `string[]` or `Array<string>` (list of items of one type).         |            |
| Tuple type        | Fixed-length array with specific types (e.g., `[string, number]`). |            |
| Union type        | Value can be one of several types (e.g., \`string                  | number\`). |
| Intersection type | Combines multiple types (e.g., `A & B`).                           |            |
| Literal type      | Specific value as a type (e.g., `'yes'` or `42`).                  |            |
| Enum              | Named set of constant values.                                      |            |
| Function type     | Describes a function signature (e.g., `(a: number) => string`).    |            |
| Type alias        | Custom name for a type (`type ID = number`).                       |            |
| Interface         | Object structure contract.                                         |            |
| Class type        | Describes class instances.                                         |            |
| `Record<K, T>`    | Object type with keys of `K` and values of `T`.                    |            |
| `Partial<T>`      | All properties of `T` are optional.                                |            |
| `Required<T>`     | All properties of `T` are mandatory.                               |            |
| `Readonly<T>`     | All properties of `T` are read-only.                               |            |
| `Pick<T, K>`      | Selects a subset of properties from `T`.                           |            |
| `Omit<T, K>`      | Removes certain properties from `T`.                               |            |
| `ReturnType<T>`   | Gets the return type of a function type `T`.                       |            |
| `Parameters<T>`   | Gets parameter types of a function type `T`.                       |            |
| `InstanceType<T>` | Gets the instance type of a constructor type `T`.                  |            |
