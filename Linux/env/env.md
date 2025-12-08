## environment managament tool
[Infisical](https://infisical.com/)

```bash
set -a # export all following variables
source "$file"
set +a # reverse
```

* `export xxx='yyy'`
    * Adding `'` is better(for special characters)
        * `'`: Literal without variable expansion
    * No space around =
    * environment variable
    * Until the shell session ends (like log out)
* `xxx=yyy`
    * shell variable
    * child process do not inherit

* `source $file` == `. $file`
* Execute on current shell.
```bash
source .env
export $(cat .env | xargs) 
```
* `/etc/environment`

* System wide persistant environment variable. 

```ini
LANG=ja_JP.UTF-8
PATH="/usr/local/bin:/usr/bin:/bin"
HOME
```


**env**
```bash
env # environment variable list
env "$program_name" # search program and execute
```
