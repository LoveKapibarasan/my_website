## Revert
```bash
git revert <hash1> <hash2>
```
* Create a cancel commit.

## Moves HEAD (and optionally the branch pointer) to another commit on local.
```bash
git reset # git reset --mixed HEAD
git reset --hard "$commit-hash"

# Reset commit but leave local change
git reset --soft "$commit_hash"
git reset --soft HEAD~"$n"
```

| Option | Commit | Staging | Working |
|--------|--------|---------|---------|
| --soft | Deleted | Changes remain | Changes remain |
| --mixed (default) | Deleted | Deleted | Changes remain |
| --hard | Deleted | Deleted | Deleted |

## Take one specific commit from anywhere and apply it on your current branch.
```bash
git cherry-pick <hash1>^..<hash2>
```
Eat only cherry on a cake.

```
main:    A -- B -- C -- D(Cherrypicked.)
feature:       \ D -- E
```

## Difference

* **commit-hash=commit_id**
Every commit in Git is identified by a SHA-1 hash (40 chars, often shortened to 7).

* **Branch** 
pointer (label pointing to a commit)

* **HEAD**
`HEAD` = `HEAD~n`(corresponding to the newest `git commit -m`)

1. `HEAD~n`: the commit before n from current commit(corresponding to commit history)
2. `HEAD^`, `^^`, `^n` = `HEAD~1`, `2`, `n`
3. `HEAD@{0}`, `HEAD@{n}`: the commit that head pointed before(corresponding to `git checkout`)
4. `@{-n}`: branch before

a special pointer to “where you currently are.”
```bash
git symbolic-ref HEAD # check where HEAD points refs/heads/<branch_name>
git rev-parse HEAD # print commit hash
```
If HEAD changes, file contents change



