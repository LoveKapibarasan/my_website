
```txt
1990年、オランダのプログラマー Guido van Rossum（グイド・ヴァン・ロッサム） がクリスマス休暇中に趣味で新しいスクリプト言語を作り始めました。

ちょうどその頃、彼はイギリスBBCの伝説的コメディ番組 「Monty Python’s Flying Circus」 の脚本集を読んでいて、番組のファンだったため、
「Python」という短くて覚えやすい名前にしよう と決めました。
ヘビ（Python）は偶然にも同じ単語ですが、命名の直接の理由はコメディ番組です。
```

```python
assert condition,b
```

```python
if len(sys.argv) < 3:
        print("Usage: ~")
        sys.exit(1)
```


# async
```python
import asyncio

async def main():
    print("Hello")
    await asyncio.sleep(1)  # wait a second
    print("World")

asyncio.run(main())

```