
```bash

sudo apt install v4l2loopback-dkms v4l-utils ffmpeg
sudo pacman -S v4l-utils ffmpeg
sudo pacman -S dkms linux-headers
yay -S v4l2loopback-dkms
```
```bash
ffmpeg -re -loop 1 -i "$filename" \
    -vf scale=1280:720,format=yuv420p \
    -f v4l2 /dev/video10
#  -re = Real-time Encoding
# -loop 1 = infinete roop
# -vf = Video Filter
# color format:  YUV 4:2:0
```

### Video4Linux2 (V4L2)

* Control Video4Linux2 (V4L2) devices.
```bash
v4l2-ctl --list-devices
v4l2-ctl -d "/dev/video$n" --all # detailed information
v4l2-ctl -d "/dev/video$n" --list-formats
```


**Controls:**
```bash
v4l2-ctl --set-ctrl=brightness=128
v4l2-ctl --set-ctrl=contrast=32
v4l2-ctl --set-ctrl=saturation=64
```

### `/dev/videon` (n=0,1,2...) 

* Linux video device file.

### modprobe 

* Load or unload kernel modules or drivers Linux device kernel.

```bash
sudo modprobe "$module" # load

sudo modprobe -r "$module" # remove

sudo modprobe -rf  "$module"  # purge
```

### Virtual Camera

* v4l2loopback
```bash
sudo modprobe v4l2loopback \
  devices=1 \ # the number of camera to create 
  video_nr=10 \ #  N of /dev/videoN
  card_label="$label" 
```
