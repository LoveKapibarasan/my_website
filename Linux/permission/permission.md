### Chmod

1. **numeric / octal mode** 
chmod xxx file
(x= 0~7)

2. **Symbolic Mode** 
chmod [ugoa][+-=][rwxXst] file
    * default=all

3. **Special Mode** 
chmod xxxx

4. **Top degit**
4 = setuid
2 = setgid
1 = sticky bit
    * Make a sum.

### Chown
```bash
chown [OPTIONS] NEW_OWNER[:NEW_GROUP] FILE...
```
`-R` = recursive
`-c` = if ownership is changed, show the message.

### Faillock
* If you enter the wrong password 3 times, you won't be able to log in for 10 minutes.
```bash
faillock --user "$username"
faillock --user "$username" --reset

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

### `/etc/subuid` `/etc/subgid`
subordinate UID/GID
* `user:100000:65536`: the range user can use in a container. username:start:number
```bash
sudo usermod --del-subuids 100000-165535 "$user"
sudo usermod --del-subgids 100000-165535 "$user"
sudo usermod --add-subuids 100000-165535 "$user"
sudo usermod --add-subgids 100000-165535 "$user"
```

