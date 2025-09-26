### `ip a` = `ip address`

```
1: lo: <LOOPBACK,UP,LOWER_UP> mtu 65536 qdisc noqueue state UNKNOWN group default 
    link/loopback 00:00:00:00:00:00 brd 00:00:00:00:00:00
    inet 127.0.0.1/8 scope host lo
       valid_lft forever preferred_lft forever
    inet6 ::1/128 scope host 
       valid_lft forever preferred_lft forever

2: eth0: <BROADCAST,MULTICAST,UP,LOWER_UP> mtu 1500 qdisc mq state UP group default qlen 1000
    link/ether 52:54:00:12:34:56 brd ff:ff:ff:ff:ff:ff
    inet 192.168.1.100/24 brd 192.168.1.255 scope global dynamic eth0
       valid_lft 86399sec preferred_lft 86399sec
    inet6 fe80::5054:ff:fe12:3456/64 scope link 
       valid_lft forever preferred_lft forever
```

* `<Interface_number>`: interface_name(loopback, ethernet<n>, wifi<n>) 
* `<link>` = data link layer(L2) MAC address
* `<inet>`= network layer(L3) IPv4 addess
* `<inet6>`= IPv6 address
* `valid_lft` = valid lifetime
* `preferrd_lft`= recommended lifetime
* `brd` = broadcast address(同じセグメントの全ホストにパケットを送る)
* `scope`
    * host(127.0.0.1)
    * link =segment
    * global
* `dynamic` = IP by DHCP（Dynamic Host Configuration Protocol）

* `<FLAG>`
    *  `BROADCAST` = interface support

    * `MULTICAST`

    * `UP` = valid on OS

    * `LOWER_UP` = Physically connected

* `qlen 1000` = queue length that interface can keep

* `state`
    * `UP` → valied
    * `DOWN` → disabled
    * `UNKNOWN `
    * `DORMANT` → prepared
    * `LOWERLAYERDOWN`


### Bridge Mode

```bash
# Create br0
sudo ip link add name br0 type bridge

sudo ip link set dev eth0 master br0

sudo ip link set dev br0 up
sudo ip link set dev eth0 up

sudo ip addr add 192.168.1.100/24 dev br0
```
