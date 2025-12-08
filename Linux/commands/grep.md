# grep(Global Regex Print)

* `grep [OPTIONS] PATTERN [FILE...]`
    * for finding text(linne) patterns in output or files.
    * `a | grep` -- pass output of a to grep.
    * `-i` -- does not care capital or non-capital letter.
    * `-I` -- ignore binary files
    * `-R` -- recursively(ignore directories)
    * `-r` -- recursive
    * `-n` -- show line number
    * `-l` -- output only file name, not matched line.
    * `-v` -- invert match
    * `-q` -- return 1(match) or 0    
    * `-A n -B n`= `-C n` -- increase line range(After, Before, Context)
* \( \) Grouping conditions
* -o = or \( *.ts -o  * .tsx \) 


**Filter**
```bash
grep -Rin "word" . \
    --include=src/
    --exclude-dir=dist \
    --exclude-dir=node_modules
``` 
