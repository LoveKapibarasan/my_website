# freedesktop.org (X Desktop Group (XDG))

* a project that develops standards for interoperability across Linux desktop environments!

* Active since around 1998

* https://www.freedesktop.org/


### Major Specifications

1. XDG Base Directory
* Standardizes config file locations

`~/.config/` - configuration files
`~/.local/share/` - data files
`~/.cache/` - cache files

2. Desktop Entry Specification
* Defines the `.desktop` file format (for application menus, etc.)
3. MIME Applications Associations
* The file association specification. 
4. Other Standards

* Icon theme specification
* Desktop Notifications
* D-Bus (inter-process communication)
* Autostart specification
* Trash specification

### `.desktop`
**File Locations**

`/usr/share/applications/` - System-wide applications
`~/.local/share/applications/` - User-specific applications

**Example**

```ini
[Desktop Entry]
Type=Application
Name=Text Editor
Comment=Edit text files
Exec=gedit %f
Icon=text-editor
Terminal=false
Categories=Utility;TextEditor;
MimeType=text/plain;text/html;
```

* `%f` = file, `%u` = URL
* `~` or `$HOME` = home directory


### MIME (Multipurpose Internet Mail Extensions Type)
```
type/subtype
```
**Example**
```
text/html
video/mp4
application/zip
application/pdf
```

```bash
file --mime-type "$example_file"

xdg-mime query filetype "$example_file"
```

### Default Application

`xdg-setting`: Desktop environment.
`xdg-open`: Open file or URL with default application
`xdg-mine`: Set association between MIME and application

```bash

xdg-mime query default "$MINE"

## Set default application
xdg-mime default "$application.desktop" "$MIME"

xdg-open "$filename"
```
`~/.config/mimeapps.list`
```ini
[Default Applications]
application/pdf=okular.desktop
text/plain=vim.desktop
image/png=gwenview.desktop
```


### Desktop 
* KDE
* GNOME
* LXDE(Lightweight X11 Desktop Environment)
**GTK**
**Main Parts**
PCManFM     - File Manager
LXPanel     - Task bar
Openbox     - WM
LXTerminal  
LXAppearance 
* LXQt

