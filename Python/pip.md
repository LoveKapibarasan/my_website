
```bash
pip install

pip install -y -r requirements.txt
pip uninstall -y -r requirements.txt
# -y = yes
# -r = requirements

pip install -U package_name[extra]
# -U = --upgrade
# [extra]= dependencies

pip install "<package>>=0.0.0,<0.0.1"

# <,> = always newest version is chosen


pip list -o # update list
pip index versions <package> # version list
```