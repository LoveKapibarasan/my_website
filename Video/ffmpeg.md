# FFMPEG
FFmpeg = "Fast Forward(早送り) MPEG"
mpeg = MPEG (Moving Picture Experts Group) - 動画圧縮の標準規格

```bash
ffmpeg -grobal_option -input_option -i "$input" -output_options "§output_file"
```


### -c, -codec
Codec = Coder + Decoder
Technology to compress or decode data.

* `-c copy`: stream copy


```bash
# m4o(MPEG-4 Audio) -> mp3
ffmpeg -i input.m4a -codec:a libmp3lame -qscale:a 2 output.mp3
# mp4 -> mp3
ffmpeg -i "$file.mp4" -acodec libmp3lame -ab 256k "$file.mp3"
```
* `-i`: input

* MP3 = Audio Format
* MP4 = Video Format


### Combine mp4 based on list.txt

```bash
ffmpeg -f concat -safe 0 -i list.txt -c copy output.mp4
```

* `-safe 0`: default 1(disable external reference or absolute path)


**List.txt**
```txt
file 'tmp1.mp4'
file 'tmp2.mp4'
...
file 'tmp10.mp4'
```
* `file 'path' `

### Sound Up

```bash
ffmpeg -i input.mp4 -c:v copy -c:a aac -b:a 192k -filter:a "volume=2" output.mp4
ffmpeg -i input.mp4 -c:v copy -c:a aac -b:a 192k -filter:a "volume=3dB" output.mp4
```

## Memo

**MP4** can contain computer virus.(in meta information)
