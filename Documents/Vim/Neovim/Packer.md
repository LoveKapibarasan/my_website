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
