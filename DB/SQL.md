
```sql
SELECT a,b,c
FROM <table_name>
WHERE condition;
```

| Notation | Meaning                                                                      |
| -------- | ---------------------------------------------------------------------------- |
| `id`     | Interpreted as an identifier in **all lowercase**.                           |
| `"id"`   | Treated as a **case-sensitive identifier** — known as a *quoted identifier*. |

**Comment:**`/**/` or `--`

* a,b,c can be attribute or number.

* `DISTINCT`: removes duplicated line.


## Insert

```sql
INSERT INTO "<table_name>"(column_1,column_2,..) VALUES (value_1, value_2,...);
```

## Delete

```sql
DELETE FROM "<table_name> WHERE condition;
```

### Delete on cascade(fk constraints)
```sql
SELECT
  tc.table_name      AS child_table,
  kcu.column_name    AS fk_column,
  ccu.table_name     AS parent_table,
  ccu.column_name    AS parent_column
FROM
  information_schema.table_constraints AS tc
JOIN information_schema.key_column_usage AS kcu
  ON tc.constraint_name = kcu.constraint_name
JOIN information_schema.constraint_column_usage AS ccu
  ON ccu.constraint_name = tc.constraint_name
WHERE
  tc.constraint_type = 'FOREIGN KEY'
  AND ccu.table_name = '<parent_table_name>';   
```
* `information_schema` = System metadata table.

| Alias | Stands for (table)                  | What information it contains                              |
| ----- | ----------------------------------- | --------------------------------------------------------- |
| `kcu` | **k**ey **c**olumn **u**sage        | Which **child table & column** are using the foreign key = Where is this FK used? |
| `ccu` | **c**onstraint **c**olumn **u**sage | Which **parent table & column** are referenced by the key = What is this FK pointing to? |


### EXIST
**EXISTS**: Subquery returns more than one line? $\sim $ `xxx IN`


