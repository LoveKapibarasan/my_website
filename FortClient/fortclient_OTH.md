## Wifi

[Link](https://rzwww.oth-regensburg.de/supportwiki/doku.php?id=en:public:wlan:linux)

WPA Enterprise (PEAP)
```bash
nmcli connection show
nmcli dev wifi list
nmcli connection add type wifi ifname wlan0 con-name OTH-Students ssid "OTH-Students" # first add profile
nmcli connection modify OTH-Students \
  wifi-sec.key-mgmt wpa-eap \
  802-1x.eap peap \
  802-1x.identity "abc12345" \
  802-1x.phase2-auth mschapv2 \
  802-1x.password "mypassword"
nmcli connection up OTH-Students
```

## VPN

```bash
sudo vim /etc/openfortivpn/config
sudo openfortivpn
```
[Link](https://rzwww.oth-regensburg.de/supportwiki/doku.php?id=public:netz:vpn_forticlient_linux)

```ini
host = sslvpn.oth-regensburg.de
realm = vpn-default
port = 443
trusted-cert = 2d275478298edc3577bd3ca1e22a898b916e149d677aea8f507758424fa47603
username = abc12345
password = meinpasswort
```


## EAP: Extensible Authentication Protocol

## WPA: Wi-Fi Protected Access
* WPA/WPA2-Enterprise
* WPA/WPA2-Personal

  * TLS = Certificate-based authentication
  * PWD = Password-based Authentication and Key Exchange
  * EAP-TTLS = Creates a TLS tunnel first, then performs authentication inside
  
  * EAP-PEAP  = Very similar to EAP-TTLS

