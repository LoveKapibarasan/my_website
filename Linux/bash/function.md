# Functions
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

### Return
```bash
# 1.
return <return_code>(0〜255)

# 2.
myfunc() {
  echo "Hello $1"
}

RESULT=$(myfunc World)
# 3.
export RESULT 

```
### Visibility
* `local` = only valied in the function


### Utils

`[ $? -ne 0 ] && return 1` -- `$?` = Exit status  
