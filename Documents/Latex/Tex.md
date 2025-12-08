# Tex
by Donald Knuth.

* wrritten in `WEB`

[URL_1](https://github.com/TeX-Live/texlive-source)


```bash
# compile
pdflatex "$document".tex

# Pre-launch configuration files
sudo fmtutil-sys --all
```


[ArchLinux](https://wiki.archlinux.org/title/TeX_Live)

**Config:**
`/etc/texmf/web2c/fmtutil.cnf` or `~/.texlive/texmf-config/web2c/fmtutil.cnf`

`/etc/texmf/web2c/texmf.cnf`


### Perl(パール)
* good for Regex
* programming language
* Python like but older
* "There's more than one way to do it"

### PDFLatex

`?`: Error prompt
    * `x` + `Enter`: exit
    * `i` + `Enter`: fix

**PNG**
```bash
convert -density "$n" input.pdf -quality 100 output.png # old
magick -density 300 document.pdf -quality 100 output.png # new
# dpi 300
# -quality 100: 100%
```

