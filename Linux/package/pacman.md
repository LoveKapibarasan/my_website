
```bash
pacman <operation> [option] [target]

#-S=sync(Install package from repo)
#-y=update package datebase
#-yy=update all package datebase
#-u=update installed package
#-R=Remove
#-Q=Query
#-U=Upgrade
#-F=Files
#-D=database(modify package database)
#-T=check dependencies
#-V=version of pacman
#-h=help
#-n=purge
#-s=recursive(dependencies)
#--noconfirm
#--needed Do not reeinstall
```

### AUR (Arch User Repository)
* Non offitial repo to install.

#### `yay, peru`
* helper to install from AUR. 

### Config
`/etc/pacman.conf`
* lib32-* install
```ini
#[multilib]
#Include = /etc/pacman.d/mirrorlist
```

`/var/lib/pacman/db.lck`
* Lock file


### GPG key error
1. Timezone or NTP
2. key or `.iso` is old
3. `sudo pacman -Syyu`

```bash
# 1.
sudo rm -rf /etc/pacman.d/gnupg
sudo pacman-key --init
sudo pacman-key --populate archlinux
sudo pacman -Sy archlinux-keyring
sudo pacman -Syu
# 2.
vim /etc/pacman.conf
# SigLevel = Required DatabaseOptional -> SigLevel = Never
sudo pacman -Sy archlinux-keyring
```

### 404 Errors
`sudo pacman -Syu`
The package database on your system is out of sync with the mirrors. 
Pacman is trying to download, but the mirrors have already moved on to a newer version, so you're getting 404 errors.


