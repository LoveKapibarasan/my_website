
# Nodemon 
* Automatically reload when source code is changed.

`nodemon.json`

```json
{
  "watch": ["src"],
  "ext": "js,json",
  "ignore": ["node_modules"],
  "exec": "node src/server.js"
}
```