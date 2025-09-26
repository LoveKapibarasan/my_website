## DNS = Domain Name System 
* Domain(human readable) → IP address

* DNS must not be specified by system.

* port number 53


| Provider       | Purpose / Features                   | Primary        | Secondary       |
| -------------- | ------------------------------------ | -------------- | --------------- |
| Google DNS     | Fast & stable                        | 8.8.8.8        | 8.8.4.4         |
| Cloudflare DNS | Fast & privacy-focused               | 1.1.1.1        | 1.0.0.1         |
| Quad9 DNS      | Malware protection                   | 9.9.9.9        | 149.112.112.112 |
| OpenDNS        | Parental filtering (family-friendly) | 208.67.222.222 | 208.67.220.220  |
| AdGuard DNS    | Built-in ad blocking                 | 94.140.14.14   | 94.140.15.15    |

Ipv4 address of DNS server.

Address of Pihole = IP address of a device(127.0.0.1) 
if you want to use rasberryPi as a DNS server, RasberryPi 's IP address

# Setting files
```bash
/etc/resolv.conf
```

## DHCP
* decide IP address of device automatically.

## DoH

* DNS over HTTPs

## `systemd-resolved`

DNS service in system.

* `/etc/resolv.conf`

* `/run/systemd/resolve/resolv.conf` 

 
## Softwares
* `dnsmasq` = DNS + DHCP
* `pihole-FTL`


