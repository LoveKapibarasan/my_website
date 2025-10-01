
```bash
# m4o(MPEG-4 Audio) -> mp3
ffmpeg -i input.m4a -codec:a libmp3lame -qscale:a 2 output.mp3
```

```bash

v4l2-ctl --list-devices
ls /dev/video*

ffmpeg -f v4l2 -framerate $n -i /dev/video${x} ${output}.mp4
```



**MP4** can contain computer virus.(in meta information)
