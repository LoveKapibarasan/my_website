# Single-character matching
| Pattern | Meaning                               | Example match |
| ------: | ------------------------------------- | ------------- |
|     `.` | Any *single* character except newline | `a`, `1`, `_` |
|    `\d` | Digit (0–9)                           | `5`           |
|    `\D` | Non-digit                             | `a`, `#`      |
|    `\w` | Word character: `[A-Za-z0-9_]`        | `b`, `9`, `_` |
|    `\W` | Non-word character                    | `@`, `-`      |
|    `\s` | Whitespace (space, tab, newline)      | `' '`         |
|    `\S` | Non-whitespace                        | `a`, `.`      |


# Quantifiers (how many times)
|  Pattern | Meaning             | Example matches     |
| -------: | ------------------- | ------------------- |
|     `a*` | 0 or more `a`       | `""`, `a`, `aaa`    |
|     `a+` | 1 or more `a`       | `a`, `aa`           |
|     `a?` | 0 or 1 `a`          | `""`, `a`           |
|   `a{3}` | Exactly 3 `a`       | `aaa`               |
|  `a{3,}` | 3 or more `a`       | `aaaa`              |
| `a{2,4}` | Between 2 and 4 `a` | `aa`, `aaa`, `aaaa` |

# Character classes 

| Pattern  | Meaning                   |
| -------- | ------------------------- |
| `[abc]`  | Match `a` or `b` or `c`   |
| `[^abc]` | Not `a`, not `b`, not `c` |
| `[a-z]`  | Any lowercase letter      |
| `[A-Z]`  | Any uppercase letter      |
| `[0-9]`  | Any digit                 |

# Anchors

| Pattern | Meaning                                 |
| ------: | --------------------------------------- |
|     `^` | Start of line/string                    |
|     `$` | End of line/string                      |
|    `\b` | Word boundary (between word & non-word) |

# Grouping & Alternation

| Pattern   | Meaning             | Example        |   |
| --------- | ------------------- | -------------- | - |
| `(abc)`   | Capturing group     |                |   |
| `(?:abc)` | Non-capturing group |                |   |
| \`a       | b\`                 | `a` **or** `b` |   |
| \`(cat    | dog)\`              | `cat` or `dog` |   |

#  Escape special characters
```
\.  \+  \(  \)  \?  \*  \\  \|
```
