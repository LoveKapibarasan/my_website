
* can use DHCP.

##  `WebUI`

* From other device: `http://<ip_address>/admin/login`
* From the same device: `http://localhost/admin/`

### Password
* `sudo setpassword`
* or set with .env(docker version install.)

**Config:**
```bash
sudo pihole status
systemctl status pihole-FTL
```
### DNS info

Port 53: for DNS server
Port 80: for Web UI

* ArchLinux => NetworkManager, systemd-resolved
* Raspi Lite => NetworkManager

### Commands

```bash
sudo pihole disable xm
sudo pihole status
sudo pihole enable

```
**gravity.db**
* setting file for domains list.
* can also use transporter to sync setting.


### FTL = Faster Than Light

**pihole-FTL** Service

* Processes DNS queries (forwarder, caching server)

* Internally, it is built on top of **`dnsmasq`** with extensions.

**Config(v6):** `/etc/pihole/pihole.toml`

* `upstreams`  - upstream DNS server(IPv4 and IPV6) 
* `pwhash` - Admin password
* `listeningMode` = "LOCAL"
    * 2FA（`totp_secret`)
* `timeout = 1800` - timeout for Web UI session
* `etc_dnsmasq_d = false` - No additional config    
* `interface = "eth0", "wifi0"`

`nameserver 127.0.0.1` -> glibc send `127.0.0.1:53/udp`

**DHCP**

```ini
[dhcp]
  active = true
  start = "192.168.0.100"      # Start
  end = "192.168.0.200"        # End
  router = "192.168.0.1"       # Gateway（Actual router address）
  netmask = "255.255.255.0"    # Subnet Mask
  leaseTime = "24h"            # Lease Time
```

### lighttpd (pronounced lighty) 
* an open-source, lightweight web server. 

### TLS Certification

To connect web ui with https
* `cert = "/etc/pihole/tls.pem"`

**IPV6 is enabled on system**
```bash
cat /proc/sys/net/ipv6/conf/all/disable_ipv6
# --> 0 = enabled
```

### Docker
[URL](https://docs.pi-hole.net/docker/configuration/)

### NXDOMAIN
* NXDOMAIN = Non-Existent Domain


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
