# Non-UnixOS
* HaikuOS

# Unix
-> Linux, macOS, BSD
* POSIX（Portable Operating System Interface）protocol

### Podman, Podman-compose
* Linux OS build tool.
* Rootless by default.
* quite similar to docker

**User Namespace**
* Map container user id to user id.
* `/etc/passwd`(Host、UID = 1000) <- `/etc/subuid`(Container, Poduser UID = 0)

* Config: `/etc/containers/storage.conf`, `~/.config/containers/storage.conf`(Rootless)
```bash

podman pull ubuntu:latest # Pull Image
podman run -it ubuntu bash # run container
podman ps -a # = docker ps
# Stop/start/remove
podman stop "$container"
podman start "$container"
podman rm "$container"

# View logs
podman logs "$container"

# Build image
podman build -t myimage:latest .

podman system migrate
podman system reset # !! delete all podman data
```

### Oracle Virtual Machine
* Hypervisor only
* Desktop development (easy GUI)

### qemu(= Quick Emulator)
* Machine emulator, hypervisor.
* Emulator + hypervisor
* Server/cloud environments (KVM acceleration)
```bash
# create a virtual disk
qemu-img create -f qcow2 "$mydisk".qcow2 20G
# Run with ISO
qemu-system-x86_64 -m 2G -smp 2 \
  -drive file="$mydisk".qcow2,format=qcow2 \
  -cdrom "$ubuntu.iso" \
  -enable-kvm
# Options
# -m nG              : RAM (nGB)
# -smp n             : CPUs (n cores)
# -enable-kvm        : Use KVM acceleration (Linux)
# -display gtk       : GUI (gtk/sdl/vnc/none)
# -nographic         : No GUI (serial console only)
# -net nic           : Add network interface
# -net user          : User-mode networking (NAT)
# -cdrom file.iso    : Mount ISO
# -drive file=disk   : Attach disk
# -snapshot          : Don't modify disk (changes lost on exit)
```

**Hackintosh**
* Install MacOS on non mac PC


* Everything is file

**Microkernel Architecture**
e.g. RedoxOS, minix 3

**Monolith Architecture**
OS does network management or file management..
e.g. Linux


### LiveUSB
* boot on Memory.

### ISO( International Organization for Standardization)

* ISO 9660

```bash
dd if="$/dev/dvd" of="$output".iso
```
### IMG
* Compressed disk
* more general format


### OS Prober

* Detect another OS and add to GRUB menu.

```bash
sudo os-prober
# Found Ubuntu 22.04 LTS on /dev/sdb2
sudo sed -i 's/^#\?GRUB_DISABLE_OS_PROBER.*/GRUB_DISABLE_OS_PROBER=false/' /etc/default/grub
grep GRUB_DISABLE_OS_PROBER /etc/default/grub
sudo grub-mkconfig -o /boot/grub/grub.cfg
```
