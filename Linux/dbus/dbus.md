# Dbus = Desktop Bus

* an inter-process communication(IPC) system that allows multiple programs(processes) on the same computer to communicate with each other.

--> NwtworkManager, fcitx5, desktop, Systemmd

### In Linux

* Runs a message bus daemon`dbus-daemon` that application connect to.

#### Buses

1. System Bus -- `/var/run/dbus/system_bus_socket/`

2. Session(User) Bus -- `/run/user/<uid>/bus`


```bash
busctl list
echo $DBUS_SESSION_BUS_ADDRESS
echo $XDG_RUNTIME_DIR
```
* **`$DBUS_SESSION_BUS_ADDRESS`** 
Used for:
    Displaying notifications
    Clipboard sharing
    Inter-application messaging


* **`$XDG_RUNTIME_DIR`**
`/run/user/$userID`
Used for:
    Socket files
    Temporary caches
    Session management data
