# Timer

```
[Unit]
Description=explanation

[Timer]
OnBootSec=Xmin # After 5 minitutes from booting
OnUnitActiveSec=Xmin # X minutes cycle
Unit=name.service # default execute timername.service

[Install]
WantedBy=timers.target
```