# Volume
A mechanism to safely store data outside the container and make it easy to handle across containers.

```bash
docker run \
  --mount type=volume,source=<Volume_name>,target=<Path> \
  <Image_name>

docker run -d \
  --mount type=volume,source=my_volume,target=/var/lib/mysql \
  mysql:latest
```
**Compose**
```yaml
services:
  db:
    image: mysql:8
    volumes:
      - my_volume:/var/lib/mysql
    environment:
      MYSQL_ROOT_PASSWORD: example

volumes:
  my_volume:
```


### Differences Between Volume and Bind Mount

| Item             | Volume                                | Bind Mount                               |
| ---------------- | ------------------------------------- | ---------------------------------------- |
| Managed by       | Managed by Docker                     | Uses a host path specified by the user   |
| Data location    | `/var/lib/docker/volumes/...`         | Any directory on the host                |
| Portability      | High (works the same across any host) | Low (depends on the host environment)    |
| Typical use case | Persisting DB data or logs            | Sharing source code (during development) |


