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

