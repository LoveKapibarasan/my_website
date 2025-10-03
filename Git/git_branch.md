# Branch

= <origin>/<branch_name>

```bash
git branch -a
# -a = all
# -r = remote
git checkout "${origin}/${branch}" $file_path
# Default: origin, main, all files
# Rewrite content


git checkout <commit-hash>
git checkout -b <new-branch> <base_branch>
# -b = create a new branch and switch
git branch -r | grep <origin_name>/ 
git branch -d <branch-name> # delete
```

> Checkout can not change deleted files.


**Diff**
```bash
git diff "${origin_x}/${branch_y} "${origin_z}/${branch_w}" -- "${path}
```

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
```

### hunk

- Chunk of diff.


###　Notes 
* Settings -> Default branch, Rename branch


