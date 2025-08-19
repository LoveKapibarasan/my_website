# {{"Linux Commands List"}}
* `sudo` = permission denied.
* `cd`
* `rm`
    * `-r` - {{"recursive option for directly"}}
    * `-f` - {{"force"}}
* `cat [OPTIONS] [FILE]` - {{"reads files and writes their contents to standard output "}}
    * cat > file - {{"Create a file"}}
    * cat content > file - {{"Overwrite"}}
    * cat content >> file - {{"Append"}}
    *   ```bash
        cat > filename << 'EOF'
            line 1
            line 2
            line 3
        EOF
        ```
* `ls`

* `mkdir`
    * `-p` - {{"create all necessary parent directories "}}

* `command_1 && command_2`

* `find /path/to/search -name "filename"`
    *  Find goes recursively into all child folders by default.

* `grep [OPTIONS] PATTERN [FILE...]`
    * {{"for finding text patterns in output or files."}}
    * `a | grep` -- pass output of a to grep.
    * `-i` -- does not care capital or non-capital letter.
    * `-I` -- ignore binary files
    * `-R` -- recursively
    * `-n` -- show line number
    * `-l` -- output only file name, not matched line.

* `find /path/to/search -exec grep -l "search_text" {} +`
    * `{}` = place folder for `find`
    * `;` <->`+` -- execute per one or batch file(s)
    * `-type f` -- ignore directlies

* \( \) Grouping conditions
* -o = or \( *.ts -o  * .tsx \) 


* `ps` = process status
    * a = including another user's process.
    * u = detail information like username or memory
    * x = also show daemon

* Package
```bash
sudo apt update
sudo apt install p_name
sudo apt purge p_name
sudo apt autoremove --purge
apt search p_name
apt list --installed
```

* dmesg -- kernel message
