# git filter-repo -- force 
* delete history
* Original file will be also deleted.
* Do backup before

```bash
git filter-repo --path "$file_path" --invert-paths --force 
# invert path = delete path
git remote add ...
# and
git push -f "$origin" "$main" # because it rewrite history
```
