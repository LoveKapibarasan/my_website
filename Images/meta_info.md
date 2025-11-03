
**exiftools**

```bash
# Ubuntu
sudo apt install libimage-exiftool-perl

# Check
exiftool "$file"

exiftool -all= -o cleaned_%f.%e "$file"
```