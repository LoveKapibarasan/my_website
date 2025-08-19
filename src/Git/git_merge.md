## Merge command

* Take the commits from the branch main and integrate them into your current branch.
```bash
git merge main
```

## 乗せる
```bash
git rebase
git config --global.pull.rebase false
```

```bash
git pull origin main
# --no-rebase
git config --global.pull.rebase true
```

* `-m` -- merge comment might be also required.


```bash
git fetch
```
## Check which files are unmerged
```
git status
```

* Merge conflict
