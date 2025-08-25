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
echo $DBUS_SESSION_BUS_ADDRESS # tuser session path
unix:path=/run/user/1000/bus

```