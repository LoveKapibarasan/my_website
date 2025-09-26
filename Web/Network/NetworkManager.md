# NetworkManager

* nmtui/nmcli

**Config**

* `/etc/NetworkManager/system-connections/keyfile (.nmconnection)`

### UI
* CLI: `nmcli`

* TUI: `nmtui`

* GUI (used in desktop environments like GNOME, KDE)

```bash
# Show connections
nmcli connection show

# Connect to a Wi-Fi
nmcli dev wifi connect MySSID password "$password"

nmcli connection modify wlan0 ipv4.ignore-auto-dns yes
nmcli connection modify wlan0 ipv4.dns "127.0.0.1"
nmcli connection up wlan0
```
