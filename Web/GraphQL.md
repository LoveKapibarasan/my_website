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
    * A blueprint defined on the server that specifies which types of data can be fetched.
    * `.graphql`, `ggl`: Definition File
    * `schema.types.ts`: Generate type from GraphQL schema file or hasura server by GraphQL Code Generator
    ```ts
    npm run codegen
    graphql-codegen --config "$file.ts"
    ```

2. Query
Used by the client to request only the fields it needs.
```graphql
query $OperationName{
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

**Tenant ID**:
(https://hasura.io/blog/introducing-dynamic-routing-hasura)

`ws` = web socket url(bidirection)


**Meta Data**
* Setting information and definition
1. Setting from console
2. Metadata API 
3. Hasura CLI + YAML(Auto configuration)
Docker(`hasura/graphql-engine:v2.40.3.cli-migrations-v3` with `cli-migration` postfix) automatically load `hasura-metadata/tables.yaml`
```
your-repository/
├── hasura-metadata/    ← YAML format meta data
│   ├── tables.yaml
│   ├── permissions.yaml
│   └── ...
├── docker-compose.yaml
```
```
hasura-metadata/
├── databases.yaml          ← Database connection info
├── tables.yaml             ← Table Definition
├── relationships.yaml      ← Relation
├── permissions.yaml    
├── functions.yaml          ← SQL function
├── actions.yaml            
├── remote_schemas.yaml     ← External graphQL API
├── events.yaml             ← Trigger・Webhook
├── api_limits.yaml         ← API limit
└── version.yaml            ← metadata version

```

## REACT + GraphQL
```ts
import ApolloClient from '@apollo/client';

const client = new ApolloClient({
  uri: 'https://graphql-server.com/graphql',
  cache: new InMemoryCache(),
});
```

```ts
import { gql } from '@apollo/client';

const GET_USERS = gql`
  query GetUsers {
    users {
      id
      name
      email
    }
  }
`;
```

```ts
import { useQuery } from '@apollo/client';

export const UsersList = () => {
  const { data, loading, error } = useQuery(GET_USERS);
  
  if (loading) return <p>Loading...</p>;
  if (error) return <p>Error: {error.message}</p>;
  
  return (
    <ul>
      {data.users.map(user => (
        <li key={user.id}>{user.name}</li>
      ))}
    </ul>
  );
};
```
