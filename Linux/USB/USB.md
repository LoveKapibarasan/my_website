### Basic Commands

**Mount**
```bash
lsblk
sudo (u)mount /dev/sd"$p" /mnt # /mnt is typicall mount point
# Bind mount
# use Home OS /dev on /mnt/dev
sudo mount --bind /dev /mnt/dev
sudo eject /dev/sd"$p" # for CD/DVD, physically remove
```
**Udiskie**
```bash
udisksctl mount -b /dev/sd"$p" # Without sudo
udisksctl unmount -b /dev/sd"$p"
udisksctl power-off -b /dev/sd"$p"
# -b = block device, -p = path like /media/user…
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

**cpu**
```bash
lscpu
```



### Memo
`Trash-1000` -- Trash box of user id 1000. 
`'System Volume Information'` -- Windows generate this.

### USBを差し込んだ瞬間に「ウイルスが仕込まれてシステムが乗っ取られる」みたいな演出

1. 古いWindowsの「AutoRun / AutoPlay」機能

2. BadUSB攻撃
「キーボードのフリ」をして、差し込まれた瞬間にPCへ自動的にコマンドを入力


## Ventoy

**get tar file from git repository**
```bash
cd ~/Downloads
version=
# Check https://github.com/ventoy/Ventoy/releases
wget https://github.com/ventoy/Ventoy/releases/download/v${version}/ventoy-${version}-linux.tar.gz -O ventoy.tar.gz
tar xzf *.tar.gz
cd ventoy*/
```

**Run a script**
```bash
export disk=/dev/sda
sudo ./Ventoy2Disk.sh -i $disk
udisksctl mount -b $partition
cp "$distro.iso" "$mnt_path"
udisksctl unmount -b $partition
```
> You can not change partition layout.

**Without LiveUSB**

```bash
sudo mkdir -p /mnt/newroot/boot
sudo mount /dev/sda1 /mnt/newroot
sudo mount /dev/sda1 /mnt/newroot/boot
sudo debootstrap --arch amd64 jammy /mnt/newroot http://archive.ubuntu.com/ubuntu/
sudo genfstab -U /mnt/newroot >> /mnt/newroot/etc/fstab
```
Ubuntu Codename[Wiki](https://en.wikipedia.org/wiki/Ubuntu_version_history)
* `jummy`: 22
* `Questing Quokka`:25
* `--arch amd64`: x86-64
