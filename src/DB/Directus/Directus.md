# Directus 
* an open-source headless CMS (Content Management System) and data platform that sits on top of a database and gives you an instant API + no-code admin app.

## With Type Script
```bash
npm i @directus/sdk
npm i -D typescript ts-node @types/node
npx tsc --init
```

```ts
// example.ts
import { Directus } from '@directus/sdk';

/**
 * Define collection typing that matches your Directus collections/fields.
 * Adjust to your setup. Here we assume a collection `articles`.
 */
type Collections = {
  articles: {
    id: number;
    title: string;
    content: string | null;
    published_at: string | null; // ISO datetime string
    status?: 'draft' | 'published';
  };
};

async function main() {
  // Use env vars or inline strings for demo
  const URL = process.env.DIRECTUS_URL ?? 'http://localhost:8055';
  const TOKEN = process.env.DIRECTUS_TOKEN ?? 'YOUR_STATIC_TOKEN';

  const directus = new Directus<Collections>(URL, {
    auth: { staticToken: TOKEN },
  });

  // CREATE
  const created = await directus.items('articles').createOne({
    title: 'Hello TS + Directus',
    content: 'Typed SDK example.',
    published_at: new Date().toISOString(),
    status: 'published',
  });
  console.log('Created:', created);

  // READ MANY (with typing, fields, filter, sort, limit)
  const { data: posts } = await directus.items('articles').readByQuery({
    fields: ['id', 'title', 'published_at', 'status'],
    filter: { status: { _eq: 'published' } },
    sort: ['-published_at'],
    limit: 5,
  });
  console.log('Latest 5 published:', posts);

  // READ ONE
  const one = await directus.items('articles').readOne(created.id, {
    fields: ['id', 'title', 'content'],
  });
  console.log('Read one:', one);

  // UPDATE
  await directus.items('articles').updateOne(created.id, {
    title: 'Hello TS + Directus (edited)',
  });

  // DELETE
  await directus.items('articles').deleteOne(created.id);
}

main().catch((e) => {
  console.error(e);
  process.exit(1);
});
```

```bash
DIRECTUS_URL=http://localhost:8055 \
DIRECTUS_TOKEN=<YOUR_STATIC_TOKEN> \
npx ts-node example.ts
```

