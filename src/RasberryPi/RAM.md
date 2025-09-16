## RAM

* sometimes increase by cache.

### OOM-Killer（Out Of Memory Killer）

**Earlyoom**
config:`/etc/default/earlyoom`
```bash
sudo apt install earlyoom
systemctl status earlyoom
# default 10%
```

### Increase Swap
It dameges SSD because SSD has write limit times.

```bash
# stop swap 
sudo dphys-swapfile swapoff

# Edit config
sudo vim /etc/dphys-swapfile

# CONF_SWAPSIZE=2048(2GB)
```

### ZRAM

Compress RAM content.
(×1.5〜2)
```bash
sudo apt install zram-tools
```