```bash
set -a # export all following variables
source "$file"
set +a # reverse
```

* `export xxx='yyy'`
    * Adding ' is better(for special characters)
    * No space around =.


### `/etc/environment`

* System wide environment variable. 

```ini
LANG=ja_JP.UTF-8
PATH="/usr/local/bin:/usr/bin:/bin"
```
