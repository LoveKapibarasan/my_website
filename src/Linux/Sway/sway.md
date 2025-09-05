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

## 3. Background (Wallpaper)


 **Built-in output bg**:

   ```conf
   output * bg /path/to/image.png fill
   ```


---

## 4. Bars (Swaybar / Waybar)

* To disable **swaybar**, comment out:

  ```conf
  # bar {
  #     status_command while sleep 1; do date; done
  # }
  ```

* To disable **waybar**, comment out:

  ```conf
  # exec waybar
  ```

---

## 5. Foot (Terminal Emulator)

* **foot** is a lightweight terminal emulator designed for Wayland.


---

## 6. Forcing Fullscreen

* All windows fullscreen:

  ```conf
  for_window [class=".*"] fullscreen enable
  ```

* Specific apps fullscreen:

  ```conf
  for_window [class="firefox"] fullscreen enable
  ```

---

## 7. Keyboard Configuration

* General settings:

  ```conf
  input * {
      xkb_layout us,de
      xkb_options grp:alt_shift_toggle
  }
  ```


---


### Notes

* `Scratchpad` -- like hided storage


```ini
bindsym $mod+Tab fullscreen; focus next; fullscreen;
```