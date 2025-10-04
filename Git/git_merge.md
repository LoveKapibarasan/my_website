## Merge command

* Take the commits from the branch main and integrate them into your current branch.
```bash
git merge <main>
```
> add && commit -> merge -> edit -> add the file -> commit -> edit msg -> push

* `--squash` = merge only changes(commit histories are ignored.)

### Rebase

* linear
```bash
git rebase
git config --global.pull.rebase false
```


### pull = fetch + merge

```bash
git pull <origin> <main>
```
Default: `--no-rebase` <-> `-rebase`
```
git config --global.pull.rebase true
```

* `-m` -- merge comment might be also required.

### fetch

```bash
git fetch <origin> <main> 
git fetch <origin> # all branch
```
* Default: default remote(origin) and main or master.

## Check which files are unmerged
```
git status
```

* Merge conflict
If changes overlap on the same lines, Git can’t choose automatically → it marks a merge conflict, and you have to resolve it manually.
Else changes are saved.

1. 
```txt
<<<
<Now>
===
<to be merged>
>>> branch_name
```
2. `git restore --source=HEAD or MERGE_HEAD -- <file>`
`git add`
`git commit`


### Create a merge conflict

```bash
# Compare and add conflict markers to file.txt
git merge-file "$file1" "$basefile" "$file2"
```
