# Branch

= <origin>/<branch_name>

```bash
git branch -a
# * is current branch
# -vv = with remote track
# -a = all
# -r = remote
```

* Branch name convention
1. `feature/xxx`
1. `bugfix/xxx`
1. `refactor/xxx`
1. `release/xxx`
1. `docs/xxx`
1. `improvement/xxx`

**Checkout**

```bash
git checkout "${origin}/${branch}" $file_path
# Default: origin, main, all files
# Rewrite content
```

```bash
git checkout "$branch" # Go to the latest commit

# Go back
git checkout "$commit-hash"
git reset --hard HEAD # Discard Change and align 

git checkout -b "$new-branch" # create new branch from current commit
git checkout -b "$new-branch" "${origin}/{main}"
git checkout "${origin}/${branch}"
git checkout "${origin}/${branch}" -- "$file"
# --theirs, --ours 
# -b = create a new branch and switch
```

**Deletion**
```bash
git branch -r | grep "$origin_name"

# delete local branch
git branch -d "$branch_name"
# -D = Force to delete
git push origin --delete "$branch_name" # delete remote branch
```

**Rename**
```bash
git branch -m "$old_name" "$new_name"
# remote > delete and push
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
* It points to a commit but not on any branch.
* `[detached HEAD xxxx]` message. 

**Cause:**
    1. Checkout with commit hash or tag or remote branch

Do `git checkout`.


### Diff
```bash
git diff [object of comparison =Vergleichsobjekt] [--Option] [File_path...]

git diff "${origin_x}/${branch_y}" "${origin_z}/${branch_w}" -- "$path"

# --name-only = only show file name 

git diff "g_path1" "$g_path2" # this even works between different repos
```

### hunk

- Chunk of diff.


###　Notes 
* Settings -> Default branch, Rename branch


