
```bash

sudo apt install v4l2loopback-dkms v4l-utils ffmpeg

# Create a dummy camera
sudo modprobe v4l2loopback devices=1 video_nr=10 card_label="DummyCamera"
ls -l /dev/video*

ffmpeg -re -loop 1 -i idcard.jpg \
    -vf scale=1280:720,format=yuv420p \
    -f v4l2 /dev/video10
```