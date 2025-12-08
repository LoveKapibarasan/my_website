
```bash
python"$version" -m venv .venv
source .venv/bin/activate
pip install -r requirements.txt
# uninstall -r requirements.txt
deactivate
# without activation
.venv/bin/python "$script.py"
# -m = module
./venv/bin/python -m pip install package
```

**Windows**
```powershell
# in CMD
.\.venv\Scripts\activate.bat
# in powershell
.\.venv\Scripts\Activate.ps1
python.exe -m pip install --upgrade pip
```