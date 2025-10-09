* user, group, others
* rwx = (read, write, execute)
-> Sum

**User ID**
```bash
id -u # get user ID
```

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
`-R` = recursive
`-c` = if ownership is changed, show the message.

### Faillock
* If you enter the wrong password 3 times, you won't be able to log in for 10 minutes.
```bash
faillock --user <username>
faillock --user <username> --reset

```


### `/etc/passwd`

* Password is moved to `/etc/shadow` (SHA-512)
```
username:password:UserID:GroupID:Comments:HomeDir:LoginShell
```

### `/etc/shadow`

*
```
 Username:Encrypted password:Last password change:Minimum password age:Maximum password age:Warning period:Inactive period:Expiration date:Unused
    Benutzername:Verschlüsseltes Passwort:Letzte Passwortänderung:Minimale Passwortgültigkeit:Maximale Passwortgültigkeit:Warnfrist:Inaktivitätsdauer:Ablaufdatum:Unbenutzt
```

## nobody
*  The weakest account with almost no privileges.= Das schwächste Konto mit fast keinen Berechtigungen.

### UID
* root -- UID = 0
* Normal Users -- UID > 1000
