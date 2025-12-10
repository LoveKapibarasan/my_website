

```python
from logging import debug, exception
logging.basicConfig(level=logging.DEBUG,
                    format='%(asctime)s - %(levelname)s - %(message)s')
debug(f'x is {x}')
# name space
logger = logging.getLogger("myapp.module1")
```