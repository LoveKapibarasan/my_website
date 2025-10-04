```bash
fcitx5 -d  -r
# -r = force reload
# -d = back ground
fcitx5-configtool
fcitx5-diagnose
watch -n "$second" 'fcitx5-remote -n'
# fcitx5-remote -n = display active input method like `keyboard-xx`
```

### environment variable and modules
```bash
GTK_IM_MODULE
SDL_IM_MODULE
XMODIFIERS="@im="
QT_IM_MODULE
```
IM = input method

1. Tells GTK applications (GIMP, Firefox GTK builds, GNOME apps, etc.) which IM module to load.
2. Tells SDL (Simple DirectMedia Layer) apps (many games, emulators) how to handle IM.
3. Tells legacy X11 input method environment variable.
4. Tells Qt-based applications (KDE apps, Telegram desktop, VLC, etc.) which IM framework to use.


## Reset
```bash
find ~ -type f -name "*.db"
rm ~/.config/mozc/.history.db
fcitx5 -r 

```


### Shortcut Key

* `Ctrl`+ `<space>`

* `Shift` -- Change input method.

* `Shift` + `Space` -- Group Input Method


### Mozc

IME (Input Method Editor) for Japanese.

Open source.(originated from Google).

1. fcitx5 --> Configure Mozc
2. `mozc-config`


**Preedit Remain Problem in Electron**

* Off "Show preedit in application".
 
