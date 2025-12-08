## Shortcut

### Basic
* `Ctrl+L`:  Clear screen 
* `Ctrl+C`:  Terminate current command 
* `Ctrl+Z`:  Suspend current command (use `fg` to resume) 
* `Ctrl+D`:  Exit shell (on empty line) 
* `Tab`:  Command/filename completion 
* `Alt+?`:  Show possible completions 
* `Ctrl+I`:  Same as Tab 
* `\` + `Enter`: Multi line

### Move
* `Ctrl` + `E`: Go to the line end
* `Ctrl` + `A`: Go to the line top
* `Ctrl` + `C`: kill
* `Ctrl` + `D`: line end
* `Alt` + `f,b`: Go one character back or forth
* `Ctrl` + `f,b`: vim `w`, `b`
### Delete
* `Ctrl+D`: Delete character under cursor (or exit if line is empty) 
* `Ctrl+H`: Delete character before cursor (backspace) 
* `Ctrl+W`:  Delete word before cursor 
* `Alt+D`:  Delete word after cursor 
* `Ctrl+K`:  Cut(kill) from cursor to end of line 
* `Ctrl+U`: Cut from cursor to beginning of line 
* `Ctrl+Y`:  Yank (paste) what was killed. 
### 
* `Ctrl+p`: repeat previous command


## Copy and Paste
* `Select` + `Middle Click`(x11) or `Ctrl` + `Shift` + `V,C`

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

`*` = zero or more characters
`?` = wild card
`[...]` = character class (matches one of the characters inside)
`[!...]` or `[^...]` = negated character class

**history expansion**
`!!` = previous command
`!$` = last argument of previous command
`!"$number"`

### Notes

* Do not include `source ~/.zshrc` in sh script.
