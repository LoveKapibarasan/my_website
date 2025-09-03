
```bash
# m4o(MPEG-4 Audio) -> mp3
ffmpeg -i input.m4a -codec:a libmp3lame -qscale:a 2 output.mp3
```