
* for binary file upload.

* Any files

* Max 2GB per file.

```bash
git tag v0.0.0
git push origin v0.0.0 # push tag

git tag -d v0.0.0 # delete on local
git push origin --delete v0.0.0 # push


gh release create <tag> <path> \ # tag is required
  --title "Title" \
  --notes "Notes"
```

> Tag name should be only half-width alphanumeric characters, periods, and hyphens.