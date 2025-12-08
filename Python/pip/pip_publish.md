

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
