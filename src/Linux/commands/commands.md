# {{"Linux Commands List"}}
* `sudo` = permission denied.
* `cd`
    * Default: Home directory
* `rm`
    * `-r` - recursive option for directly
    * `-f` - force


* `tr -dc 'A-Za-z0-9!@#$%^&()_+=-'`
tranlate or delete
    * -d = delete
    * -c = complement

* `/dev/null`
    * null location.

* `mv a b`
    * rename=move

* `mkdir`
    * `-p` - {{"create all necessary parent directories "}}

* `command_1 && command_2`

* `\` = `\n`

* a|b = paaa output of a to b


* `which`

* $( command ) = command substitution = output of command

* `&` = backgroung



### grep

* `grep [OPTIONS] PATTERN [FILE...]`
    * {{"for finding text patterns in output or files."}}
    * `a | grep` -- pass output of a to grep.
    * `-i` -- does not care capital or non-capital letter.
    * `-I` -- ignore binary files
    * `-R` -- recursively(ignore directlies)
    * `-n` -- show line number
    * `-l` -- output only file name, not matched line.


* \( \) Grouping conditions
* -o = or \( *.ts -o  * .tsx \) 

*  --:exclude-dir
```bash
grep -Rin "word" . \
    --exclude-dir=dist \
    --exclude-dir=node_modules
``` 

## Process

* `sudo lsof -i:<port_number>`
    * lsof = list open files

* `ps` = process status
    * a = including another user's process.
    * u = detail information like username or memory
    * x = also show daemon
**`ps aux | grep "<process_name>"`**
> This output includes its ps aux process.



* dmesg -- kernel message

* recognized strage
* lsusb -- usb device

### Create a file
* touch <filename> # initially update timestamp(does not overwrite)

* `cat > <filename>`
* `vim or nano <filename>`
* `echo "" > <filename>` # echo = echolocation
### PID = process id

```bash
pkill <name>
kill <pid>
killall <name>
```

### %
* `%u` = currently logined user