
| Modifier    | Accessible from inside the class | Accessible from subclass | Accessible from outside |
| ----------- | -------------------------------- | ------------------------ | ----------------------- |
| `public`    | ✅ Yes                            | ✅ Yes                    | ✅ Yes                   |
| `protected` | ✅ Yes                            | ✅ Yes                    | ❌ No                    |
| `private`   | ✅ Yes                            | ❌ No                     | ❌ No                    |

### 
* `readonly`
```ts
class User {
  private readonly id: string;
  constructor(id: string) {
    this.id = id;
  }
}
```



## TS, Python

_name() = internal use

__name() = making it harder to access from outside
