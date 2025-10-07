
```bash
lsblk
sudo (u)mount /dev/sd"$partition" /mnt # /mnt is typicall mount point

udisksctl mount -b /dev/sd"$partition" # Without sudo

```

* Use `dev` = device
* Do not forget umount.

```txt
|sda # do not touch
|__ sda1 # partition
```
###
`Trash-1000` -- Trash box of user id 1000. 
`'System Volume Information'` -- Windows generate this.

### USBを差し込んだ瞬間に「ウイルスが仕込まれてシステムが乗っ取られる」みたいな演出

1. 古いWindowsの「AutoRun / AutoPlay」機能

2. BadUSB攻撃
「キーボードのフリ」をして、差し込まれた瞬間にPCへ自動的にコマンドを入力
