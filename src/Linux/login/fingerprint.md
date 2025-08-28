# Register fprintd to PAM(Pluggable Authentication Modules).


```bash
sudo pacman -S fprintd
sudo fprintd-enroll -f <finger_name> <username>
fprintd-enroll -f right-index-finger
```

```bash
sudo -E vim /etc/pam.d/system-local-login
sudo -E vim /etc/pam.d/sudo
# auth    sufficient    pam_fprintd.so
# or required 
sudo fprintd-delete <username>

```
