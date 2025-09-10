

Copy and Paste == xterm

```bash
chsh -s $(which zsh) # make zsh as the default
```


### Features
```bash
cd /u<Tab> <-> cd /usr # <TAB>
```


### config
~/.zshrc

**alias commands**
```ini
alias a='b'
export PATH=$HOME/bin:$PATH

```


### Glob Syntax

\* = zero or more characters
? = wild card
[...] = character class (matches one of the characters inside)
[!...] or [^...] = negated character class

**history expansion**
`!!` = previous command
`!$` = last argument of previous command
`!<number>`

### Notes

* Do not include `source ~/.zshrc` in sh script.