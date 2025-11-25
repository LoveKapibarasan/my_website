# Dockerfile

**Docker Image:** blueprint  of an application. like install file.
**Container:** running image

Everything will be executed in a container.

```dockerfile
# 1. Base Image
FROM python:3.9 # Python Environment
FROM node:24 # Node.js
FROM ubuntu:latest # ubuntu

# 2. Working directory
WORKDIR /app # create app directory inside the containar and excute all command in this directory

# 3. Copy necessary files
COPY . /app # cp

# 4. Run a command once when the container is created
RUN pip install -r requirements.txt # python
RUN apt-get update && apt-get install -y curl # ubuntu


ARG WEBSERVER_PORT=9010
ARG WEBSERVER_HOST=0.0.0.0

# 5. Assign the command
## It is excuted when container becomes up.
CMD ["python", "app.py"]
CMD ["node", "server.js"]
```


```bash
docker build -t "$image_name" . 
# -f Dockerfile_path
# --no-cache
# --progress=plain: verbose output
# You can not run dockerfile directly.
```


```bash
docker run -d -p "$local_port":"$containar_port" "$image"
# --name
docker images # pulled images
docker rmi "$image_name"
docker image prune -a # delete not used images
```

`/docker-entrypoint.sh` is used as wrapper start up script.


### ENV vs ARG
* ARG is only available during build time.
* ENV is available during build time and run time and remains in image.
