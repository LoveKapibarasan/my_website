# Branch

= <origin>/<branch_name>

```bash
git branch -a
# -vv = with remote track
# -a = all
# -r = remote
git checkout "${origin}/${branch}" $file_path
# Default: origin, main, all files
# Rewrite content
```

**Checkout**
```bash
git checkout "$branch" # Go to the latest commit

# Go back
git checkout "$commit-hash"
git reset --hard HEAD # Discard Change and align 

git checkout -b "$new-branch"
git checkout "${origin}/${branch}"
git checkout "${origin}/${branch}" -- "$file"
# --theirs, --ours 
# -b = create a new branch and switch
```


```bash
git branch -r | grep "$origin_name" 
git branch -d "$branch_name" # delete local branch
git push origin --delete "$branch_name" # delete remote branch
```

```bash
# Get specific file from specific commit
git show "$commit":$"path" > "$output_file"
```


> Checkout can not change deleted files.




### detached head
normal
```
HEAD → main → C3
C1 — C2 — C3
```
detached
```
HEAD → C2
C1 — C2 — C3   (main -> C3) 
```
no branch commit



### Diff
```bash
git diff [object of comparison =Vergleichsobjekt] [--Option] [File_path...]

git diff "${origin_x}/${branch_y}" "${origin_z}/${branch_w}" -- "$path"

# --name-only = only show file name 

```

### hunk

- Chunk of diff.


###　Notes 
* Settings -> Default branch, Rename branch


