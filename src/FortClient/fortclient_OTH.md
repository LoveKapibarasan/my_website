## Wifi

[Link](https://rzwww.oth-regensburg.de/supportwiki/doku.php?id=en:public:wlan:linux)
```bash
nmcli dev wifi connect "secure.hs-regensburg.de" \
  802-1x.eap peap \
  802-1x.phase2-auth mschapv2 \
  802-1x.identity "abc12345" \
  802-1x.password "mypassword"
```

## VPN

```bash
sudo vim /etc/openfortivpn/config
sudo openfortivpn
```
[Link](https://rzwww.oth-regensburg.de/supportwiki/doku.php?id=public:netz:vpn_forticlient_linux)

```ini
host = sslvpn.oth-regensburg.de
port = 443
realm = vpn-default
trusted-cert = 364fb4fa107e591626b3919f0e7f8169e9d2097974f3e3d55e56c7c756a1f94a
username = abc12345
password = meinpasswort
```