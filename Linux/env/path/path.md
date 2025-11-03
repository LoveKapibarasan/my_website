## Path 
* Reserved word.
* is the exact location of a file or folder in the filesystem, showing the hierarchy from the root directory to the item.

* It can be written as an **absolute** path (full location, e.g.,`C:\Users\Name\Documents\file.txt`) or a **relative** path (location relative to the current working directory).

* At the start of a filename (.file) = On Unix/Linux systems, this means a hidden file.


**Current directory is the location where the file was
run, not the file location.**
* `.` = current dir
* `..` = go up
* `*`  = all
* `**` =  ignore intermediate dirs.
* `-` = the original place(with echo) = ursprünglicher Ort. 
        * `cd - > /dev/null || exit`
* `x/`= Directory 

### `$PATH`
1. `/etc/profile`
2. `/etc/environment`
3. `.profile`, `.bashrc`, `.zshrc`

```bash
echo $PATH
# Most of the case
/home/user/bin:/usr/local/bin:/usr/bin:/bin:/usr/local/sbin:/usr/sbin
# separator is :
```

Without PATH,
```bash
/usr/bin/python3 script.py
/usr/bin/git status
```


Add

```bash
export PATH="${path}:${PATH}"



* /usr/bin/python3 is binary file
