

**Dosfsttools**
DOS/FAT file system
```bash
sudo mkfs.xxx # create xxx partition
sudo mkfs.ext4 "$DEV"
sudo mkfs.ntfs -f "$DEV"
sudo mkfs.exfat "$DEV"
sudo mkfs.vfat -F 32 "$DEV"
# -F: FAT Type
sudo mkfs.btrfs "$DEV"
# -f: force


fsck.fat # recover
```
**mtools**
* Access MS-DOS / FAT file system like Windows.

### File System

1. ex4: 
    * Linux Standard
    * 4KB block
    * inode(meta data), directory,  data
        **inode** = info node
        ```
        filename
        owner
        createdAt
        data range, address(Pointer)
        file size
        ```
        **Directory**
        ```
        inode number
        file name
        file type
        ```
2. btrfs: 
    * Binary Tree
    * Compress
    * Snap shot(Diff)
    ```bash
    # take a snapshot
    # $source $dest
    sudo btrfs subvolume snapshot / /.snapshots/snap-$(date +%Y%m%d-%H%M%S)
    # List
    sudo btrfs subvolume list /
    # delete
    sudo btrfs subvolume delete /.snapshots/snap-WWWWXXYY-zzzzz
    # delete current volume
    sudo btrfs subvolume delete /
    # Restore
    sudo btrfs subvolume snapshot /.snapshots/snap-WWWWXXYY-zzzzz /
    ```

3. fat32(File allocation table)
    * Simple
    * (boot sector, FAT, root, data)
    **FAT**
    * Relation or pass of clusters
    **Root**
    * filename + start of cluster
    **Cluster**
    * Unit of data(Normally 4KB)

4. NTFS (New Technology File System)
    * Windows and Linux

```bash
# Check
# df = Disk Free
df -T
# -T = type
```
`Filesystem     Type      Size  Used Avail Use% Mounted on`
* `Avail`: Available
