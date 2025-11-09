## Conditions

* `true`, `false`
* `!` = negate(Do not forget space after `!`)
* `[ "$condition" ]` -- When variable expansion happens, use `[]`.

* `[ -n "$VAR" ]` = if var is empty string, true
* `[ -z "$VAR" ]` = if var is not empty string, true
  * NG: `[ -z $(echo) ]`
  * OK: `[ -z "$(echo)" ]`

* `[ "$a" = "$b" ]` = compare between strings
  > `"$var"` Do not forget `""`
* `[ "$a" -eq "$b" ]` = compare between numbers

*  `[ -d "$name" ]` = If name is directory and exists, true.
* `[ -f "$name" ]` = file
* `[ -s "$name" ]` = `-f` and not empty
* `[ -e "$name" ]` = name exists?
* `[ -ne "$name" ]` = name not exists?
* need space after `[` and before `]`.

## And Or

`||` = or

## for

```bash
for <var> in <list_1> <list_2>; do
    <commands>
done

# /*
for file in "$file_path"/*; do
    if [ -f "$file" ]; then
        # do sth with file
    fi
done
```

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
    ;; # end marker
  pattern2|pattern3)
    # commands for multiple matches
    ;;
  ${v_expansion})
    # commands
    ;;
  *) # *) : default
    # default commands (if no patterns matched)
    ;;
esac # reverse of case
```

* No AND condition.
* `|` = OR
* `*<sth>`= wild card

### Notes
* Type: `for …` → press Enter
→ Bash goes into **waiting for continuation**, so the prompt changes to `>`
