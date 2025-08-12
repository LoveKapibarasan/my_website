# Docker

* Docker is a platform that lets you package applications and their dependencies into lightweight, portable **containers** so they can run consistently across different environments. It simplifies development, testing, and deployment by isolating software from the host system.


* `-E`  “Extended Regular Expressions” 


## Commands

### `docker compose up`

    * `-d` 
        * **Detached mode** <-> Foreground mode (default)

        * Starts the containers in the background(with no logs).
    
    * `--build`

        * Forces a rebuild of images before starting containers, even if the image already exists locally.

### `docker logs <container_name>`
    
    * `-f` = real time log

### `docker compose rm -f <container_name>`
    * `-f` = force

### `docker exec`

    * Run commands inside a container.
    * `-it`   {{"“run this command inside the container interactively as if I were in a terminal”."}}
#### Stop commands

* `docker stop $(docker ps -q)`
* `docker rm -f $(docker ps -aq)`
    * `docker ps -q` → lists only the IDs of all running containers.
    * `docker stop` ... → stops them, which releases any ports they had bound to the
