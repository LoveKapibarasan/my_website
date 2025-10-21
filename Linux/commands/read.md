* `read -r "$variable_name"`
* read input and assign variable
    * `-p "Message"` = output prompt before
    * `-r` = `\` = do not escape with `\`
    * `-t` = waiting time
    * `-s` = for entering password    
    * `-e` = edit mode(Allow some short cut key of bash)

`-e`:

* `\`:  Line continuation (unless `-r`)  `hello\ world` → `hello world` 
* `$`:  Literal (not expanded)  No variable expansion `$HOME` → `$HOME` (stored as-is) 
* `*`:  Literal  `*.txt` → `*.txt` 
* `"`, `'`:  Literal  Quotes stored as-is 
* `Spaces`:  Preserved if in quotes or escaped  `"  spaced  "` 

