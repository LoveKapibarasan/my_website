### Unlock Bootloader
1. Get unlock key from the maker.

```bash
# Enable Developer Options (tap Build Number 7 times)
# Enable OEM Unlocking
# Enable USB Debugging

# From computer:
adb reboot bootloader
fastboot oem unlock
# or
fastboot flashing unlock
```

- Integrated with ROM
- Secret Key is managed by maker


### How to Get Root Privileges on Android = Wie man Zugriff auf Wurzelrechte erhält
**`Magisk`**
* [URL](https://droidwin.com/root-lineageos-magisk-boot-img/)
* Some bank application might not work.

### Fastboot

* Fastboot = Bootloader Protocol and Command-Line Tool = Protokoll und Befehlszeilentool für den
Bootloader


### Best smartphone maker for programmer

* ASUS
* Google Pixel
* PinePhone
### OS
* Ubuntu
* LineageOS
    * root addon

### Why LineageOS needs device-specific builds: = Warum benötigt LineageOS device-spezifische Builds:

* Different bootloaders - Each manufacturer uses their own proprietary bootloader with different unlock methods

* Different System-on-Chips (SoCs) -  each need specific drivers and configurations

* Custom hardware configurations - Each phone has unique:
    * Camera sensors and ISP (Image Signal Processor)
    * Display panels and touch controllers
    * Fingerprint sensors
    * GPS, WiFi, Bluetooth chips
    * Battery management

* Device Tree - describes the exact hardware layout for each specific phone model

**Android**
* Android Core
* Android API  should be the same.



### TWRP(Team Win Recovery Project)

* used to unlock or get root.



