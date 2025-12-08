


[Home page](https://pyinstaller.org)

```bash
pip install pyinstaller
pyinstaller "$your_script".py
# create one EXE
pyinstaller --onefile "$your_script".py

pyinstaller "$your_script".spec

pyinstaller --onefile --noconsole --name "$MyApp" --icon "$path".ico "$your_script".py
```


```spec
# -*- mode: python ; coding: utf-8 -*-

block_cipher = None # code encryption

a = Analysis(
    ['app.py'], # entrypoint
    pathex=[], # add path
    binaries=[], # add binary
    datas=[], # add data
    hiddenimports=[],
    hookspath=[], # hook
    runtime_hooks=[],
    excludes=[], # excluded modules
    win_no_prefer_redirects=False,
    win_private_assemblies=False,
    cipher=block_cipher,
    noarchive=False
)

# create archive
pyz = PYZ(a.pure, a.zipped_data, cipher=block_cipher)

exe = EXE(
    pyz,
    a.scripts,
    [],
    exclude_binaries=True,
    name='app', # Program name
    debug=False,
    bootloader_ignore_signals=False,
    strip=False,
    upx=True,
    console=True
)

coll = COLLECT(
    exe,
    a.binaries,
    a.zipfiles,
    a.datas,
    strip=False,
    upx=True,
    upx_exclude=[],
    name='app' # output folder name
)
```