
```bash
curl https://pyenv.run | bash

# in bashrc or zshrc
export PATH="$HOME/.pyenv/bin:$PATH"
eval "$(pyenv init -)"
eval "$(pyenv virtualenv-init -)"

pyenv install 3.13.0
pyenv global 3.13.0
```
