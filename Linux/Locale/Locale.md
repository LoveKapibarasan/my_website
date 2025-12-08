## Timezone

* `timedatectl set-timezone $TIMEZONE`

**Arch chroot**

* `ln -sf /usr/share/zoneinfo/$TIMEZONE /etc/localtime`

## Locale


**Candidates**
### `/etc/locale.gen`
```ini
# en_US.UTF-8 UTF-8
# ja_JP.UTF-8 UTF-8
```
```bash
sudo locale-gen
```

* Decide which locale to genarate.
* Comment out
* Debian, Arch

**Default**
### `/etc/locale.conf`
```ini
LANG=ja_JP.UTF-8
```

* Default locale
* Arch Linux, RHEL/CentOS, Fedora


### `/etc/default/locale`

```ini
LANG="en_GB.UTF-8"
LANGUAGE="en_GB:en"
```
* Debian



## Keyboard

**x11**
setxkbmap jp

**wayland**
no command(depend on GUI)

**console tty layer**

`loadkey` -- temporaly change

### `/etc/default/keyboard`
```ini
XKBMODEL="pc105"
XKBLAYOUT="jp"
XKBVARIANT=""
XKBOPTIONS=""
```
* Debian


### /etc/vconsole.conf
```ini
KEYMAP=jp106
FONT=lat9w-16
```

* Arch Linux / Manjaro