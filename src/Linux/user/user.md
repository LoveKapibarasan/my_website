## 1. Root user

* {{"Username"}}: root

* {{"Privileges"}}: {{"Unrestricted"}}

```bash
su -
```

### {{"Check the root password"}}
```bash
sudo passwd -S root
```

### {{"Disable the root"}}

```bash
sudo passwd -l root
sudo vim /etc/ssh/sshd_config # and add `PermitRootLogin no`
```

## 2. Sudo user

* {{"A regular user account that’s in the sudo group (or has privileges defined in /etc/sudoers). By default, this user cannot do root-only actions directly — they must prepend commands with sudo:"}}

## {{"Notes"}}
* {{"It is not recommended to use root."}}