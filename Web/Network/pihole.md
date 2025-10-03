
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
sudo pihole enable

```
**gravity.db**
* setting file for domains list.
* can also use transporter to sync setting.


### FTL = Faster Than Light

* Processes DNS queries (forwarder, caching server)

* Internally, it is built on top of **`dnsmasq`** with extensions.


`nameserver 127.0.0.1` -> glibc send `127.0.0.1:53/udp`

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
