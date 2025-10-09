##  Create a Docker image

* Place a Dockerfile in your project directory

* Build the Docker image with:
```bash
docker build -t <username>/<repository>:<tag> .
```

## Create a Docker Hub account & login 

```bash
docker login
```

##  Push (publish) to Docker Hub 
```bash
docker push <username>/<repository>:<tag>
```

##  Choose visibility

Set the repository to Public on Docker Hub if you want anyone to pull it

Use Private to restrict access (note: free accounts have limits) 

