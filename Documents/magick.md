
```bash
magick 
-density 150 "$file.pdf" \ # default 72. 150 is recommended for printing 
    -colorspace Gray \
    -fuzz 15% \ # treat similar(15% range) color as the same 
  -brightness-contrast 40x-40 \ # blightness x \pm contrast
  -threshold 85%\ # Binary classification with black or white
  "$output.pdf"
```
