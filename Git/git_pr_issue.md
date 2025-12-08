* **Check the first `.git` folder. It contains Issue and PR templates.**
* Create a folk and branch.

* **Do not send too big PR. Do regulaly. Separate.**
* **Run linter before.**


## Issue


### Purpose

1. Report a bug 

2. Request a new feature 

3. Ask a question 

4. Track tasks with checklists

### Manual

1. Click the “Issues” tab.

2. Click the green “New issue” button.

3. Fill in:

    Title (short description)

    Description (Markdown supported → you can use ## Steps to reproduce, code blocks, checklists, etc.)

    Labels (bug, enhancement, question…) if available

    Assignees (who should handle it)

```bash
gh issue create --title "$title" --body "$body" --label bug  --repo "${owner}/{repo}"
```


## PR
1. Fork, clone
2. Create a new branch
```
git checkout -b <branch_name>
```
3. Push 
4. Compare & pull request on UI
    * Check template in `.github`

on CUI
```bash
gh pr create --base "$target_branch" --head "$source_branch_name" --title "$title" --body "$Explanation"
# or --body-file "$file_path" --repo "${owner}/{repo}" --head  "${me}/{repo}"
```

5. Review

6. Approve

7. Merge


> Point to "rc" = release candidate

### JIRA
* by Atlassian
* project management tool
