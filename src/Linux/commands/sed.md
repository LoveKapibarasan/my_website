## SED(Stream EDitor)
* `sed -i 's/<xxx>/<yyy>' <file_path>` # a -> b
    * sed = Stream EDitor
    * -i = in place, overwrite file
    * s/^#\?… = match comment line(#)

    * **Recursive**
    1. for
    ```bash
    for f in $(find <dir> -type f -name "*.<extension>"); do
          sed -i 's/<xxx>/<yyy>/g' "$f"
          # /g = Vim
    done
    ```
    2. 
    ```bash
    `find <dir> -type f -name "*.<extension>" -exec sed -i 's/<xxx>/<yyy>/g' {} +`
    ```

> No check function

```bash
sed -i.bak 's/…' xxx
```
==
```bash
cp -r xxx xxx.bak
```

**Alternative**

1. Vim
```bash
vim -c '%s/<old>/<new>/gc' <path>
```
* -c or c = confirm