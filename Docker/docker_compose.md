```yaml
services:
  pihole:
    container_name: name
    image: name/name:latest
    ports:
        - "<port_of_host>:<port_of_container>/<protcol>"
    # Linux capabilities
    cap_add:
    
    restart: always
```

### Cap Add

* `CAP_NET_ADMIN` → Network configuration changes (IP changes, routing operations, etc.) = Änderungen der Netzwerkkonfiguration (IP-Änderungen, Routing-Operationen usw.)

* `CAP_SYS_ADMIN` → General system administration (mount/unmount, etc.) = Allgemeine Systemverwaltung (Mount/Unmount usw.)

* `CAP_CHOWN` → Changing file ownership = Ändern des Dateibesitzers


* `CAP_SYS_TIME` → Changing the system clock = Ändern der Systemzeit

* `CAP_SYS_NICE`

on host system.

* `CAP_` is not necessary.