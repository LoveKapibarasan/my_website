# Login

* **getty** opens `/dev/ttyN` and output login.

* does authentication and run a shell(e.g. bash, zsh) on that tty.


```bash
systemctl status getty@tty<n>.service
```

**Config:**

`/lib/systemd/system/getty@.service` -- template
`/etc/systemd/system/getty@tty1.service.d/override.conf` -- override
