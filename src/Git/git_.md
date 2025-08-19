## gitignore
.gitignore tells Git which files or directories it should ignore and not track.
1, dist/, build/
2.IDE/editor settings(.vscode/, .idea/) 
3. Temporary, log, local, env

* Comment = #
* \*, \*\*

## gitattribute
`.gitattributes` controls how tracked files are treated—not whether they’re tracked, but how Git should handle them.

| Purpose              | Example                                     | What it does                                        |
| -------------------- | ------------------------------------------- | --------------------------------------------------- |
| Line-ending handling | `* text=auto`                               | Automatically handle LF/CRLF differences between OS |
| Disable auto-merge   | `*.lock -merge`                             | Prevent Git from trying to auto-merge certain files |
| Use Git LFS          | `*.psd filter=lfs diff=lfs merge=lfs -text` | Store large files via Git Large File Storage        |
| Custom diff driver   | `*.md diff=markdown`                        | Use better diff coloring for Markdown files         |



## LFS
* for more than 100MB file commit.

```bash

# Install
sudo apt install git-lfs
git lfs install

git lfs track "*.7z"

# Update track rule
git add .gitattributes

# Then add, commit, push

```

## git filter-repo -- force 
* delete history
