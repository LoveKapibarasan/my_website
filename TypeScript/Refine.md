### REFINE
a React meta-framework for CRUD-heavy web applications. 
* [URL](https://github.com/refinedev/refine)

```bash
npm create refine-app@latest test
cd test
npm run dev
```

**Port**
* 5173 or 3000


**Use**
1. useSelect
```ts
import { useSelect } from "@refinedev/antd";
import { Select } from "antd";
const {x:type} = useSelect<Generics>({ ... });

<Select {...x} placeholder="Select" />
```

2. useTable

```ts
import { Table } from "antd";
<Table rowKey="id" {...tableProps}>
  {columns}
</Table>
```
#### Ant design


`refine build` --> `vite build`
