### Datetime
* Standard Library
```python
from datetime import datetime, date, timedelta

now = datetime.now()                    # 2024-01-15 14:30:45.123456
today = date.today()                    # 2024-01-15
```


### URL
* Standard Library
```python
from urllib.parse import urlparse, urljoin, quote, unquote

# URLの解析
url = "https://example.com:8080/path?key=value#fragment"
parsed = urlparse(url)
```
