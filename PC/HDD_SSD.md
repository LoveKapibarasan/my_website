## SSD Sizes (Form Factors)

1. 2.5-inch SATA SSD
* SATA I, II, III
* Connects with cables like an HDD (SATA data cable + power cable)
* Maximum speed is about **560 MB/s** (SATA III theoretical limit)
* Large and Cheap.
* Cable has backword compatibility

2. M.2 SSD Key M

* Card-type drive that plugs directly into the motherboard (looks like a stick of gum)
* Size is specified as “width 22mm × length xxmm”
* 2280 (22×80mm) is the most common
* 2242, 2260, 2210 also exist.

**Speed**
PCIe 3.0: 3,500MB/s 
PCIe 4.0: 7,000MB/s
PCIe 5.0: 10,000MB/s

3. M.2 Key E
for Wifi or Bluetooth slot.


### Add-in Card (AIC SSD)

* Installed in a PCIe slot like a graphics card

* Mainly used in high-performance servers or for ultra-fast storage; not very common in custom PCs

## Key Metrics (Things to Compare in Specs)

* Sequential Speed
    * Measured in MB/s
    * High-end PCIe 4.0 NVMe SSDs can reach around 7,000 MB/s

* Random Access Performance (IOPS)
    * 4K Random Read/Write performance

* Endurance

    * TBW (Total Bytes Written): Write durability

    * MTBF (Mean Time Between Failures): Reliability indicator

    * NAND Type

### Two connection standards:

* SATA( Serial Advanced Technology Attachment) (M.2 SATA)

* NVMe( = Non-Volatile Memory Express ) (PCIe connection) → Extremely fast. Around 3,500 MB/s with PCIe 3.0, and over 7,000 MB/s with PCIe 4.0

## Types
[Reference_1](https://milestone-of-se.nesuke.com/sv-basic/architecture/mbr-gpt/)

**MBR(Master Boot Record)** <-- Legacy BIOS
    * Sector 0:
        * Disk partition information
        * Boostrap
        * MBR partition table(64 Bytes):
            * Partition Identifier(File System)
            * 16 bytes per 1 partition
    * Max 2TB

**GPT = GUID Partition Table** <-- UEFI
* used for storage devices such as HDDs and SSDs.
     
    * Sector 0(top 512 byte): 
        * Backward compatibility = Abwärtskompatibilität = 後方互換性
        * ignored by UEFI
    * Sector 1(EFI PART, GPT partition table)
        * stores n partition information
        * Max n = 128 (Windows)
    * Max 18EB

### Bootloader
* Firmware that initializes hardware during startup and loads the operating system.

**BIOS (Basic Input/Output System)**: 

**UEFI (Unified Extensible Firmware Interface)**: 
A modern firmware interface.

### Strage Size

**Operating System alone** requires several GB to several dozen GB

    * Windows 11: needs 20GB or more just for installation

    * Lightweight Linux distros: anywhere from a few hundred MB to several GB

* **Applications** (browser, Office, games, etc.)

    * Each can take anywhere from hundreds of MB to several dozen GB

* **Games**

    * Modern titles typically require 50–150GB or more

* A single high-resolution photo (from a smartphone) can be around 2–5MB


### ROM(Read Only Memory)

* Nowadays Flash ROM is used for update
* Written in mother board in advance


### File System
ext4
Btrfs (B-tree FS) = snap shot,  compressing
NFS = file sharing
FAT32 = << 32GB Camera
exFAT = >> 32GB Camera

