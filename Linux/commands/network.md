* `hostname -I`
* `hostname -i`


## Port
* `sudo lsof -i:<port_number>`
    * lsof = list open files
```bash
ss -ltnp 'sport = :nn'
# -l = only listen
# -n = no name resolution
# -p = output process information
# -t = tcp


```
