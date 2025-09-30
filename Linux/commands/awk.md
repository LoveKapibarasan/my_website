# awk(Aho, Weinberger, Kernighan)


```bash
awk 'pattern { action }' file
```

* -F → Field separator(`-F'\t'`,`-F,`,`-F:`)

```bash
awk -F: '{print $1}' /etc/passwd # get all users
$(awk -F: '$3 >= 1000 && $1 != "nobody" {print $1}' /etc/passwd); # get normal users
```

* `$0` -- entire line
* `$1, $2, ...`-- field


## IFS

IFS (Internal Field Separator)
```bash
while IFS=, read -r x y; do
```
