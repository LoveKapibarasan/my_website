# GH
* Offitial Github CUI tool

```bash
gh auth login
```

### PR
```bash
gh pr create --base <target_branch> --head <my_branch> --title "title" --body "body"
# my_branch = $(git branch --show-current) = current branch


git remote -v

# origin    git@github.com:yourname/myrepo.git (fetch)
# origin    git@github.com:yourname/myrepo.git (push)
# upstream     git@github.com:mainorg/project.git (fetch)
# upstream     git@github.com:mainorg/project.git (push)
gh pr create --repo mainorg/project
```


# Glab
* Offitial Gitlsb CUI tool
