* Select = copy
* Middle Click = paste
* exit

### system clipboard copy
```bash
vim ~/.Xresources
#  Add "XTerm*selectToClipboard: true"
xrdb ~/.Xresources
```




### fcitx5 for x11
* Add ~/.xinitrc, ~/.xprofile /etc/environment(no export) 

```bash
export GTK_IM_MODULE=fcitx(5)
export QT_IM_MODULE=fcitx
export XMODIFIERS=@im=fcit
```