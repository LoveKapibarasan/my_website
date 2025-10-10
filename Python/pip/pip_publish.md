

```bash
pip install build twine
```

```
my-package/
├── src/
│   └── my_package/
│       ├── __init__.py
│       └── module.py
├── tests/
├── README.md
├── LICENSE
└── pyproject.toml
```
**pyproject.toml**
```toml
[build-system]
requires = ["setuptools>=61.0"]
build-backend = "setuptools.build_meta"

[project]
name = "my-package"
version = "0.1.0"
authors = [
  { name="Your Name", email="your.email@example.com" }
]
description = "A small example package"
readme = "README.md"
requires-python = ">=3.8"
classifiers = [
    "Programming Language :: Python :: 3",
    "License :: OSI Approved :: MIT License",
    "Operating System :: OS Independent",
]

[project.urls]
Homepage = "https://github.com/username/my-package"
```


```bush
python -m build # this generates `.whl` and `.tar.gz` in `dist`
python -m twine upload dist/*
```

**Config for twine**
* `.pypirc`
```ini
[pypi]
username = __token__
password = pypi-token
```

### Exe
**pipinstaller**
```bash
pyinstaller --onefile \
            --noconsole \
            --icon=app.ico \
            --name=MyApp \
            --add-data "data;data" \
            your_script.py
```
**Config:**
`"$script.spec"`
`dist/`
