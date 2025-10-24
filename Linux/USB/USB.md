
```bash
lsblk
sudo (u)mount /dev/sd"$p" /mnt # /mnt is typicall mount point
sudo eject /dev/sd"$p" # for CD/DVD physically remove
udisksctl mount -b /dev/sd"$p" # Without sudo
udisksctl unmount -b /dev/sd"$p"
udisksctl power-off -b /dev/sd"$p"
# -b = block device, -p = path like /media/user…
# Package name: udiskie
```

* Use `dev` = device
* Do not forget umount.

```txt
|sda # do not touch
|__ sda1 # partition
```

**Block Device**
Read and Write per block.
can build file system.

**Loopback Device**
Regard file as a block device.


###
`Trash-1000` -- Trash box of user id 1000. 
`'System Volume Information'` -- Windows generate this.

### USBを差し込んだ瞬間に「ウイルスが仕込まれてシステムが乗っ取られる」みたいな演出

1. 古いWindowsの「AutoRun / AutoPlay」機能

2. BadUSB攻撃
「キーボードのフリ」をして、差し込まれた瞬間にPCへ自動的にコマンドを入力


## Ventoy
```bash
cd ~/Downloads
# Check https://github.com/ventoy/Ventoy/releases
wget https://github.com/ventoy/Ventoy/releases/download/v1.0.97/ventoy-1.0.97-linux.tar.gz -O ventoy.tar.gz
tar xzf ventoy.tar.gz
cd ventoy-1.0.97
sudo ./Ventoy2Disk.sh -i /dev/sdX
sudo mount /dev/sdX1 /mnt
cp ~/path/to/your/distro.iso /mnt/
sudo umount /mnt
```
**MBR style (Master Boot Record)**
a traditional partitioning scheme for hard drives and USB drives.
