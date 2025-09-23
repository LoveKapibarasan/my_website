

## for

```bash
for <var> in <list_1> <list_2>; do
    <commands>
done
```

* `for <file> in *` and  `if [ -f "$file" ]; then`
* var should be used as `"$var"`

## If Else

```bash
if [ <condition> ]; then
    <commands>
else
    <commands>
fi
```

## While
```bash
while [ <condition> ]; do
    <commands>
done
```

## Switch
```bash
case "$variable" in
  pattern1)
    # commands
    ;;
  pattern2|pattern3)
    # commands for multiple matches
    ;;
  pattern4)
    # commands
    ;;
  *)
    # default commands (if no patterns matched)
    ;;
esac
```

### Notes
* Type: `for …` → press Enter
→ Bash goes into **waiting for continuation**, so the prompt changes to `>`
