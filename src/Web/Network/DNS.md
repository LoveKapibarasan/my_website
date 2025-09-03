
## Default

programs usually don’t talk directly to DNS servers.
DNS resolution is handled by the **`glibc` resolver library** (Config: `/etc/nsswitch.conf`).
The actual behavior depends on *which resolver backend is active*.

* `/etc/nsswitch.conf`

By default, Arch provides this entry for `hosts`:

```ini
hosts: files mymachines myhostname resolve [!UNAVAIL=return] dns # default
```

Meaning:

* **files** → check `/etc/hosts`
* **mymachines** → check systemd-machined for VM/container names
* **myhostname** → check the local hostname (`/etc/hostname` or systemd-hostnamed)
* **resolve** → query systemd-resolved if enabled
* **[!UNAVAIL=return]** →  if system-resolved is unavairable, go on.
* **dns** → fallback to the traditional glibc DNS lookup using `/etc/resolv.conf`

> No need to reload.

```bash
getent hosts domain # check
```

---

## `/etc/resolv.conf`

The content and source of `/etc/resolv.conf` depend on which service manages DNS:

### Cases

1. **systemd-resolved enabled**

   * `/etc/resolv.conf` → symlink to `/run/systemd/resolve/stub-resolv.conf`
   * Points to `127.0.0.53`, with systemd-resolved keeping track of real DNS servers.

2. **NetworkManager**

   * By default, NetworkManager overwrites `/etc/resolv.conf`.
   * Can also integrate with systemd-resolved if configured.

3. **DHCP clients (dhcpcd, dhclient, etc.)**

   * They write DNS servers received from DHCP directly into `/etc/resolv.conf`.

4. **Static configuration**

   * Administrator manually edits `/etc/resolv.conf` to set fixed nameservers.

---

###  Out-of-the-box behavior (fresh Arch install)

* `systemd-resolved` is **disabled by default**
* `NetworkManager` is not preinstalled

