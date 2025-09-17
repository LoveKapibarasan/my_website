# git filter-repo -- force 
* delete history
* Original file will be deleted.

* Do backup before
```bash
git filter-repo --path path/to/file --invert-paths --force # invert path = delete path
```