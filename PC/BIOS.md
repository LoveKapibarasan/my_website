BIOS -> EFI -> UEFI

# UEFI(Unified Extensible Firmware Interface)

* (Open Source Implementation)[https://github.com/tianocore/edk2] 

0. Enpand program onto RAM.

1. POST（Power On Self Test）
* Peripherals detection, initialization and settings

2. OS loader
* Based on designed priority
* Read GPT or MBR section


```txt
/boot/
  ├── vmlinuz          （Linux kernal）
  ├── initrd.img       （initial disk）
  ├── config-x.xx.x    （kernel setting）
  └── grub/            （bootloader）
```
* Read `/boot/grub/grub.cfg`: Boot menu
* Read `/boot/vmlinuz-linux`
* Read `/boot/initramfs-linux.img`
* `/boot/EFI/Linux/BOOTX64.efi`: 
    * EFI bootloader
    * X64 = x86_64
    * Binary file.

**GRUB = GRand Unified Bootloader**

**Secure Boot**
* Only software with a trusted digital signature is allowed to run.


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
