## Hyprland

* The origin of the name “Hyprland” comes from its creator, who initially named the project “Hypr” (short for Hyper, as in “fast / advanced / extra”).

```bash
exec Hyprland
```

### GPU acceleration
❌️　dwm, i3
* GPU acceleration means using the graphics processing unit to speed up computations that are too heavy or slow for a CPU alone.

### Config

* `~/.config/hypr/hyprland.conf`

* Change default keyboard layout.

```ini
monitor=HDMI-A-1,1920x1080@60,0x0,1 # last parameter should be integer.

# Auto full screen
windowrulev2 = fullscreen, class:.*, windowtype:xdg_toplevel
bind = $mainMod, A, fullscreen 

# move workspace and follow
bind = $mainMod SHIFT, 1, movetoworkspace, 1

# Cycle focus between windows
bind = $mainMod, Tab, cyclenext

# Disable background
animations {
    enabled = false
}

decoration {
}
# misc = “miscellaneous”
misc {
    disable_hyprland_logo = true
    disable_splash_rendering = true
}
# Disable dragging
# Move/resize windows with mainMod + LMB/RMB and dragging
bindm = $mainMod, mouse:272, movewindow
bindm = $mainMod, mouse:273, resizewindow

```

#### fcitx5

```ini
exec-once = fcitx5 -d -r
exec-once = fcitx5-remote -r

env = QT_IM_MODULE, fcitx
env = XMODIFIERS, "@im=fcitx"
env = GTK_IM_MODULE, fcitx
env = SDL_IM_MODULE, fcitx
```

### Notes

* dwindle -- spiral