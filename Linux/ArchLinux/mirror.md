
## Mirror
refers to a server that holds a copy of another (original) server’s contents.
Load balancing: If everyone around the world connects to a single server, it gets overloaded. Mirrors spread the traffic.

```bash
curl -o /etc/pacman.d/mirrorlist https://archlinux.org/mirrorlist/?country=JP
# and comment out
```
