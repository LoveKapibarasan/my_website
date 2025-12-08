# Node.js

* JavaScript can access limited things on OS.
    * Like allow camera.

* Nowadays Node.js can be used on both server side and client side.

```bash
node "$entry_file".js
# --inspect="$ip":"$debugger_port" # normally port = 9229 Use 0.0.0.0 for docker container
# --inspect-brk # wait to start debugger(when booting log is needed, use this)
 node inspect "$file".js # debug
```

**Debugging**
1. Chrome
2. VSCode
* [URL](https://code.visualstudio.com/docs/nodejs/nodejs-debugging)



**Path**
```js
const path = require('path');
// Join
path.join('/user', 'docs', 'file.txt');  // '/user/docs/file.txt'

// Get adsolute path
path.resolve('file.txt');  // '/current/working/dir/file.txt'

// get filename
path.basename('/user/docs/file.txt');  // 'file.txt'
path.basename('/user/docs/file.txt', '.txt');  // 'file'

// get extension
path.extname('file.txt');  // '.txt'
```