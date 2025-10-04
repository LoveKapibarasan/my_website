##
`Ctrl` + `E`: Go to the line end
`Ctrl` + `A`: Go to the line top
`Ctrl` + `C`: kill
`Ctrl` + `D`: line end
`Alt` + `f,b`: Go one character back or forth
`Ctrl` + `f,b`: vim `w`, `b`

## Copy and Paste

* depend on terminal emulator.

* *Do not uninstall bash.*


### Features

Tab completion=Tab-Vervollständigung
**compinit**
```bash
cd /u<Tab> <-> cd /usr # <TAB>
```


### config
`~/.zprofile`

`~/.zshrc`

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
