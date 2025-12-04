```yaml
# This version is outdated
version
# Comment
services:
  name1:
    container_name: name
    image: name/name:latest
    platform: linux/amd64/…
    container_name: "${name}"
    # run as root
    user: "0" 
    ports:
        - "${port_of_host}:${port_of_container}/${protcol}"
    # Linux capabilities
    cap_add:
    environment:
        TZ: Europe/Berlin
        # - TZ=Europe/Berlin  # List Style

    restart: always # unless-stopped
    # Order
    depends_on:
      - service_name
    healthcheck:
      test: "$command"
      interval: "$n"s
      timeout: "$n"s
      retries: "$n"
    networks:
      - shared-network
    # Log Rotation
    logging:
      driver: "json-file"
      options:
        max-size: "10m" # 10 MB
        max-file: "3" # 3 generations
    # Synced with host
    volumes:
      # ro: read only(protect overwritting of host-file)
      # sock: read and write
      - $host_path:${container_path}:ro
  name2:
    build:
      context: "$path" # like ../ used with COPY . . 
      dockerfile: ./Dockerfile

networks:
  network_name:
    external: true
```

### Search Image Name

* [docker URL](https://hub.docker.com)
* `docker search "$name`
* `[registry/]repository[:tag][@digest]`
    * Registry: xxx.io or hub.docker.com(default)
    * Tag: `stable` or `latest`(default)
    * Digest = SHA256 hash

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


**URL**

* `localhost`
* `host.docker.internal`: port of local machine


### Network

* `localhost` does not work between different `docker-compose`.

```bash
# create external network
docker network create "$network_name"
```
       
```
Docker Bridge Nework
172.17.0.0/16
  ├─ 172.17.0.1 = Gateway from localhost, internet
  └─ 172.17.0.X = Container
```

### YAML anchor
* Define with `&` and reference with `*`.

```yaml
# env version
x-defaults: &default-env
  environment:
    - DEBUG=true
    - LOG_LEVEL=info
services:
  service1:
    image: app1
    <<: *default-env
```

**Container Name**
**{project_name}_{service_name}_{number}** 
* project name = path that you execute docker compose or `-p "$name"`
