# Basic Commands

```bash
#!/bin/bash

# 0. Basic Groups
getent group


useradd -m -G wheel ${USER}
# -m=create home directory
# -G=join wheel(typically used for sudo)
# “big wheel” = 大物・偉い人
passwd "${USER}"

sudo usermod -aG systemd-journal ${USER}
sudo usermod -aG postgres ${USER}
sudo usermod -aG rabbitmq ${USER}
sudo usermod -aG ops ${USER}
sudo usermod -aG nordvpn ${USER}

# 1. Add sudo
su - root 

usermod -aG sudo <username>
usermod -aG wheel <username>
usermod -aG docker <username>

# 2. remove from sudo
gpasswd -d <username> sudo
gpasswd -d <username> wheel
gpasswd -d <username> docker

# 3 Check
groups <username>
id <username>
getent group wheel sudo
```



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
