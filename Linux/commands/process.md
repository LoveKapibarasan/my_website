## Process
* `&` = backgroung process

* `ps` = process status
    ```
    # output
    PID TTY          TIME CMD
    1434 pts/0    00:00:00 bash
    3890 pts/0    00:00:00 ps
    ```
    * a = including another user's process.
    * u = detail information like username or memory
    * x = also show daemon


**`ps aux | grep "$p_name"`**
> This output includes its ps aux process.
```
USER PID %CPU %MEM VSZ RSS TTY STAT START TIME COMMAND
```
* Time = start time
* Stat = state
* VST = Virtual Set Size = Virtual Memory Size
* RST = Resident Set Size = Physical

* `cat /proc/"$n"/environ`: read env file of process ID(or name) "$n".


**`pstree -p`** = Process Tree


### PID = process ID

* PPID = parent PID

```bash
pkill "$p_name"
kill "$pid"
killall "$p_name"
```
