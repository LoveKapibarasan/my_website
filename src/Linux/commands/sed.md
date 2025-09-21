## SED
* `sed 's/a/d'`
    * d = delete
* `sed -i 's/a/a'` # a -> b
    * sed = Stream EDitor
    * -i = in place, overwrite file
    * s/^#\? = match comment line(#)


**Space** = normal space or `(normal_space)*`(REGEX)

**TAB** = `[[:space:]]` ,`$'\t'`


**Anything=Alles**: `.*`

### Notes

* Normal sed = one time replace