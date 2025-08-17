#  Bandwidth
* Total file size per month served to visitors

## Query Parameter
```bash
?key1=value1&...
```
## Websocket
* WebSockets is a communication protocol that allows a persistent, **two-way connection between a client (like a browser or device) and a server over a single TCP connection.**

## Business Logic 
* DBやAPIとのやり取りだけでなく、「何を・いつ・どう処理するか」 という業務的な意思決定をコード化した部分。

# Copyright
* 知的財産権の一種で、創作した人が自分の作品をどう使うか決められる法律上の権利
* `&copy;`
* Copyright (C) first public year All rights reserved =「すべての権利を保有」

# Alias $\sim$ Rephrase
- an alternative name or label used to refer to the same thing, allowing you to use a shorter or more convenient identifier instead of the original.
* `@` -- path alias(in `ts` or `package.json`)

    * **TS** -- The alias is set in tsconfig.json using paths.

# DB

## barrel
* 集約
## repositories
* データアクセス層
## queries
* a request for specific data.

## projections
* the shape of the data returned

## DTO
* data transfer object.

| Type                      | Purpose                                        | Contains                               | Processing (Logic)                  |
| ------------------------- | ---------------------------------------------- | -------------------------------------- | ----------------------------------- |
| **DTO**                   | Structure for data transfer                    | Fields only (possibly getters/setters) | None in principle                   |
| **Entity**                | Representation of a database record            | Fields, DB mapping information         | None in principle (DB-related only) |
| **Model / Domain Object** | Core application data including business logic | Fields + logic                         | Yes                                 |
| **Service**               | Executes business processes                    | Methods only (internal data if needed) | Yes                                 |


### Separation of Concerns
* 関心の分離

