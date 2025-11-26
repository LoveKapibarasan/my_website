


### APK Install
> Enable to install unknown application
```bash
adb install
adb install -r "**.apk"
# -r: reinstall
adb sideload "$app".apk # recovery mode
  
```


### Device Information
```bash
adb shell getprop ro.product.model
adb shell getprop ro.product.device
adb shell getprop ro.build.fingerprint

# by-name: link of partition info
ls -l /dev/block/by-name/ # MTK device
ls -l /dev/block/bootdevice/by-name/ # Qcom device
# -a exists
# output like: lrwxrwxrwx 1 root root 20 2025-11-18 14:39 boot -> /dev/block/mmcblk0p9

# Version Check
adb shell getprop ro.build.version.release
```

**CPU Architecture**
```bash
adb shell getprop ro.product.cpu.abi
adb shell getprop ro.product.cpu.abilist
```

**Soc vendor**
```bash

adb shell cat /proc/cpuinfo
```

**kernel version**
```bash
adb shell uname -a
```

### Battery
```bash

adb shell ls /sys/class/power_supply/battery/
adb shell dumpsys battery
```
**Output**
```
Current Battery Service state:
  AC powered: false
  USB powered: true
  Wireless powered: false
  Max charging current: 500000
  Max charging voltage: 5000000
  Charge counter: 3726000
  status: 2
  health: 2
  present: true
  level: 69
  scale: 100
  voltage: 3961
  temperature: 250
  technology: Li-ion
```

**Treble Check**
```bash
adb shell getprop ro.treble.enabled
```

### Copy
```bash
adb push *.apk /sdcard/path/
# Android -> PC
adb pull $Path_Android $Path_PC
```

### Fastboot
```bash
# Temporal
fastboot boot patched_boot.img

# Permanent
fatsboot flash recovery recovery.img
fastboot flash system system.img
```



### Enter into shell
```bash
adb shell

ls /

exit
```

### Su
```bash
adb shell
su
# Or
adb root
adb shell
```