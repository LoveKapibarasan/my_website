

# logrotate 

* Log management.


**Config**: `/etc/logrotate.d/name`

```ini

/var/log/**.log {
    daily
    rotate 14
    size 10M
    compress
    delaycompress
    missingok
    notifempty
    copytruncate
    create 0640 ubuntu ubuntu
    dateext
    dateformat -%Y%m%d
}
```
* -> `**.gz`