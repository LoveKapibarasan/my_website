**TTY** = teletypewriter(`Ctrl` + `Alt` + `f<number>`)
    can directly interact with system.

**Pseudo-TTY** = e.g. `xterm`, `gnome-terminal`

**Terminal Emulater**
A user-space program that talks to the PTY master side.

**Shell** = a command-line interpreter, like bash, fish, zsh etc.
> Shell works with terminal emulators.

```bash
[Keyboard] → [Terminal Emulator (kitty, xterm)] → PTY master
                                               ↔
                                         PTY slave → [Shell (zsh, bash)]
```