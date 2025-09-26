### Captive Portal Authentication

A **captive portal** is the login or acceptance page that appears when connecting to public Wi-Fi in places like airports, hotels, and cafes. It prevents users from accessing the internet until they have been authenticated or have accepted the terms of use.

**Redirect to Portal**

   * The gateway forces the browser to open a login page (the captive portal) if you try to access a http page.

**Image:**
```
[Client] -> [gateway]
1. -http->
2. <- 302(Moved Temporarily) Response &URL -
        HTTP/1.1 302 Found
        Location: http://portal.example.com/login
        Content-Type: text/html
3. Access the URL.
```

1. **DNS Hijacking**
```bash
dig example.com
# and if gateway ip is returned.
```

2. **HTTP Redirect**
```bash
curl -v http://example.com/ 
```

```bash
nmcli dev show wlan<n>
```
* IP4(6).ADDRESS[1] → My IP (DHCP)
* IP4(6).GATEWAY → Gateway IP
* IP4(6).DNS[1] → DNS server（== gateway IP）



---
