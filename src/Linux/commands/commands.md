# {{"Linux Commands List"}}
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

* `mkdir`
    * `-p` - {{"create all necessary parent directories "}}

* `command_1 && command_2`

* `find /path/to/search -name "filename"`
    *  Find goes recursively into all child folders by default.

* `grep [OPTIONS] PATTERN [FILE...]`
    * {{"for finding text patterns in output or files."}}
    * `a | grep` -- pass output of a to grep.
    * `-i` -- does not care capital or non-capital letter.
    * `-l` -- output only file name not matched line.

* `find /path/to/search -exec grep -l "search_text" {} +`
    * `{}` = place folder for `find`
    * `-l`
    * `;` <->`+` -- execute per one or batch file(s)

* Package
```bash
sudo apt update
sudo apt install p_name
sudo apt purge p_name
sudo apt autoremove --purge
apt search p_name
```

* dmesg -- kernel message
