```bash
git branch -a
# -a = all
# -r = remote
git checkout <branch>
git checkout <commit-hash>
git checkout -b <new-branch>

git branch -r | grep <origin_name>/ 

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