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

    -i <N> : Show detailed information about partition number N

* Create / Delete

    -n <partnum:start:end> : Create a new partition

    -d <N> : Delete partition number N

* Disk Operations

    -g : Generate a new random disk GUID

    -Z : Zap (erase) the disk completely, wiping GPT/MBR data

    -o : Create a new, empty GPT

* Backup / Restore
    -b <file> : Backup the GPT to a file

`cgdisk` -- another sibling of gdisk (GPT partitioning tool).
    
    New → Create a new partition

    Delete → Delete the selected partition

    Type → Change the partition type code

    Name → Set the partition label (human-readable name)

    Quit → Exit without saving

    Write → Save the partition table to disk

`lsusb` -- list usb devices
