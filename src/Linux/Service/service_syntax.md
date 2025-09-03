# name.service
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