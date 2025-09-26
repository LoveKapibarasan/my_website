## Path 
* is the exact location of a file or folder in the filesystem, showing the hierarchy from the root directory to the item.

* It can be written as an **absolute** path (full location, e.g.,`C:\Users\Name\Documents\file.txt`) or a **relative** path (location relative to the current working directory).

* At the start of a filename (.file) = On Unix/Linux systems, this means a hidden file.

* `.` = current dir
* `..` = go up
* `*`  = all
* `**` =  ignore intermediate dirs.

* `x/`= all files inside folder x 

### `PATH`
```bash
echo $PATH
/home/user/bin:/usr/local/bin:/usr/bin:/bin:/usr/local/sbin:/usr/sbin
# separator is :
```

Without PATH,
```bash
/usr/bin/python3 script.py
/usr/bin/git status
```


* /usr/bin/python3 is binary file