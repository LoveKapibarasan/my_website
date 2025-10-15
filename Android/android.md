# Android

* "andro-" meaning "man" or "male human"
* "-oid" meaning "resembling" or "like"
* Linux kernal base.
* C

### File System
* `/system`
    * `/system/bin/sh`
* `/data`        - User data
    * `/data/app`
* `/cache`
* `/vendor`
* `/boot`
* `/recovery`
* `/sdcard`
* `/etc` - Simbolic Link `/etc` →  `/system/etc`
```
/system/etc/
  ├── hosts         
  ├── permissions/
  ├── security/
  ├── init/ 
  └── vold.fstab
```

* **Enable File Transfer (MTP) mode** with ADB (Android Debug Bridge) = Aktiviere die Dateitransfer-Modus 
```bash
adb shell                    # Enter Android shell
adb shell ls /system         # List system files
adb pull /path/file.txt      # Copy file to computer
adb push file.txt /sdcard/   # Copy file to phone
```

### Sandbox

* No `~/.config` instead `/data/data/<package_name>/shared_prefs/`

### Android Application
* `.apk` extension (actually a ZIP file)
```
app.apk 
├── AndroidManifest.xml     (compiled, binary XML)
├── classes.dex             (compiled bytecode)
├── resources.arsc          (compiled resources)
├── res/
│   ├── layout/             (compiled XML)
│   ├── drawable/           (images)
│   └── values/             (compiled)
├── META-INF/
│   ├── MANIFEST.MF         (file checksums)
│   ├── CERT.SF             (signature)
│   └── CERT.RSA            (certificate)
└── lib/                    (native libraries)
```


**Step 1: Check signature (META-INF/)**
- Read MANIFEST.MF
- Verify file checksums.
- Check CERT.RSA signature

**Step 2: Parse AndroidManifest.xml**
- Extract package name: `com.example.app`
- Check permissions requested
- Verify SDK version compatibility

**Step 3. File Extraction and Placement**

* **APK itself is NOT extracted.** Instead:

Original APK location:
`/data/app/com.example.app-[random]/base.apk`


### Terminal
- No offitial terminal.
- **Termux** (most popular, full Linux environment)

### IDEs

* `Android Studio` 
    * by Google originated from IntelliJ
    * `Kotlin`, `Java`
* `Flutter（Google）`
    * `Dart`
    * All platform.

* `React Native（Meta/Facebook）`


