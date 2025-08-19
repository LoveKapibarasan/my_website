* `ctrl` + `alt` + `t`

* **Screen Shot**

Gnome (default Ubuntu desktop):

    * `Print` → full screen

    * `Shift`+`Print` → select area

    * `Alt` +`Print` → current window

**Keyboard**

* Setting -> Region & Language -> Reboot-> Keyboard

* `Ctrl` + `<Space>` to switch.

```bash
echo $XMODIFIERS
echo $GTK_IM_MODULE
echo $QT_IM_MODULE
im-config -n none
im-config -n fcitx5
im-config
# or ~/.xprofile
# add fcitx5 &

fcitx5-configtool


gsettings set org.gnome.desktop.input-sources show-all-sources false
# keyboard layout
gsettings set org.gnome.desktop.input-sources sources "[('xkb', 'jp')]"
# disable completely
gsettings reset org.gnome.desktop.input-sources sources
gsettings reset org.gnome.desktop.input-sources show-all-sources


```
