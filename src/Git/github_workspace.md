## 1. `.github/workflows/` 
define workflows for GitHub Actions.


```yaml
name: <name>
on: [push]
jobs:
  build:
    runs-on: ubuntu-latest
    steps:
      - uses: actions/checkout@v3
      - run: npm install && npm test
```

* GitHub Actions workflows (.github/workflows/*.yml) normally run only on GitHub’s servers.

* With `act`, you can simulate on local.

**runs-on**

* Defines the OS / environment for the job.

* Common options: `ubuntu-latest`, `windows-latest`, `macos-latest`.

**steps**

* Ordered list of things the job does.

* Each step can either:

    * Use an action (uses: …)

    * Run a command/script (run: …)

**jobs**

* A workflow can have one or more jobs.

* Each job runs independently, possibly on different virtual machines.

* Jobs can run in parallel or be set with dependencies.

**on**

* Defines when the workflow should run (the trigger).

* Common triggers:

    * `push` → runs when you push commits

    * `pull_request` → runs when a PR is opened/updated

    * `schedule` → runs on a cron schedule

## 2.`.github/ISSUE_TEMPLATE/ or .github/PULL_REQUEST_TEMPLATE.md`

**Example**

```md
---
name: Bug report
about: Report a problem with the project
title: "[BUG] "
labels: bug
---

**Describe the bug**
A clear and concise description of what the bug is.

**Steps to reproduce**
1. Go to '...'
2. Click on '...'
3. See error

**Expected behavior**
What you expected to happen.
```

```md
## Description
Please explain the changes you made and why.

## Related Issues
Fixes # (issue number)

## Checklist
- [ ] Code follows the style guide
- [ ] Tests have been added/updated
- [ ] Documentation has been updated
```

## 3. CODEOWNERS`.github/CODEOWNERS`
→ Defines who is automatically requested as a reviewer when specific files are changed.

## 4. Others

**Repository metadata**

* `.github/FUNDING.yml `→ Sponsor links

* `.github/CODE_OF_CONDUCT.md` → Code of conduct

* `.github/CONTRIBUTING.md` → Contribution guidelines