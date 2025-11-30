
## VPN


## DDNS( Dynamic DNS)

## Router

## Ngrok

* Get public URL(like https://f3085964c5f2.ngrok.app) from local PC.

## Cloudflare Tunnel

```bash
cloudflared tunnel run --url dns://localhost:53
```

### Check
[Get Global IP](https://www.cman.jp/network/support/go_access.cgi)
[Gte Global IP](https://ipinfo.io/)

compare with 
```bash
curl ifconfig.me
ipconfig # Windows
```