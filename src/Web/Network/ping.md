# Ping
```
ping -c 4 google.com
```

* `-c <n>` = number of ICMP packets
* `Internet Control Message Protocol` = protocol for error diagnose

* ICMP messages
    * `Echo Request / Echo Reply`
        → used by ping

    * `Destination Unreachable`
        * `Destination Host Unreachable`
    * `Time Exceeded`
        → TTL = 0 

Redirect

## Ping Average Value
Normally 20 ~ 50 ms. 
ave
    50ms -- OK
    100ms -- so-so
    200ms -- lag