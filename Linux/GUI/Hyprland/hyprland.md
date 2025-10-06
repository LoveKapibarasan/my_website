## Hyprland

* The origin of the name “Hyprland” comes from its creator, who initially named the project “Hypr” (short for Hyper, as in “fast / advanced / extra”).

```bash
exec Hyprland
```

### GPU acceleration
dwm, i3
* GPU acceleration means using the graphics processing unit to speed up computations that are too heavy or slow for a CPU alone.

### Config

* `~/.config/hypr/hyprland.conf`

* Change default keyboard layout.


#### fcitx5

```ini
exec-once = fcitx5 -d -r
exec-once = fcitx5-remote -r
env = QT_IM_MODULE, fcitx
env = XMODIFIERS, "@im=fcitx"
env = GTK_IM_MODULE, fcitx
env = SDL_IM_MODULE, fcitx
```

### Screen Information

```bash
hyprctl monitors
hyprctl monitors all
```

* 1920x1080@60.00000 = Full HD, 60Hz
* at 0x0 = left top
* make = maker = hersteller
* special workspace = like scratch pad

### Notes

* dwindle -- spiral layout
