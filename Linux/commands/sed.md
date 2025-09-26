## SED (Stream EDitor)

* `sed -i 's/<xxx>/<yyy>/' <file_path>` # replace `<xxx>` with `<yyy>`

  * `sed` = Stream EDitor
  * `-i` = in place, overwrite file
  * `s/^#\?` = match comment line (`#`)
  * `s/^#\?...` = match comment line (optional `#`)

* `sed '/<xxx>/d'`

  * Delete `<xxx>`

* `"` is escaped with `\"`

---

### Recursive Replacement

1. Using `for` loop:

```bash
for f in $(find <dir> -type f -name "*.<extension>"); do
      sed -i 's/<xxx>/<yyy>/g' "$f"
      # /g = global replacement
      # like Vim's %s

done
```

2. Using `find -exec`:

```bash
find <dir> -type f -name "*.<extension>" -exec sed -i 's/<xxx>/<yyy>/g' {} +
```

---

### Backup Before Replace

Since `sed -i` overwrites directly (no built-in check function), use a backup:

```bash
sed -i.bak 's/<xxx>/<yyy>/g' <file>
```

Equivalent to:

```bash
cp -r <file> <file>.bak
```

---

### Alternative: Vim

```bash
vim -c '%s/<old>/<new>/gc' <path>
```

* `-c` = execute command
* `c` = confirm each replacement interactively

---

### Notes

* Normal `sed` without `/g` = replaces only the **first match per line**
* **Space** = normal space or `( )*` in regex
* **TAB** = `[[:space:]]` or `$'\t'`
* **Anything (Alles)** = `.*` (matches everything)
