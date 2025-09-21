bash = Bourne-Again Shell <--bone again

## Give a permission
```bash
chmod +x name.sh
./name.sh # ./= current dir
```
## Syntax

### header

**Shebang**
* `#!/bin/bash`= POSIX shell
* `#!/bin/bash` = bash
* `#!/usr/bin/env python3` = python 3

    * Put the first line.



* NG `a = b`
* OK`a=b`

* Indend is not necessary

## Variable Expansion

```bash
"$name" # not single quote
```

* No multi-line comment

## Here Document
* If you use a here-document (`<<EOF ... EOF`) in a .sh script, you can automate interactive commands like sqlite3, psql, or iwctl.

* can also give instructions in a script after entering a **chroot** in the same way.