# Complete Summary of What We Covered

## 1. Basics of Sway

* **Sway** is a tiling window manager for Wayland, very similar to i3.
* Default modifier key is **Super (Windows key)**.
* Key commands include:

  * `$mod+Enter`: launch terminal (default: foot)
  * `$mod`+(`shift`)+`number`: Switch workspace.
  * `$mod+d`: app launcher (wofi, bemenu, etc.)
  * `$mod+q`: close window
  * `$mod+h/j/k/l`: move focus left/down/up/right
  * `$mod+Shift+h/j/k/l`: move window left/down/up/right
  * `$mod+f`: fullscreen
  * `$mod+Shift+c`: reload config

---

## 2. Configuration File

* Default config: `/etc/sway/config`.
* User config: `~/.config/sway/config`.
* If missing, copy from system:

  ```bash
  mkdir -p ~/.config/sway
  cp /etc/sway/config ~/.config/sway/config
  ```

---

## Output
```
default_border none # Do not display application name
output * scale n
```



## exec
```
exec xxx
```

### Keyboard Configuration

### Display

```bash
swaymsg -t get_outputs
```

---


### Notes

* `Scratchpad` -- like hidded storage of windows

* `Mod4` = Windows key

* Switch windows on full screen mode
```
bindsym $mod+Tab fullscreen; focus next; fullscreen;
```

* **foot** is a lightweight terminal emulator designed for Wayland.
