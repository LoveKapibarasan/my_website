
```bash
name () {
    local x = $1 # 1st argument
}

# import
source ./f_name.sh # newer
# or
. ./file.sh

# call
name "x"

```

* local = only valied in the function