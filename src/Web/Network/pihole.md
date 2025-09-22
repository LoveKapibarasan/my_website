
* can use DHCP.

##  `WebUI`

* From other device: `http://<ip_address>/admin/login`
* From the same device: `http://localhost/admin/`

### Password
* `sudo setpassword`

## DNS info

* ArchLinux => NetworkManager, systemd-resolved
* Raspi Lite => NetworkManager

### gravity.db 
* setting file for domains list.
* can also use transporter to sync setting.


### FTL = Faster Than Light

* Processes DNS queries (forwarder, caching server)

* Performs ad and tracker filtering (blacklists/whitelists)

* Collects statistics (which domains were blocked, queries per client, etc.)

* Provides data to the Pi-hole Admin Web dashboard

* Internally, it is built on top of **`dnsmasq`** with extensions.


`nameserver 127.0.0.1` -> glibc send `127.0.0.1:53/udp`

### Docker
[URL](https://docs.pi-hole.net/docker/configuration/)

```yaml
services:
  pihole:
    container_name: pihole
    image: pihole/pihole:latest
    ports:
      - "53:53/tcp"
      - "53:53/udp"
      - "80:80/tcp"
      - "443:443/tcp"
    environment:
      TZ: 'Europe/Berlin'
      FTLCONF_webserver_api_password: "${ADMIN_PASSWORD}" # If use .env
      FTLCONF_dns_listeningMode: 'all'
      FTLCONF_dns_upstreams: '1.1.1.1;8.8.8.8' # upstream DNS server
      FTLCONF_dns_rateLimit_count: 0 # FTL rate limit setting.
      FTLCONF_dns_rateLimit_interval: 0
      FTLCONF_dns_blockingMode: NXDOMAIN # to prevend TLS error
    volumes:
      - './etc-pihole:/etc/pihole'
    cap_add:
      - NET_ADMIN
      - SYS_TIME
      - SYS_NICE
    restart: always
```


## Install Script


* **color = ASCII**
```bash
COL_NC='\e[0m'        # (reset)
COL_WHITE='\e[1;37m'  # White
COL_GREEN='\e[0;32m'  # Green
COL_YELLOW='\e[1;33m' # Yellow
COL_RED='\e[1;31m'    # Red
# Usage
echo -e "${COL_GREEN}Green text${COL_NC}"
echo -e "${COL_RED}Red text${COL_NC}"
```
