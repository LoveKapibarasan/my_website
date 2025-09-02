## Ruff (Rust)

```bash
pip install ruff
ruff check .
ruff check --fix .
ruff format .

```

```toml
[tool.ruff]
line-length = 100 # max line length
select = ["E", "F", "I"]  # Errors, Flake8, Import sort
ignore = ["E501"]         # Ignore long line error
fix = true 
```

* E → pycodestyle error

* F → Pyflakes

* I → isort（organize import）

* UP → pyupgrade（update syntax）

## Pre commit
```bash
pip install pre-commit
```

`.pre-commit-config.yaml` on project root.
```yaml
repos:
  - repo: https://github.com/charliermarsh/ruff-pre-commit
    rev: v0.3.0  # adjust
    hooks:
      - id: ruff
        args: [--fix]
      - id: ruff-format 
```

```bash
pre-commit install
```