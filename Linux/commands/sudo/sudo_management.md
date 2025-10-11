# Basic Commands

```bash
#!/bin/bash

# 0. Basic Groups
getent group


useradd -m -G wheel ${USER}
# -m=create home directory
# -G=join wheel(typically used for sudo)
# “big wheel” = 大物・偉い人

# rename
sudo pkill -u "$olduser"
sudo usermod -l "$newuser" "$olduser"
sudo usermod -d "/home/$newuser" -m "$newuser"
sudo groupmod -n "$newuser" "$olduser"


passwd "${USER}"

sudo usermod -aG systemd-journal ${USER}
sudo usermod -aG postgres ${USER}
sudo usermod -aG rabbitmq ${USER}
sudo usermod -aG ops ${USER}
sudo usermod -aG nordvpn ${USER}
```

```
# 1. Add sudo
su - root 

usermod -aG "$group" "$user" 

sudo gpasswd -a "$user" "$group"

gpasswd -d "$user" "$group"

# 3 Check
groups "$user"
id "$user"
getent group "$group"
```

**Getent**
`get entries` -- get database information.

passwd, group, hosts, services

### Allowed Commands

```bash
sudo -l
sudo -ll # detail
```


### Reload

```bash
# Reload immediately
newgrp "$group"
```

## VISUDO

* special and safe command to edit `/etc/sudoers`

```bash
(EDITOR=vim) sudo visudo
sudo visudo -c # -c=check

```
