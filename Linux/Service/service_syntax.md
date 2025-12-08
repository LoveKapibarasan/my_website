## Location
System-wide (root management)

* `/usr/lib/systemd/system/`
  → Location where the OS or packages provide `.service` and `.timer` files.

* `/etc/systemd/system/`
  → Location for administrators to add or override units (takes higher priority).

User-level (`--user` mode)

* `~/.config/systemd/user/`
  → Location to manage `.service` and `.timer` files within the user’s home directory.


## name.service
```ini
[Unit]
Description=explanation
After=xxx
xxx=.service
Requires=xxx
xxx=.service


[Service]
type=xxx
xxx=oneshot

Restart=xxx
xxx=always

WorkingDirectory=
# chdir

ExecStart=path
ExecStop=path

User=xxx
xxx=root(default)

```