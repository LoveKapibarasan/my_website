# echo
* `echo "$string" > "$filename` # echo = echolocation

```bash
# -n: No line change
echo -n "Hello"

# -e: escape sequence
echo -e "Hello\nWorld"  # line change
echo -e "Hello\tWorld"  # \tab
echo -e "\033[31mRed\033[0m"  # color

# -E: default. No escape sequence.
echo -E "Hello\nWorld"  # \n
```

**Printf**

```bash
printf printf 'format_string like "%s","%s"' "$xxx" "yyy")
```

* `%s`: String
