# Mermaid

`.mmd`

```mmd
erDiagram
    TABLE_NAME {
        type attribute_name constraints
    }
```



| Simbol | Left | Right | Meaning |
|------|------|------|------|
| `\|\|--\|\|` | 1 | 1 | 1-1 |
| `\|\|--o{` | 1 | >0 | 1-many |
| `\|\|--\|\|` | 1 | absolutely 1 | 1-1（needed） |
| `}o--o{` | >0 | >0 | many-many |


```mmd
parent ||--o{ child : "has"
```

