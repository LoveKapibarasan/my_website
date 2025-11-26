
```bash
sudo -E vim # share clipboard
```
* `~/.vimrc`(Normal Vim)
* `init.vim`(Neovim)

**Comment**: `"comment`
**Reload**:`:source ~/.vimrc` or `:so ~/.vimrc`

### Clipboard

```ini
set clipboard=unnamedplus
```

### VSCode Vim

* Setting.json
```json
{
  "vim.vimrc.enable": true,
  "vim.vimrc.path": "~/.vimrc"
}
```
