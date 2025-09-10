# GUI (Graphical User Interface)
a type of user interface that allows people to interact with a computer using graphical elements such as windows, icons, menus, and buttons, instead of only typing text commands.

e.g. GNOME(Ubuntu), KDE, XFCE, LXDE, MATE

### Check

```bash
echo $DISPLAY
hostname:display_number.screen_number
# hostname = localhost is default
# display = when multiple display server exist
# screen number = for multi screen environment
:0 or :1..
echo $XDG_CURRENT_DESKTOP

systemctl get-default
# Booting
# graphical.target → GUI
# multi-user.target → CUI 
echo $XDG_CURRENT_DESKTOP
echo $DESKTOP_SESSION

loginctl show-session $(loginctl | grep $(whoami) | awk '{print $1}') -p Type -p Desktop
#Desktop=
#Type=wayland_or_x11

```

## 1. Display server
used to render something on display
* e.g. Wayland, x11(newer)

**Xwayland**
to use x11 application on wayland.

**compositor**
display server in wayland

## 2. WM(Windows manager) 
e.g. hyplrand, sway, tinyWM

## 3. Other DE(Desktop environment)
WM + panel + setting + menu ... 