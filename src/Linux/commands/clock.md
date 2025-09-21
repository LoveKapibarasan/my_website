```bash
date
```
## RTC
* `hwclock`
Display the current hardware clock time.

* `hwclock --show`
Show the hardware clock time (same as running hwclock alone).

* `hwclock --set --date="YYYY-MM-DD HH:MM:SS"`
Manually set the hardware clock time.

* `hwclock --hctosys`
Sync hardware clock → system clock.
(Commonly done at system boot)

* `hwclock --systohc`
Sync system clock → hardware clock.
(Often done after adjusting the system clock via NTP)

* `hwclock --utc`
Treat the hardware clock as UTC.
(Recommended on Linux)