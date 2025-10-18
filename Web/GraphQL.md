# GraphQL

GraphQL is a query language used to work with APIs.

It’s often used as an alternative to REST APIs, and its key feature is that you can get exactly the data you need in a single request.

---

1. Schema
    A blueprint defined on the server that specifies which types of data can be fetched.
```graphql
query {
  user(id: 1) {
    id
    name
    email
  }
}

```

2. Query
Used by the client to request only the fields it needs.

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

* Automatically generate GraphQL API from Database.
* [Git URL](https://github.com/hasura/graphql-engine)


ws = web socket url(bidirection)
