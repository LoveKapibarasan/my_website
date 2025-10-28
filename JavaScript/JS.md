# JavaScript Engine

The core that executes JavaScript. Major examples include:

V8 (Chrome, Node.js)

SpiderMonkey (Firefox)

JavaScriptCore (Safari)

The engine processes code in this flow:

| Step         | What it does                                           |
| ------------ | ------------------------------------------------------ |
| Parsing      | Reads the source code and creates an AST (syntax tree) |
| Compilation  | Converts the AST into bytecode or machine code         |
| Execution    | Actually runs the instructions on the CPU              |
| Optimization | Speeds up the code while running (JIT compilation)     |

## ✔ Client-side (JavaScript executed in the browser)

The JavaScript normally used on websites (loaded via a \<script\> tag) is just sent from the server as a file, and
the actual execution happens inside the browser (on the user’s PC or smartphone) using the engine.

* Server ⇒ Only sends the JavaScript file

* Browser ⇒ Parses and runs the JS (e.g. using V8)

The processing (calculations, screen updates, etc.) happens on the user’s machine

→ This approach is called **client-side** JavaScript.

## ✔ Server-side (JavaScript executed on the server, e.g. Node.js)

On the other hand, there are systems like Node.js, where JavaScript runs on the server itself.

* **A Node.js** app ⇒ Runs JavaScript inside the server

* Used for API creation, database access, HTML generation, etc.

* And then, if needed, sends HTML/CSS/JS to the client (browser)

→ This is called **server-side** JavaScript.


**Strict Mode**
```ts
'use strict';
```


**Export**
* commonJS
`module.exports = {}`

