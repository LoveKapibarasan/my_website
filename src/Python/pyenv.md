
```bash
curl https://pyenv.run | bash

# in bashrc or zshrc
export PATH="$HOME/.pyenv/bin:$PATH"
eval "$(pyenv init -)"
eval "$(pyenv virtualenv-init -)"

pyenv install --list | grep " x.xx"
pyenv install x.xx.x
pyenv global x.xx.x
pyenv uninstall x.xx.x
cd ~/.pyenv
git pull

```
