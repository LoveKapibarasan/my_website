# NVM

* …[URL](https://github.com/nvm-sh/nvm.git)

* Simple bash scripts to manage node version.

```bash

curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/v0.40.3/install.sh | bash
# or
curl -o- https://raw.githubusercontent.com/nvm-sh/nvm/master/install.sh | bash
```


### Commands
```bash
nvm install (n)
nvm use (n)
node -v   # check
```

**Config:**
 
This is added on `.bashrc`
```ini
export NVM_DIR="$HOME/.nvm"
[ -s "$NVM_DIR/nvm.sh" ] && \. "$NVM_DIR/nvm.sh"  
[ -s "$NVM_DIR/bash_completion" ] && \. "$NVM_DIR/bash_completion" 
```


**Version:**
* Put `.nvmrc` to project root to omit version.
```txt
number
```
