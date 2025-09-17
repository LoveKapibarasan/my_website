## tee

```bash
command | tee file.txt
```
* -a = append mode

* A tool that takes data from standard input, displays it on standard output, and simultaneously writes it to a file.
* Unlike using redirection (`>`), you can also run tee with sudo to write to files that require root privileges.

```bash
tee test.txt
hello
hello   # output
world
world   # output
Ctrl+D  # EOF(End of File)
```
