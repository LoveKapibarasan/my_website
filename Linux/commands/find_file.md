### find

* `find /path/to/search -name "<filename>"`
    *  Find goes recursively into all child folders by default.
    * `-type f`
    * `<filename>` can be regex.

* `find `<path>` -exec grep -l "<search_text>" {} +`
    * `{}` = place folder for `find`
    * `;` <->`+` -- execute per one or batch file(s)
    * sarch text can be regex.

### File

* determines the type of a file by examining its contents 
