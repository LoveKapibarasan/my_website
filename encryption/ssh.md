## SSH

**SSH (Secure Shell)** is a network protocol that allows you to securely connect to a remote computer over an insecure network.

---

```bash
ssh "${user}@${ip}
# -i "$Identity_file"
# -p "port_number"
# -v, -vv, -vvv = Debug log
# -f = background
```

* **Remote Login**
  Access a remote server and run commands.
  Example: `ssh user@server.example.com`

* **File Transfer**
  Use tools like `scp` (secure copy) or `sftp` to transfer files securely.

* **Port Forwarding**
  Create an encrypted tunnel between local and remote networks.
  → Can even be used similarly to a VPN.


