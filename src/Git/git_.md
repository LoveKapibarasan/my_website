# gitignore
.gitignore tells Git which files or directories it should ignore and not track.
1, dist/, build/
2.IDE/editor settings(.vscode/, .idea/) 
3. Temporary, log, local, env



* `#` -- comment
* `*`, `**`
* `!` -- Negate 

# gitattribute
`.gitattributes` controls how tracked files are treated—not whether they’re tracked, but how Git should handle them.

| Purpose              | Example                                     | What it does                                        |
| -------------------- | ------------------------------------------- | --------------------------------------------------- |
| Line-ending handling | `* text=auto`                               | Automatically handle LF/CRLF differences between OS |
| Disable auto-merge   | `*.lock -merge`                             | Prevent Git from trying to auto-merge certain files |
| Use Git LFS          | `*.psd filter=lfs diff=lfs merge=lfs -text` | Store large files via Git Large File Storage        |
| Custom diff driver   | `*.md diff=markdown`                        | Use better diff coloring for Markdown files         |



## Fork

* A feature that lets you copy someone else’s repository under your own account

* You can create your own repository that is separate from the original one (upstream)

* Ok to push main branch.

**Main uses:**

* To propose fixes or feature additions to an open-source project

* When you cannot push directly to the original project, you push to your own fork first and then send a Pull Request (PR)

* Clicking the “Fork” button on GitHub → duplicates the repository into your own account



# Graph

> `less` is needed.

```bash
git log
```
* `--oneline` = Compresses each commit into one line.
* `--graph` = Draws an ASCII(American Standard Code for Information Interchange.) graph of the commit history on the left side.
* `--all` = Shows history of all branches, not just the current branch (HEAD).
* `--decorate` = Shows labels (branch names, tags, HEAD) next to commits.
*  `--date=`
    * default, short, iso, relative, local, unix
    > Unix = the raw Unix timestamp (seconds since 1970-01-01 UTC).
    > ISO = ISO 8601 format (human-readable + timezone).e.g.`2025-08-27 14:20:30 +0200`