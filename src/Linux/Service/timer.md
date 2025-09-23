# Timer

```
[Unit]
Description=explanation

[Timer]
OnBootSec=Xmin # After 5 minitutes from booting
OnUnitActiveSec=Xmin # X minutes cycle
Unit=name.service # default execute timer_name.service

[Install]
WantedBy=timers.target
```