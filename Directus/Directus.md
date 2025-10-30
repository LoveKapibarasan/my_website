### GUI tool 

- a headless Content Management System(CMS) and data platform that provides a customizable admin interface for managing database content.
- It offers a REST and GraphQL API on top of your data, allowing both developers and non-technical users to collaborate. 


> [AI tools](https://directus.io/docs/guides/ai/mcp/installation#generate-access-token)

## Basic Flow
```bash
npm install -g directus
npx directus init # Automatically create .env
npx directus start # global install = directus start
```
* And enter database information and admin e-mail address and password.
```txt

root/
 ├ .env               ← Directus setting
 ├ node_modules/      ← npm install
 ├ directus.config.js ← setting
 ├ extensions/        ← link extensions
 └ ...
```

* [Filter Syntax](https://directus.io/docs/guides/connect/filter-rules)

**Endpoint
1. `/files/`
2. `/auth/`
3. `/item/` : Naively do CRUD operation

## 1. REST API
```ts
const API_URL = 'http://localhost:8055'; // Directus URL

async function main() {
  const response = await fetch(`${API_URL}/items/articles`, {
    method: 'GET',
    headers: {
```

## 2. With typescript

```bash
# @directus/sdk
npm install @directus/sdk
```

```ts
import { createDirectus, rest, authentication } from '@directus/sdk';

async function main() {
  const client = createDirectus('http://localhost:8055')
    .with(rest())
    .with(authentication('password', {
      email: 'admin@example.com',
      password: 'adminpass',
    }));

  await client.login();

  const articles = await client.request(
    client.items('articles').readByQuery()
  );
}

main();
```
## Build

```bash
npx directus-extension build
```

# Extensions

| Type          | Description                                                             |
| ------------- | ----------------------------------------------------------------------- |
| **Interface** | Add custom input field UIs (e.g. calendar picker, map input)            |
| **Display**   | Add custom display UIs (e.g. colored status badges for list view)       |
| **Panel**     | Add dashboard widgets/panels                                            |
| **Hook**      | Execute custom code when events happen (e.g. record created/updated)    |
| **Endpoint**  | Add your own custom API endpoints (e.g. `/my-endpoint`)                 |
| **Bundle**    | Package multiple extensions together as one bundle extension            |
| **Module**    | Add a larger UI feature with its own settings page inside the admin app |


## symlink

```bash
npx directus-extension link
```
```bash
/Users/me/dev/my-extension         ← Main codes
/var/www/directus/extensions/...   ← Directus reads

/var/www/directus/extensions/... - Link → /Users/me/dev/my-extension

```
## Deploy

1. Docker
