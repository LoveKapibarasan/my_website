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


### Redirect Problem when using sudo

1. `sh -c " xxx "` or `sudo bash -c "xxx"`  -- run xxx as a command
2. `command | sudo tee > /dev/null`


* `| tee /dev/tty`: Pass input while outputing stdout.
