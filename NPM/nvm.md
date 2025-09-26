# NVM
Simple bash scripts to manage node version.

```bash

sudo vim ~/.zshrc # and add
export NVM_DIR="$HOME/.nvm"
source /usr/share/nvm/init-nvm.sh # for ArchLinux

source ~/.bashrc   # or source ~/.zshrc

nvm install (n)
nvm use (n)
node -v   # check
```

* Put `.nvmrc` to project root to omit version.
```txt
number
```