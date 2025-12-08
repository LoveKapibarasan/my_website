# DHCP (Dynamic Host Configuration Protocol)
1. The PC (client) broadcasts “I need an IP address.”
→ “DHCP Discover”

2. The router (DHCP server) replies with an offer of an address and settings.
→ “DHCP Offer”
(e.g. IP=192.168.189.20, DNS=192.168.189.1, Gateway=192.168.189.1, subnetmask=255.255.255.0)

3. The PC says “I’ll use those settings.”
→ “DHCP Request”

4. The router confirms and finalizes the assignment.
→ “DHCP Acknowledge”

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
