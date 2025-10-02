## Capturing Network Packages

```bash
sudo tcpdump -i wlan0 port 53 or port 443 -n

# -i = interface
# -n = do not resolve hostname or service name
```
