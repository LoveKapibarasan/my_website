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

* CLI: `nmcli`

* TUI: `nmtui`

* GUI (used in desktop environments like GNOME, KDE)

```bash
# Show connections
nmcli connection show

# Connect to a Wi-Fi
nmcli dev wifi connect MySSID password "secretpass"
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

## Captive portal authentication

* http access
