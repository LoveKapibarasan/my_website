## systemd
init + daemon

### commands
```bash
# ctl = control
sudo systemctl start <service_name>
sudo systemctl stop <service_name>
sudo systemctl enable <service_name>
sudo systemctl disable <service_name>
sudo systemctl mask <service_name>
systemctl is-active --quiet <service_name>
# --quiet = only output exit code
sudo journalctl -u <service_name> -f 
# -f = real time
```
