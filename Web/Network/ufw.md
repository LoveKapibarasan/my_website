# ufw (Uncomplicated Firewall)

* Gatekeeper
* Wrapper of `iptables`.

```bash
# You need sudo.

ufw default deny incoming  
ufw default allow outgoing
# Only open limited ports
ufw allow from "$ipv4" to any port "$n" proto "$protocol"
# Allow
ufw allow 22/tcp   
ufw allow 80/tcp 
ufw allow 443/tcp 
# Delete
sudo ufw delete allow 22/tcp

# Others
sudo ufw reset
ufw enable
ufw disable
ufw status
```
