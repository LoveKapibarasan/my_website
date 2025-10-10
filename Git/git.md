## Dropbox * Git

* Use Dropbox as the storage location for your Git repository, so that you get:

    * Version control via Git history

    * Automatic backup via Dropbox synchronization

— both at once.


```bash
git config --global user.name "Your Name"
git config --global user.email "your.email@example.com"

git clone --depth="$n"  -o $origin_name $url $place
# --recursive = including submodules
git add . # . = all
git commit -m "message"
git push origin main
# --force overwrite remote history
git reset # reset command
```


## Branch
* A branch in Git is basically a pointer to a commit.
* Default branch = main or master.

## Commit

* A snapshot of your project at a given moment.

## 1,2,3-way merge

## 
* Everythig up to date.
* non-fast-forward push -> pull or merge


### Notes

* Github Mirror
    * copy repository from another place.
    * cannot send PR or Issue.
* Dubious = doubtful
```
fatal: detected dubious ownership in repository at
```
