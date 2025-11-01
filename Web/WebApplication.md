
## Alias $\sim$ Rephrase
- an alternative name or label used to refer to the same thing, allowing you to use a shorter or more convenient identifier instead of the original.
* `@` -- path alias(in `ts` or `package.json`)

    * **TS** -- The alias is set in tsconfig.json using paths.

## SDK（Software Development Kit）
* 「ソフトウェア開発キット」 


| Type                      | Purpose                                        | Contains                               | Processing (Logic)                  |
| ------------------------- | ---------------------------------------------- | -------------------------------------- | ----------------------------------- |
| **DTO**                   | Structure for data transfer                    | Fields only (possibly getters/setters) | None in principle                   |
| **Entity**                | Representation of a database record            | Fields, DB mapping information         | None in principle (DB-related only) |
| **Model / Domain Object** | Core application data including business logic | Fields + logic                         | Yes                                 |
| **Service**               | Executes business processes                    | Methods only (internal data if needed) | Yes                                 |


**Websocket**
* WebSockets is a communication protocol that allows a persistent, **two-way connection between a client (like a browser or device) and a server over a single TCP connection.**
