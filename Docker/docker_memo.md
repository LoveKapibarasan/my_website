# Docker
* Docker is a platform that lets you package applications and their dependencies into lightweight, portable **containers** so they can run consistently across different environments. It simplifies development, testing, and deployment by isolating software from the host system.

Docker Engine: Open source
[URL](https://github.com/moby/moby)
Docker Desktop: restricted

**After install**
1. Enable auto start.
2. Add docker user group 

**Config:**
* `/etc/docker/daemon.json`: Docker daemon setting
* `DOCKERFILE`
* `docker-compose.yml`: multiple containers management
* `.dockerignore`: like `.gitignore`

    **Containers**
    * `/var/lib/docker/containers/"$container-id/` -- meta information
    * `/var/lib/docker/containers/<container-id>/"$container-id"-json.log` -- log file
    * `/var/lib/docker/overlay2/` -- containers are stored here.

**Layer**:
```
[application code]  ← Layer 3（writable）
[Python dependencies]     ← Layer 2（read only）# in the host system these will be shared.
[Python runtime]        ← Layer 1（read only）
[Base OS]               ← Layer 0（read only）# In the VM this would not be shared with host
```
**overlay2**: layer management. 
RUN,COPY: This adds a layer.

**Hypervisor(VM)**
* Used to devide a physical server into virtual machines
1. Native/Bare-Metal Hypervisor -- Install OS on physical hard disk.
2. Hosted Hypervisor -- OS runs as an application. It has virtual CPU.
    * Intel VT-x（Intel Virtualization Technology）
    * AMD-V（AMD Virtualization）
    * GPU Passthrough(100%) or  vGPU(devide)

* Full Virtualization -- Do not touch Guest OS (Virtual Box)
* Paravirtualization 

**Env order**
1. Command-line (docker compose run -e VAR=value)
2. Shell environment variables (exported variable)
3. Environment in `docker-compose.yml`
4. `.env` file
5. Environment in Dockerfile with `ENV` instruction"

If `environment:` section is `"${}"` style.

2,4,5 is valied until the container is downed.

## Commands
```bash
docker compose [global option] [sub command] [sub command option]
```
* `docker start`
    * up one container.

* `docker compose up`
    * Do not build when an image exists.

    * `-d` 
        * **Detached mode** <-> Foreground mode (default)

        * Starts the containers in the background(with no logs).

    * `-f`
        * Assign docker file path.

    *  `--env-file`
    
    * `--build`
        * Forces a rebuild of images before starting containers, even if the image already exists locally.

* `docker compose down`
    * Default `docker-compose.yml`
    * `--rmi all`: remove image
    * `--rmi local`: Only built image

* `docker compose build`
    * `--no-cache`

* `docker logs <container_name>`
    
    * `-f` = real time log

* `docker compose build`
```yaml
services:
  xxx:
    build: # Run this section.
      context: ./app
      dockerfile: Dockerfile #Entry Point
    ports:
      - "8080:8080"
```

* `docker compose rm -f "$container_name"`
    * `-f` = force

* `docker exec`
    * Run commands inside a container.
    * `-it`   run this command inside the container interactively as if I were in a terminal.

* `docker ps`
    * `-q` → lists only the IDs of all running containers.
    * `-a` → lists also stopped containers.
```
CONTAINER_ID IMAGE COMMAND CREATED STATUS PORTS NAMES
```

### Stop commands

* `docker stop $(docker ps -q)`

* `docker rm -f $(docker ps -aq)`
    * Volume is not deleted
    * Pulled or built images are not deleted
    * delete container


* `docker container prune`
    * Delete all stopped containers

* `docker system df`
    * Check docker disk size.

### Health Check

* A health check is a command that Docker runs inside a container to test whether the application running inside is still working as expected.
* Run defined command in `healthcheck:` section


### Container
1. ID(64 Character, hexadecimal)
> ID can be ommited.(Only the first few letters)

2. Name
> Default: Rundom `Adj_Scientist`.
```yaml
container_name: "$my-custom-name"
```

### Docker Version


### V1 (~ 2023.10)(Python)
``ỳaml
version: '3.8' # this is deprecated.
```
* Check header of `docker-compose.yml`.
* `docker-compose --version` -- with `-` is older version.

### V2(Go)

* Check `README.md`.



