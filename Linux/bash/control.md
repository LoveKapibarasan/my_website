## Conditions
* `!` = negate(Do not forget space after `!`)
* `[ <condition> ]` -- When variable expansion happens

* `[ -n "$VAR" ]` = if var is empty string, true
* `[ -z "$VAR" ]` = if var is not empty string, true
  * NG: `[ -z $(echo) ]`
  * OK: `[ -z "$(echo)" ]`

* `[ "$a" = "$b" ]` = compare between strings
  > `"$var"` Do not forget `""`
* `[ "$a" -eq "$b" ]` = compare between numbers

*  `[ -d "$name" ]` = is name is directory, true.
* `[ -f "$name" ]` = file
* `[ -e "$name" ]` = name exists?
* `[ -ne "$name" ]` = name not exists?
* need space after [ and before ].

## And Or

`||` = or

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
elif
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
