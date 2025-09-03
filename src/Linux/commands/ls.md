
#  `ls`
    * -a = all
    * -l = in long format(including permision, size..)

## Long format

**Example:**
```
-rw-r--r--  1 user user  1234 Sep  3 09:00 file.txt
lrwxrwxrwx  1 user user    12 Sep  3 09:01 link -> file.txt
drwxr-xr-x  2 user user  4096 Sep  3 09:02 mydir
```

1. Type
* `-` … normal file

* `d` … dir

* `l` … Symbolic link

2. **Permission** (rwx-) 

```
xxx | xxx | xxx
 ^     ^     ^
user  group others
```

3. **Link Count**

- +1 Itself

- +1 Parent, Subfolder 

4. Owner

5. Group

6. File size (byte)

7. Last Updated Time

8. File name

9. Symbolic link -> 

## Symbolic Link

= Short cut

```bash
# Create
ln -s filename shortcut_link
```

Insted filename, shortcut_link is always opend. 