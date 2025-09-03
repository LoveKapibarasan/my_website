## IP address
 = address in a network

## TCP = Transmission Control Protocol

* a communication protocol used on the internet to send data reliably between devices.
* Works together with IP ⇒ “TCP/IP”

| Feature       | IPv4                           | IPv6                                            |
| ------------- | ------------------------------ | ----------------------------------------------- |
| Address size  | 32-bit (4 bytes)               | 128-bit (16 bytes)                              |
| Format        | Four numbers separated by dots | Eight groups of hex numbers separated by colons |
| Example       | `127.0.0.1`                    | `::1` / `2001:db8::1`                           |
| Address space | \~4.3 billion addresses        | virtually unlimited                             |

IPv4 is older and still used the most for example in a local network.
IPv6 is newer and solves the problem of running out of IPv4 addresses.


## NetworkManager

* A Linux service/daemon that manages network connections.

* `/etc/NetworkManager/conf.d/` Setting dir.

```ini
[main]
dns=default

[ipv4]
ignore-auto-dns=true
dns=127.0.0.1;

[ipv6]
ignore-auto-dns=true
dns=::1;
```


### UI
* CLI: `nmcli`

* TUI: `nmtui`

* GUI (used in desktop environments like GNOME, KDE)

```bash
# Show connections
nmcli connection show

# Connect to a Wi-Fi
nmcli dev wifi connect MySSID password "secretpass"

nmcli connection modify wlan0 ipv4.ignore-auto-dns yes
nmcli connection modify wlan0 ipv4.dns "127.0.0.1"
nmcli connection up wlan0

```


## 📌 iptables

* A firewall utility in Linux (part of the Netfilter framework).

* Purpose: control packet filtering, NAT, and routing rules.

* Works at the kernel level.

```bash
# Allow SSH (port 22)
sudo iptables -A INPUT -p tcp --dport 22 -j ACCEPT

# Block all incoming traffic by default
sudo iptables -P INPUT DROP
```

## lighttpd (pronounced lighty) 

* an open-source, lightweight web server. 



## wlan<n>
* <n>th network interface in PC

## DHCP (Dynamic Host Configuration Protocol)

1. The PC (client) broadcasts “I need an IP address.”
→ “DHCP Discover”

2. The router (DHCP server) replies with an offer of an address and settings.
→ “DHCP Offer”
(e.g. IP=192.168.189.20, DNS=192.168.189.1, Gateway=192.168.189.1, subnetmask=255.255.255.0)

3. The PC says “I’ll use those settings.”
→ “DHCP Request”

4. The router confirms and finalizes the assignment.
→ “DHCP Acknowledge”



## WWW
www. = World Wide Web
* to distinguish web server from other server.
* Nowaday it has no meaning.