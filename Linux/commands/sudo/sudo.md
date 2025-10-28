# sudo

* Root is dangerous.(Unrestricted)

* `~` become root home directory. 
    * `sudo -H`: Keep $HOME variable
    * `sudo -s`: becme root temporaly but keep all environment variable

* Clipboard would not be synced.(Use `sudo -E` )

**Config**
* `/etc/sudoers` 
* `/etc/sudoers.d/` -- Directory for custom setting

```bash
sudo visudo -f "/etc/sudoers.d/${custom}"
username ALL=(ALL) NOPASSWD: /usr/bin/xxx <command>
```


### Run as a normal user in a sudo script

1. `su "$user" -c "$command"`

* Meaning: Switch User - switches to the specified user and runs a command
* Behavior: Starts a login shell and fully loads that user's environment
* Environment: Reads the user's .bashrc, .profile, etc.
* Login: Simulates a complete login session

2. `sudo -u "$user" "$command"`

* Meaning: SuperUser DO - runs command as the specified user
* Behavior: Doesn't start a login shell, runs with minimal environment
* Environment: Doesn't read .bashrc by default
* Login: Not a login session


* `-i`: Open interactive shell.
**Check Allowed Commands**
```bash
sudo -l
sudo -ll # detail
```

**Reload**
```bash
# Reload immediately
newgrp "$group"
```


### sudo Groups
```bash
groups "$user"
id "$user"
getent group "$group"
```
**Getent**
`get entries` -- get database information.


**Double Sudo**
* You should not use sudo in sudo script.


### VISUDO

* special and safe command to edit `/etc/sudoers`

```bash
(EDITOR=vim) sudo visudo
sudo visudo -c # -c=check
```

