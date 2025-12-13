## Capturing Network Packages

```bash
sudo tcpdump -i wlan0 port 53 or port 443 -n

# -i = interface
# -n = do not resolve hostname or service name

# DNS Query log
sudo tcpdump -i wlan0 -n -vv port 53

# Interface Log
sudo tcpdump -i "$interface" -vv
```

### Netcat

```bash
nc $option $host $port
```
* -v: verbose
* -z: only connection
* -l: wait as tcp server
* -n: do not DNS

### Traceroute

```bash
traceroute $host
# -n $ip
# -w $n : timeout
```
* Increase TTL 1-> 2 -> 3...