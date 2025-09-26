# /etc/hosts

* Static table lookup for hostnames.
* Stronger than DNS.


```ini
127.0.0.1 localhost # IPV4
::1 localhost #IPV6
127.0.1.1  <machine_name>.localdomain  <machine_name>

127.0.0.1 example.com
```

example.com, example.com/article1 including iframe -> loop back