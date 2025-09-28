# Neovim


**Plugin**
1. `~/.local/share/nvim/site/pack/`
    * `~/.local/share/nvim/site/pack/<name>/start/<Plugin Name>/`
    * `~/.local/share/nvim/site/pack/<name>/opt/<Plugin Name>/`

2. Plugin Manager

* `packer.nvim`
* `lazy.nvim`(newer)

Finally*, **`:PackerSync
`**

**lua**
```lua
-- packer setting
require("module_name").startup(function(use) -- Execute lua/name/init.lua or lua/name.lua and become that returnvalue 
--[[
function packer.startup(user_function)
  -- pass "use"
  local use = packer.use
  user_function(use) -- this calls passed function
end
]]--
  use "wbthomason/packer.nvim"
  use "nvim-tree/nvim-tree.lua"
end)
```
### Vim Object


vim.o = global option
vim.bo = buffer local option
vim.wo = windows option
vim.api = core api
vim.cmd = execute command from lua
vim.fn = call vim script function
vim.keymap = apply keymap

```lua
-- Setting
vim.opt.number = true

-- Keymapping
vim.keymap.set("n", "<Space>w", ":w<CR>")

-- Execute Command
vim.cmd("command")
```

### Buffer
* It refers to an in-memory object that holds the text being edited.

* When you open a file, its contents are loaded into a buffer, and all editing is done on that buffer.

* By saving (:w), the contents of the buffer are written back to the file.

### window
* A “frame” that displays the contents of a buffer. A single buffer can be shown in multiple windows.

### tabpage (tab)
A layout unit that groups multiple windows together. 
**Config:**
`~/.config/nvim/init.lua`


### Finish
`:wqa` -- all
