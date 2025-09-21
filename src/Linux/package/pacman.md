
```bash
pacman <operation> [option] [target]

#-S=sync(Install package from repo)
#-y=update package datebase
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

