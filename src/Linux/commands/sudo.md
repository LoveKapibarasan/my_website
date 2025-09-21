# sudo

* `~` become root home directory.

```bash
# Function to get the home directory of the user who invoked sudo
get_user_home() {
    if [ -n "$SUDO_USER" ]; then
        eval echo "~$SUDO_USER"
    else
        echo "$HOME"
    fi
}
```
* `[ -n "$VAR" ]` = if var is empty string, true
* `[ -z "$VAR" ]` = if var is not empty string, true

* Clipboard would not be synced(`-E`)