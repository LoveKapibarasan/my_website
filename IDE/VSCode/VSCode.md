# VSCode

* `Electron`


### Config
* `~/.config/Code/User/settings.json`
* Open Extension -> Click geer mark

## Command Parette
`Ctrl + Shift + P`
search-based launcher = Befehlspalette

## Extensions

* `Node.js`

```bash
code --install-extension "$extension" # extensions = id
```

**Config**
`package.json`
```json
{
  "name": "my-extension",
  "activationEvents": ["onCommand:extension.sayHello"],
  "main": "./out/extension.js",
  "contributes": {
    "commands": [
      {
        "command": "extension.sayHello",
        "title": "Say Hello"
      }
    ]
  }
}
```

**Entry　Point**
* `extension.js` / `extension.ts`
    * export `activate()` and `deactivate()`

**Trigger**
* `activationEvents`
    * onLanguage:javascript → JavaScript file is opend

**contributes**
    * commands  → Command Parette


**Yeoman Generator**
* Create a base of extension.

```bash
npm install -g yo generator-code
yo code
```

### Notes

**OpenVSX**: Visual Studio Code marketing place by Eclipse Foundation.

