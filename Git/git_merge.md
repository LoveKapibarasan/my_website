## Merge command

* Take the commits from the branch main and integrate them into your current branch.
```bash
git merge "${origin}/${branch}" # with current branch
```
> add && commit -> merge -> edit -> add the file -> commit -> edit msg -> push

* `--squash` = merge only changes(commit histories are ignored.)
* `--allow-unrelated-histories`

### Rebase
1. Place your change on the latest commit.
2. Edit or organize commit history
* This can cause Merge Conflict.
* linear
```bash
git rebase "${origin}/${branch}" # with current branch

git config --global.pull.rebase false

# Continue or Abort
git rebase --continue
git rebase --abort
```

**Edit commit history**
```bash
# collect into one history
git rebase -i HEAD~n # check n with git log --oneline
# -i = interactive mode
> Both need  **"${origin}/${branch}"** argument.
```

* pick = use this commit
* squash = align with commit before
* reword = edit commit message
* drop = delete commit 


### pull = fetch + merge

```bash
git pull "$origin" "$main"
```
Default: `--no-rebase` <-> `-rebase`
```
git config --global.pull.rebase true
```

* `-m` -- merge comment might be also required.

### fetch

* Local files do not change !!

```bash
git fetch "$origin" "$main"
git fetch "$origin" # all branch
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


### --theirs, --ours

1. Rebase
theirs = my branch
ours = coming branch
2. Merge
theirs = comming branch
ours = my branch


### Create a merge conflict

```bash
# Compare and add conflict markers to file.txt
git merge-file "$file1" "$basefile" "$file2"
```


###
```bash

# Staging step by step
git add -p "$file" # or patch
# y = apply change
# n = Skip
# s = split
# q = quit
```
