# DHCP (Dynamic Host Configuration Protocol)

* Configure IP address , DNS, gateway automatically.


```bash
# Do DHCP
dhcpcd $interface
```

## DHCP server

### dnsmasq

`/etc/dhcpcd.conf`

```bash
dhcp-range=192.168.42.10,192.168.42.100,255.255.255.0,24h
# start, end, subnet mask, valid time 

```
