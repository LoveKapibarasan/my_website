
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



### Pip-Tools

```bash
pip install pip-tools

pip-compile requirements.in

# Upgrade
pip-compile --upgrade --verbose requirements.in

pip-compile --upgrade-package "$Package requirements.in

# Python Version
pip-compile --python-version 3.11 requirements.in``

```
requirements.in(Package List)        →  pip-compile  Lock→  requirements.txt
                                             ↓ Sync
                                          pip-sync
**`-e file:.`**

* `-e` = editable install mode

* `file:.` = current directory (.) as a package
* Purpose: Install your own package in development mode so code changes are immediately reflected without reinstalling


### Import

```bash
pip install -e "$path" # Install path on system
# -e = editable
# Only programs not data.
```
