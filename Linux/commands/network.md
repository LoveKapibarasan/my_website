* `hostname -I`
* `hostname -i`


## Port
* 
```bash
sudo lsof -i :"$port_number"
sudo lsof -i "${protocol}:${port_number}"
# e.g. sudo lsof -i TCP:53
```
    * lsof = list open files
```bash
sudo ss -tlnp 'sport = :nn'
# or
sudo ss -tlnp | grep ":$port"

# -l = only listen
# -n = no name resolution
# -p = output process information
# -t = tcp
```

`| grep LISTEN`
* `LISTEN` = Connectable
* `0` = message in a receieve queue
* `0.0.0.0:Port` = all network
* `127.0.0.1:Port` = only local
* users:(("$program_name",pid=53767,fd=7))) 
    * fd = file discreptor
    * program_name: like docker-proxy
