
```bash
python"$version" -m venv .venv
source .venv/bin/activate
pip install -r requirements.txt
deactivate
# without activation
.venv/bin/python "$script.py"
# -m = module
./venv/bin/python -m pip install package
```
