# CUPS (Common UNIX Printing System)

**Printer Management**

`http://localhost:631/admin`
1. Login with local account.
2. Enter printer information

**!! Kill VPN!!**

```bash
lpstat -p -d # Printer List
lp -d "$printer_name" "$file"
# -d option needs the printer name immediately after it 
# -o sides=two-sided-long-edge
# -o sides=two-sided-short-edge

# Job List
lpstat -o

# Cancel All
sudo cancel -a "$printer_name"

# Check Printer State
lpstat -p "$printer" -l

# See the printer state
lpstat -t
lpstat -p "$printer"

# Restart
cupsenable "$printer_name"
```


### 長辺綴じ (Long Edge / 本綴じ)

```
┌─────┐    ┌─────┐
│  1  │ →  │  2  │
│     │ ←  │     │ (この辺で綴じる)
└─────┘    └─────┘
```

### 短辺綴じ (Short Edge / カレンダー綴じ)
```
┌─────────┐
│    1    │ ← この辺で綴じる
└─────────┘
     ↓
┌─────────┐
│    2    │
└─────────┘
```

### Internet Printing Protocol (ipp)

* HTTP/HTTPS-based - Uses the same technology as the web
* Cross-platform - Supported on Windows, macOS, Linux, smartphones, etc.
* Driverless - In most cases, no special drivers required
* Encryption support - Secure printing using HTTPS

# HP
## HPLIP (HP Linux Imaging and Printing)
