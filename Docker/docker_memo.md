# Docker

* Docker is a platform that lets you package applications and their dependencies into lightweight, portable **containers** so they can run consistently across different environments. It simplifies development, testing, and deployment by isolating software from the host system.


1. Enable auto start.
2. Add docker user group 

**Config:**
* `/etc/docker/daemon.json`: Docker daemon setting
* `DOCKERFILE`
* `docker-compose.yml`: multiple containers management
* `.dockerignore`: like `.gitignore`


**Env order**
1. Command-line (docker compose run -e VAR=value)
2. Shell environment variables (exported variable)
3. Environment in `docker-compose.yml`
4. `.env` file
5. Environment in Dockerfile with `ENV` instruction"

## Commands

* `docker start`
    * up one container.

* `docker compose up`

    * `-d` 
        * **Detached mode** <-> Foreground mode (default)

        * Starts the containers in the background(with no logs).

    * `-f`
        * Assign docker file path.
    
    * `--build`

        * Forces a rebuild of images before starting containers, even if the image already exists locally.

* `docker logs <container_name>`
    
    * `-f` = real time log

### `docker compose rm -f "$container_name"`
    * `-f` = force

### `docker exec`
    * Run commands inside a container.
    * `-it`   run this command inside the container interactively as if I were in a terminal.


#### Stop commands

* `docker stop $(docker ps -q)`
    

* `docker rm -f $(docker ps -aq)`

* `docker ps`
    * `-q` → lists only the IDs of all running containers.
    * `-a` → lists also stopped containers.


* `docker system df`
    * Check docker disk size.

### Health Check

* A health check is a command that Docker runs inside a container to test whether the application running inside is still working as expected.


### Docker Version


### V1 (~ 2023.10)(Python)
``ỳaml
version: '3.8' # this is deprecated.
```
* Check header of `docker-compose.yml`.
* `docker-compose --version` -- with `-` is older version.

### V2(Go)

* Check `README.md`.
