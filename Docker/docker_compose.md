```yaml
services:
  name1:
    container_name: name
    image: name/name:latest
    platform: linux/amd64/…
    container_name: "${name}"
    ports:
        - "${port_of_host}:${port_of_container}/${protcol}"
    # Linux capabilities
    cap_add:
    
    restart: always
    healthcheck:
      test: "$command"
      interval: "$n"s
      timeout: "$n"s
      retries: "$n"
  name2:
    build:
      context: "$path" # like ../ used with COPY . . 
      dockerfile: ./Dockerfile
```

### .Env
* `${name}` -- read from shell or `.env`.


### Cap Add

* `CAP_NET_ADMIN` → Network configuration changes (IP changes, routing operations, etc.) = Änderungen der Netzwerkkonfiguration (IP-Änderungen, Routing-Operationen usw.)

* `CAP_SYS_ADMIN` → General system administration (mount/unmount, etc.) = Allgemeine Systemverwaltung (Mount/Unmount usw.)

* `CAP_CHOWN` → Changing file ownership = Ändern des Dateibesitzers


* `CAP_SYS_TIME` → Changing the system clock = Ändern der Systemzeit

* `CAP_SYS_NICE`

on host system.

* `CAP_` is not necessary.


* This will be synced if you use the same image on different project.
```yaml
    environment:
      POSTGRES_PASSWORD: "my-secret-password" 
```
