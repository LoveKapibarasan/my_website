## systemd-resolved service

* Defautlt DNS service.

* Applications send DNS queries to `127.0.0.53:53`


1. DNS caching

1. DNS server management

    * Collects DNS server info from NetworkManager, DHCP clients, or systemd-networkd


1. DNSSEC support

    * Verifies domain signatures to detect tampering

1. Multicast DNS (mDNS) & LLMNR

    * Supports local name resolution (e.g., .local addresses on LAN)

**Config**
* `/etc/systemd/resolved.conf` Main setting file.

* `/etc/systemd/resolved.conf.d/dns.conf` override setting.

```ini
[Resolve]
DNS=127.0.0.1
Domains=~. # all dns query
DNSStubListener=no
```

**DNSStubListener**
Yes -> 127.0.0.53
No -> Use `/etc/resolv.conf`


**Socket Activation**

`sudo systemctl mask systemd-resolved-varlink.socket`
`sudo systemctl mask systemd-resolved-monitor.socket`
