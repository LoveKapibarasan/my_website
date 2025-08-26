# X.Org Server for GUI

```bash
sudo pacman -S xorg-server xorg-xinit xkeyboard-config xorg-xkbcomp xterm
startx 
pkill Xorg
```

### Initial Configuration

* `~/.xinitrc`

**Japanese input**
* Add setxkbmap jp & to ~/.xinitrc

### Note
* `cat <log_file> | grep "EE"` -- to extract error

