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



### Iptables
* a command/mechanism to control Linux’s packet filtering functionality.

1. Packet filtering (firewall)
→ Controls which communications are allowed or denied based on rules.

2. NAT (Network Address Translation)
→ Rewrites IP addresses and port numbers for forwarding.
```bash
sudo iptables -t nat POSTROUTING -o $interface -j MASQUERADE
# POSTROUTING=after sending a packet.
# -o = output
# -j = jump
# MASQUERADE = modify as sender as ip address of wlan 0
```
3. Packet mangling
→ Performs advanced processing such as modifying communication headers.

### Modify Interface
```bash
interface $interface
static ip_address=192.168.42.1/24 # set a static ip address and subnet mask
nohook wpa_supplicant # no wpa supplicant authentication
```

**Config:**
`etc/iptables.ipv4.nat`

* Output setting, rules

```bash
iptables-save

sudo sh -c "iptables-save > /etc/iptables.ipv4.nat"

```

### `ip neigh`
Show ARP（Address Resolution Protocol）table
```bash
192.168.223.1 dev wlan0 lladdr 3a:22:e2:b9:92:98 REACHABLE
192.168.1.1 dev eth0 lladdr xx:xx:xx:xx:xx:xx STALE
# Show ip address and MAC address in the same network
```

### Global(Fixed) IP address

1. Contact with ISP, provider.
2. Use service like Tailscale Funnel
> cannot use custum domain.

**Fiber Optic Cable Work**

**Work Flow:**

1. **From outside the building to the building**

Draw out light fiber cables from a telephone pole(電柱) to the building
If already installed, skip this step

2. **From the building to the room**

Pass through walls or wall gaps for pipes
Often use air conditioning duct openings
Or make small holes (about 1 cm in diameter)

3. **Inside the room**

Install outlets (connectors)
Attach an ONU device

**Required time: 1-2 hours**
