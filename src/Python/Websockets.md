
# async
```python
import asyncio

async def main():
    print("Hello")
    await asyncio.sleep(1)  # wait a second
    print("World")

asyncio.run(main())

```



| Method / Property                             | Type             | Description                                                            |
| --------------------------------------------- | ---------------- | ---------------------------------------------------------------------- |
| `await websocket.recv()`                      | coroutine        | Receive the next message (returns `str` for text, `bytes` for binary). |
| `await websocket.send(message)`               | coroutine        | Send a message (string or bytes).                                      |
| `await websocket.close(code=1000, reason='')` | coroutine        | Close the connection with an optional code and reason.                 |
| `websocket.open`                              | property (bool)  | `True` if the connection is currently open.                            |
| `websocket.closed`                            | property (bool)  | `True` if the connection is closed.                                    |
| `websocket.local_address`                     | property (tuple) | Local socket address `(host, port)`.                                   |
| `websocket.remote_address`                    | property (tuple) | Remote peer’s address `(host, port)`.                                  |
| `websocket.id`                                | property (str)   | Unique connection ID (available in newer versions).                    |
| `await websocket.ping(data=None)`             | coroutine        | Send a ping to check connection health.                                |
| `await websocket.pong(data=None)`             | coroutine        | Send a pong (usually auto in response to ping).                        |
| `websocket.pings`                             | property (set)   | Set of unacknowledged pings.                                           |
| `websocket.pongs`                             | property (set)   | Set of received pongs.                                                 |
| `await websocket.wait_closed()`               | coroutine        | Wait until the connection is fully closed.                             |
| `websocket.close_code`                        | property (int)   | Close code received from the peer.                                     |
| `websocket.close_reason`                      | property (str)   | Close reason text received from the peer.                              |

```python
websockets.connect(
    uri,
    *,
    create_protocol=None,
    timeout=10,
    max_size=2**20,
    max_queue=32,
    read_limit=2**16,
    write_limit=2**16,
    loop=None,
    legacy_recv=False,
    compression="deflate",
    origin=None,
    extensions=None,
    subprotocols=None,
    extra_headers=None,
    user_agent=None,
    ping_interval=20,
    ping_timeout=20,
    close_timeout=10
)
```
