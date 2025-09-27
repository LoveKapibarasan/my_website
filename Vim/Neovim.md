# Neovim


**Plugin**
1. `~/.local/share/nvim/site/pack/`
    * `~/.local/share/nvim/site/pack/<name>/start/<Plugin Name>/`
    * `~/.local/share/nvim/site/pack/<name>/opt/<Plugin Name>/`

2. Plugin Manager

* `packer.nvim`
* `lazy.nvim`

Finally*, **`:PackerSync
`**

**lua**
```lua
-- Setting
vim.opt.number = true

-- Keymapping
vim.keymap.set("n", "<Space>w", ":w<CR>")

-- Execute Command
vim.cmd("command")
```



**Config:**
`~/.config/nvim/init.lua`
