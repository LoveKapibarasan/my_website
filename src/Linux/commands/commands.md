# {{"Linux Commands List"}}
* `cd`
* `rm`
    * `-r` - {{"recursive option for directly"}}
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
* `find /path/to/search -exec grep -l "search_text" {} +`
