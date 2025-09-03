* user, group, others
* rwx = (read, write, execute)
-> Sum


### Chmod

1.　**numeric / octal mode** 
chmod xxx file
(x= 0~7)
2. **Symbolic Mode** 
chmod [ugoa][+-=][rwxXst] file
    * default=all

3. **Special Mode** 
chmod xxxx

**Top degit**
4 = setuid
2 = setgid
1 = sticky bit


### Chown
```bash
chown [OPTIONS] NEW_OWNER[:NEW_GROUP] FILE...
```