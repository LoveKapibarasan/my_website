

1. **端末=Terminal=Terminal**
    * Originally it was hardware like keyboard or display.


2. **Virtual Console(TTY)**
**TTY** = teletypewriter (`Ctrl` + `Alt` + `f<number>`)
It can directly interact with kernel.


3. **Terminal Emulater(Pseudo Terminal ,PTY)**


* **master (pty master)** property:
    Get user input or display.
    Interface.
    e.g. `kitty`, `xterm` ,`foot`, `gnome-terminal`
* **slave (pty slave)** property:
    Used by **Shell**
    Programs that gets input from master and execute and pass result to master.(tty/pty).
    e.g. `bash`, `zsh`
    **Default Shell**
    ```bash
    chsh -s $(which shell) $username
    ```


```bash
tty  # to check on which terminal it is working
# /dev/pts/2 
# /dev/tty1

```