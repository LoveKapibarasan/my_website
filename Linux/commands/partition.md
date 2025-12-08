### Show

`lsblk`
    * show block device list
    * `-f` -- with file system information.
`gdisk` -- for GPD partition
    p : Print the partition table (show current partitions)

    n : Create a new partition (new)

    d : Delete a partition (delete)

    w : Write changes to disk and exit (save and quit)

    q : Quit without saving changes

    i : Show detailed information about a partition (info)

    t : Change a partition’s type code (type)

`sgdisk` -- CLI tool for GPD partition
```bash
sgdisk [options] "$device"
```
* Information

    -p : Print the partition table

    -i "$N" : Show detailed information about partition number N

* Create / Delete

    -n <partnum:start:end> : Create a new partition
        * end = 0: entire
        * can use relative(+,-) expressions
    
    -t "$N":partition_code

    -d "$N" : Delete partition number N

* Disk Operations

    -g : Generate a new random disk GUID

    -Z(=--zap-all) : Zap (erase) the disk completely, wiping GPT/MBR data

    -o : Create a new, empty GPT

* Backup / Restore
    -b <file> : Backup the GPT to a file

`cgdisk` -- another sibling of gdisk (GPT partitioning tool).
    * New → Create a new partition
    * Delete → Delete the selected partition
    * Type → Change the partition type code
    * Name → Set the partition label (human-readable name)
    * Quit → Exit without saving
    * Write → Save the partition table to disk

`cfgdisk`:
`fdisk`: MBR format
`sudo fdisk /dev/sdX`
    * `n`: create a new partition
        `p`: primary
    * `d`:  delete a partition
    * `-l`: show info
    * `w`: write out

`lsusb` -- list usb devices


### dd
* dd: "Disk Dump" or "Data Duplication"
```bash
sudo dd if="$INPUT" of="$OUTPUT_DEVICE" [Option]
```
**IF**
* if=/dev/zero: 0
* if=/dev/random

**bs**
* `bs=4M`, `bs=1024`: block size
    * b, K, M, G
* `count=100`: the number of blocks
**Others**
* `status=progress`: Show log

* `conv=fsync` is safer than`oflag=direct`

**Partition code**
8300: Linux file system
8200: swap
ef00: EFI

### Partition
**dev = device**

`/dev/sdX`
* SCSI/SATA/USB strage
* `X` = a,b,c,..
* `sdX` has partition `sdXn`

`nvmeXnYpZ`
* NVMe (Non-Volatile Memory Express)
    * `X` = device number
    * `Y` = name space
    * `Z` = Partition number 
