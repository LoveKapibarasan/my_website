# ufw (Uncomplicated Firewall)

* Gatekeeper
* Wrapper of `iptables`.

```bash
ufw default deny incoming  
ufw default allow outgoing
# Only open limited ports

ufw allow 22/tcp   
ufw allow 80/tcp 
ufw allow 443/tcp 

ufw enable

ufw status
```
