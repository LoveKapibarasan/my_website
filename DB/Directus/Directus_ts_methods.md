## **1. Items (Collection Operations)**

```ts
directus.items('collection_name')
```

| Method                       | Description                                                              | Return          |
| ---------------------------- | ------------------------------------------------------------------------ | --------------- |
| **readMany()**               | Retrieve multiple records (optionally with conditions)                   | `{ data: T[] }` |
| **readByQuery(params)**      | Retrieve records with query parameters (`filter`, `sort`, `limit`, etc.) | `{ data: T[] }` |
| **readOne(id, params?)**     | Retrieve a single record                                                 | `T`             |
| **createOne(data)**          | Create a single record                                                   | `T`             |
| **createMany(data\[])**      | Create multiple records                                                  | `T[]`           |
| **updateOne(id, data)**      | Update a single record                                                   | `T`             |
| **updateMany(ids\[], data)** | Update multiple records                                                  | `T[]`           |
| **deleteOne(id)**            | Delete a single record                                                   | `void`          |
| **deleteMany(ids\[])**       | Delete multiple records                                                  | `void`          |

---

## **2. Authentication (Auth)**

```ts
directus.auth
```

| Method                         | Description                              |
| ------------------------------ | ---------------------------------------- |
| **login({ email, password })** | Log in as a user (retrieve access token) |
| **logout()**                   | Log out                                  |
| **refresh()**                  | Refresh access token                     |
| **staticToken**                | Set authentication via static token      |

---

## **3. Files**

```ts
directus.files
```

| Method                             | Description              |
| ---------------------------------- | ------------------------ |
| **uploadOne(file, options?)**      | Upload a single file     |
| **uploadMany(files\[], options?)** | Upload multiple files    |
| **readOne(id)**                    | Retrieve file metadata   |
| **readMany()**                     | Retrieve a list of files |
| **deleteOne(id)**                  | Delete a file            |

---

## **4. Folders**

```ts
directus.folders
```

| Method              | Description                |
| ------------------- | -------------------------- |
| **createOne(data)** | Create a folder            |
| **readOne(id)**     | Retrieve a folder          |
| **readMany()**      | Retrieve a list of folders |
| **deleteOne(id)**   | Delete a folder            |

---

## **5. System (Users, Roles, Permissions)**

```ts
directus.users
directus.roles
directus.permissions
```

| Example Method          | Description                              |
| ----------------------- | ---------------------------------------- |
| **readMany()**          | Retrieve list of users/roles/permissions |
| **readOne(id)**         | Retrieve a single record                 |
| **updateOne(id, data)** | Update a record                          |
| **deleteOne(id)**       | Delete a record                          |

---

