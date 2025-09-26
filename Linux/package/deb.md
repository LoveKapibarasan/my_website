# `.deb`

1. Executable files and libraries (the actual program of the app)

2. Configuration files (where to place things, how to run them)

3. Dependency information (a list of “this and that are also needed to run this app”)

4. Scripts (processes executed during installation or uninstallation)

* In other words, a `.deb` file is like a ZIP archive that bundles together the application + instructions + supplementary tools.

```bash
mkdir -p <package>/DEBIAN
mkdir -p <package>/usr/local/bin

dpkg-deb --build <package>
```
* `/usr/local/bin/` 
* `DEBIAN` = package info
* `DEBIAN/control`
* `DEBIAN/postinst`（post-install script） = start service, update cache

    ```
    Package: hello
    Version: 1.0
    Section: base
    Priority: optional
    Architecture: amd64
    Maintainer: name <you@example.com>
    Description: 
    ```