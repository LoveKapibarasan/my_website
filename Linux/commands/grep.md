# grep

* `grep [OPTIONS] PATTERN [FILE...]`
    * for finding text(linne) patterns in output or files.
    * `a | grep` -- pass output of a to grep.
    * `-i` -- does not care capital or non-capital letter.
    * `-I` -- ignore binary files
    * `-R` -- recursively(ignore directories)
    * `-n` -- show line number
    * `-l` -- output only file name, not matched line.
    * `-v` -- invert match
    * `-q` -- return 1(match) or 0    

* \( \) Grouping conditions
* -o = or \( *.ts -o  * .tsx \) 

*  --:exclude-dir

### Rin

```bash
grep -Rin "word" . \
    --exclude-dir=dist \
    --exclude-dir=node_modules
``` 
