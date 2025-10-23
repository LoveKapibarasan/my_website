# GraphQL

GraphQL is a query language used to work with APIs.

It’s often used as an alternative to REST APIs, and its key feature is that you can get exactly the data you need in a single request.

---

**Comments**:  `#` or `"""`

```bash
curl -X POST http://localhost:8080/v1/graphql \
  -H "Content-Type: application/json" \
  -H "x-hasura-admin-secret: "$myadminsecret" \
  -d '{"query":"query { student { student_id name } }"}'
```

1. Schema
    A blueprint defined on the server that specifies which types of data can be fetched.


2. Query
Used by the client to request only the fields it needs.
```graphql
query {
  "$table"(id: 1) {
    id
    name
    email
  }
}
"$table"(where: { $table_2: { "$predicate" } }) 
# from table_1 to table_2
# it returns true or false.                                         
```
**Join**
```graphql
query {
  $table_1 {
    atr
    $table_2 {          ← ← ← Join
      atr
    }
  }
}
```
**Conditions**
* `_gt:{}`, `_lt:{}`, `_gte:{}`, `_lte:{}` ,`_eq:{}`, `_neq:{}`
* `_not:{}`

**aggeregate**
* `$table_aggregate()`

**group by**
* `$table(group_by:[$attr])`
* `group_by {$attr}`: Output grouped column

3. Mutation
Used when creating, updating, or deleting data.
```graphql
mutation {
  createUser(input: { name: "Taro", email: "taro@example.com" }) {
    id
    name
    email
  }
}

```


## Hasura
Main: `graphql engine`
Sub: `data-connector-agent`´

* Automatically generate GraphQL API from Database.
* [Git URL](https://github.com/hasura/graphql-engine)
* use docker or cloud version [URL](https://cloud.hasura.io)

ws = web socket url(bidirection)
