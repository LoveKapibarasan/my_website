## systemd
init + daemon

### commands
```bash
# ctl = control
sudo systemctl start "$service_name
sudo systemctl stop "$service_name
sudo systemctl enable "$service_name
# --now = start + enable
sudo systemctl disable "$service_name
sudo systemctl mask "$service_name
systemctl is-active --quiet "$service_name
# --quiet = only output exit code
sudo journalctl -u "$service_name" -f 
# -f = real time

# List running services
sudo systemctl list-units --type=service --state=running

```


### Disable
* Delete symlink from `/etc/systemd/system/<target>.wants/`.

* Can run `systemctl start "$service_unit"`

### Mask
* Create symlink to `/dev/null`

* Cannot run `systemctl start "$serviunit"`.