# FFMPEG
FFmpeg = "Fast Forward(早送り) MPEG"
mpeg = MPEG (Moving Picture Experts Group) - 動画圧縮の標準規格

```bash
ffmpeg -grobal_option -input_option -i "$input" -output_options "§output_file"
```


### -c, -codec
Codec = Coder + Decoder
Technology to compress or decode data.


```bash
# m4o(MPEG-4 Audio) -> mp3
ffmpeg -i input.m4a -codec:a libmp3lame -qscale:a 2 output.mp3
# mp4 -> mp3
ffmpeg -i "$file.mp4" -acodec libmp3lame -ab 256k "$file.mp3"
```

* MP3 = Audio Format
* MP4 = Video Format




## Memo

**MP4** can contain computer virus.(in meta information)
