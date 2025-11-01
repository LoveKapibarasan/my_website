# Basic Commands

**Create**
```bash
useradd -m -G wheel ${USER}
# -m = create home directory
# -G = join wheel or sudo
# --shell /bin/bash
# --system
# --home-dir "/xxx" 
# --comment 'comment'
# “big wheel” = 大物・偉い人
```

**rename**
```basj
sudo pkill -u "$olduser"
sudo usermod -l "$newuser" "$olduser"
# -l = login
sudo usermod -d "/home/$newuser" -m "$newuser"
sudo groupmod -n "$newuser" "$olduser"
```
**Password**
```bash
passwd "${USER}"
```

**Groups**
```bash
sudo usermod -aG ${group} ${user}
# -a = append

# Care the order
sudo gpasswd -a "$user" "$group"
sudo gpasswd -d "$user" "$group"
# -d = delete
```


> `usermod`: add or delete user to group.
> `gpasswd`: group management

### Specisl Users

**root**

**nobody**
*  The weakest account with almost no privileges.= Das schwächste Konto mit fast keinen Berechtigungen.

### User ID
```bash
id -u # get user ID
```
* root -- UID = 0
* Normal Users -- UID >= 1000
* System User -- UID < 1000
    * for application
    * cannot login
