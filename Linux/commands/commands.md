# Linux Commands List
* `sudo` = permission denied.
* `cd`
    * Default: Home directory
* `rm`
    * `-r` - recursive option for directly
    * `-f` - force


* `tr -dc 'A-Za-z0-9!@#$%^&()_+=-'`
tranlate or delete
    * -d = delete
    * -c = complement

* `/dev/null`
    * null location.
    * `>`

* `mv a b`
    * rename=move

* `mkdir`
    * `-p` - create all necessary parent directories

* `command_1 && command_2`

* `\` = `\n`

* a|b = paaa output of a to b


* `which`

* $( command ) = command substitution = output of command

* `&` = backgroung process



## Process

* `ps` = process status
    * a = including another user's process.
    * u = detail information like username or memory
    * x = also show daemon
**`ps aux | grep "<process_name>"`**
> This output includes its ps aux process.


* `cat /proc/"$n"/environ`: read env file of process ID(or name) "$n". 



* `lsblk` -- list block devices
    * GiB
* `lsusb` -- usb device

### Create a file
* `touch <filename>` -- touch update timestamp of the file
* `cat > <filename>`
* `vim or nano <filename>`
* `echo "$string" > <filename>` # echo = echolocation
### PID = process id

```bash
pkill <name>
kill <pid>
killall <name>
```

### %
* `%u` = currently logined user
