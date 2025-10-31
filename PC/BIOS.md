BIOS -> EFI -> UEFI

# UEFI(Unified Extensible Firmware Interface)

* (Open Source Implementation)[https://github.com/tianocore/edk2] 

0. Enpand program onto RAM.

1. POST（Power On Self Test）
* Peripherals detection, initialization and settings

2. OS loader
* Based on designed priority.
* Read GPT or MBR section.

**OS does not have .EFI by default.**
**Do not delete .EFI**

```txt
/boot/EFI/name/
  ├── vmlinuz          （Linux kernal）
  ├── initrd.img       （initial disk）
  ├── config-x.xx.x    （kernel setting）
  └── grub/            （bootloader）
```
* Read `/boot/grub/grub.cfg` Boot menu.
* Read `/boot/vmlinuz-linux`
* Read `/boot/initramfs-linux.img`
* `/boot/EFI/Linux/BOOTX64.efi`: 
    * EFI bootloader
    * X64 = x86_64
    * Binary file.

### EFIbootmgr
* Define boot priority.
* Can not show boot list.
```bash
# Order
sudo efibootmgr -o 0000,0001,0002,0003
# Check EFI entries
sudo efibootmgr -v
# -v = verbose

# Add
sudo efibootmgr --create --disk /dev/"$device_name" --part partition number --label "label" --loader '\EFI\**.efi'

# Delete boot entry
sudo efibootmgr -B -b 0001
```

**Chroot to reeinstall GRUB**
```bash
sudo mount /dev/sda2 /mnt
sudo mount --bind /dev /mnt/dev
sudo mount --bind /proc /mnt/proc
sudo mount --bind /sys /mnt/sys
sudo mount /dev/sda1 /mnt/boot/efi # or sudo mount /dev/sda1 /mnt/boot
sudo chroot /mnt
# Do sth
exit
```
### GRUB = GRand Unified Bootloader
* `/boot/grub/`
    * locale, fonto. starfield, thema

  ```
  |/boot
  ├─ /EFI/xxxLinux/grubx64.efi
```
```bash
sudo pacman -S grub
```
* If two OS with GRUB exist, decide on BIOS menu of motherboard.
**Config:**`/etc/default/grub`
* `GRUB_TIMEOUT=5`
* `GRUB_DEFAULT=0`: Default OS
* `GRUB_DISABLE_OS_PROBER=false`: OS-prober. Find other bootable OS.
* `GRUB_DISABLE_SUBMENU=y`: Force direct boot
* Show GRUB menu and load kernel.

```bash
# Create /boot/EFI/grub/grubx64.efi
grub-install --target=x86_64-efi \
	--efi-directory=/boot \
	--bootloader-id="$name" 
```


```bash
ls -la /etc/grub.d/
# 00_header
# 10_linux
# 20_linux_xen
# 30_os-prober
# 40_custom
00_header        ← 
  ↓
10_linux        ← Detect Linux kernel
  ↓
30_os-prober    ← os-prober
  ↓
40_custom       ← Custom Entry
```
**`/boot/grub/grub.cfg`**
* Define menu entry structure.
* Do not edit.
```bash
sudo update-grub # Debian Ubuntu
# -o = output
sudo grub2-mkconfig -o /boot/grub2/grub.cfg # RedHat
sudo grub-mkconfig -o /boot/grub/grub.cfg # ArchLinux
```


* insmod fs =install module

**GRUB editor**

* `e`: Move line and enter e

```
   # Base, nth (e.g. hd0,gpt2 = /dev/sda2)
   set root='hd0,gpt2'
   insmod part_gpt
   insmod ext2
   search --no-floppy --fs-uuid ...
   linux /boot/vmlinuz-6.14.0-34-generic root=UUID=... ro quiet splash
   initrd /boot/initrd.img-6.14.0-34-generic
```
* `Ctrl + X`: exit

**Boot Entry**

1.
    ```bash
    sudo grub-mkconfig -o /dev/stdout
    ```
2. `menuentry 'xOS'{}` section in `/boot/grub/grub.cfg`

**Thema**
* GNOME custom thema
[URL](https://www.gnome-look.org/browse?cat=109&ord=latest)

```bash
sudo mv "$thema_folder" /boot/grub/themes/
echo "GRUB_THEME=/boot/grub/themes/grubtheme/theme.txt" | sudo tee -a /etc/default/grub
sudo update-grub
```

### rEFInd
* This has also `.efi`.(`/boot/efi/EFI/refind/`)
* Direct boot.
* Mac support.
```bash
sudo pacman -S refind
sudo refind-install --yes
# --yes = --noconfirm
```
* **Config**:
`/boot/refind_linux.conf`: Boot option for each entry
```ini
# 
# ro = read only
"Entry name(description)" ro root=/dev/sda1
"Entry name (Fallback)" ro root=/dev/sda1 initrd=/boot/initramfs-linux-fallback.img
```
`/etc/refind.d/refind.conf`
`/boot/EFI/refind/refind.conf`: Entry option from another disks
```ini
menuentry "Custom Linux Boot" {
  icon /EFI/refind/icons/os_linux.png
  volume "EFI" # 1. LABEL 2. 
  loader /vmlinuz-5.10.0 # 
  initrd /initrd.img-5.10.0
  options "root=/dev/sda1 ro quiet"
  submenuentry{}
  disabled
}
# other disk
menuentry "Ubuntu" {
    icon /EFI/refind/icons/os_ubuntu.png
    # 1.
    loader PART_UUID=xxxx:/EFI/ubuntu/grubx64.efi
    # 2.
    volume /dev/sda2
}
```

```ini
timeout 10          
textonly            # text mode
hideui bootscreen   # hide boot screen
resolution 1920 1080  # resolution

# custom thema
include themes/name/theme.conf
```

**Thema**
* [Minimal](https://github.com/EvanPurkhiser/rEFInd-minimal)

```bash
sudo mkdir -p /boot/EFI/refind/themes/rEFInd-minimal/
git clone git@github.com:evanpurkhiser/rEFInd-minimal.git
sudo rm  -rf rEFInd-minimal/.git
sudo mv rEFInd-minimal /boot/EFI/refind/themes/rEFInd-minimal/
echo  'include /boot/EFI/themes/rEFInd-minimal/theme.conf' | sudo tee -a include /boot/EFI/refind/refind.conf
grep 'include' /boot/EFI/refind/refind.conf
```

### OS-Prober
* No config?
1. **Chainload**: Load other OS's GRUB
```
menuentry 'Ubuntu (on /dev/sda2)' {
    insmod gzio
    ...
    chainloader +1
}
```
1. **DirectBoot**: Load kernel naively.
```
menuentry 'Ubuntu' {
    linux /boot/vmlinuz-...
    initrd /boot/initramfs-...
}
```

**Advanced Option**
```
Ubuntu (on /dev/sda2)
Ubuntu (on /dev/sda2) -- Safe graphics mode
Ubuntu (on /dev/sda2, with Linux 6.14.0-34-generic)
Advanced options for Ubuntu (on /dev/sda2)
```
2. `nomodeset`: Kernel does not control GPU.
4. Recovery mode or old kernel(it remains.)

**Secure Boot**
* Only software with a trusted digital signature is allowed to run.

**Initramfs**
* Initial RAM File System
```bash
update-initramfs -u -k all
# -u = update
# -k = kernel
```

## Update
Download bios file and copy to USB.
Enter BIOS menu and update.

## Enter BIOS
ASUS
* `<f2>` or `<delete>` key
* `<f4>` USB Boot
Lenovo
* `<f1>`  
* `<f12>` select boot device
HP
`<f10>` or `<esc>` key


**Advanced Setting**
Advanced Mode -> APM Configuration -> **Auto Power On**
* Power On By RTC（RTC Alarm Power On）
* Power On By PCI-E / Wake on LAN


### CSM (Compatibility Support Module)     
* Use BIOS(Legacy mode) on UEFi environment.
