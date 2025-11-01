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
sgdisk [options] <device>
```
* Information

    -p : Print the partition table

    -i "$N" : Show detailed information about partition number N

* Create / Delete

    -n <partnum:start:end> : Create a new partition
        * start, end can be +xxxM,GB
        * end = 0: Entire disk

    -d "$N" : Delete partition number N

* Disk Operations

    -g : Generate a new random disk GUID

    -Z = --zap-all : Zap (erase) the disk completely, wiping GPT/MBR data

    -o : Create a new, empty GPT

    -t "$partition":type_number

* Backup / Restore
    -b "$file" : Backup the GPT to a file

`cgdisk` -- another sibling of gdisk (GPT partitioning tool).
    
    New → Create a new partition

    Delete → Delete the selected partition

    Type → Change the partition type code

    Name → Set the partition label (human-readable name)

    Quit → Exit without saving

    Write → Save the partition table to disk


`fdisk`
    
    `-n`: create a new partition
        `p`: primary
    `w`: write out

`lsusb` -- list usb devices

`partprobe`(partition probe):
```bash
# reload
sudo partprobe /dev/sdX
```



**Partitiontype code**
`8300`: root
`8200`: Swap
`ef00`: EFI system

**Sector**
* First:start, Last: end. can use relative(+,-) location.


### dd
dd: "Disk Dump" or "Data Duplication"
```bash
dd if=INPUT of=OUTPUT [Option]
```
* if=/dev/zero: 0
* if=/dev/random 
* `bs=4M`, `bs=1024`: block size
    * b, K, M, G
* `count=100`: the number of blocks
* `status=progress`: Show log
