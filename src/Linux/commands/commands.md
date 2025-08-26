# {{"Linux Commands List"}}
* `sudo` = permission denied.
* `cd`
* `rm`
    * `-r` - {{"recursive option for directly"}}
    * `-f` - {{"force"}}
* `cat [OPTIONS] [FILE]` - {{"reads files and writes their contents to standard output "}}
    * cat > file # {{"Create a file"}}
    * cat content > file # {{"Overwrite"}}
    * cat content >> file # {{"Append"}}
    *   ```bash
        cat > filename << 'EOF'
            line 1
            line 2
            line 3
        EOF
        ```
* `ls`
    * -a = all
    * -l = in long format(including permision, size..)

* `tr -dc 'A-Za-z0-9!@#$%^&()_+=-'
tranlate or delete
    * -d = delete
    * -c = complement

* /dev/null
    * null location.

* `mv a b`
    * rename=move

* `mkdir`
    * `-p` - {{"create all necessary parent directories "}}

* `command_1 && command_2`

* `\` = `\n`

* a|b = paaa output of a to b

* $( command ) = command substitution = output of command

### find

* `find /path/to/search -name "filename"`
    *  Find goes recursively into all child folders by default.
    * `-type f`

### grep

* `grep [OPTIONS] PATTERN [FILE...]`
    * {{"for finding text patterns in output or files."}}
    * `a | grep` -- pass output of a to grep.
    * `-i` -- does not care capital or non-capital letter.
    * `-I` -- ignore binary files
    * `-R` -- recursively(ignore directlies)
    * `-n` -- show line number
    * `-l` -- output only file name, not matched line.

* `find /path/to/search -exec grep -l "search_text" {} +`
    * `{}` = place folder for `find`
    * `;` <->`+` -- execute per one or batch file(s)

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

### Package
```bash
sudo apt update
sudo apt install p_name
sudo apt purge p_name
sudo apt autoremove --purge
apt search p_name
apt list --installed # packages
apt-mark showmanual # sudo apt install xxx
```

* dmesg -- kernel message

* recognized strage
* lsusb -- usb device

### Create a file
* touch <filename> # initially update timestamp(does not overwrite)
* sudo tee <filename> # with sudo (get input and overwrite)
     * -a = append mode 
* `cat > <filename>`
* `vim or nano <filename>`
* `echo "" > <filename>` # echo = echolocation
### PID = process id

```bash
pkill <name>
kill <pid>
killall <name>
```

