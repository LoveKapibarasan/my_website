### SSH Connection
```bash
hostname -I 
ssh pi_or_user_name@<ip_address>
```
```bash
sudo raspi-config
```
`→ Interface Options → SSH → Enable`

* Should be in the same network.

* mozc `Ctrl`+ `<Space>`

### Notes

* Chronium does not support Japanese input.

* Use fcitx for Japanese input.

* No suspend exist.

* Use USB that consists of 4 lines for display.

* RasberryPi do not have ear phone jack.

* http access for internet connection.

* `sudo raspi-config`

### Display

* Micro HDMI(Type-D)

* Noise from the HDMI cable or the monitor’s circuitry can interfere with **the 2.4 GHz Wi-Fi band**.
1. Change 5 GHz band


* **DSI(Display Serial Interface)**
for smartphone, tablet.

* **HDMI(High-Definition Multimedia Interface)**
Can transmit video and audio digitally at the same time


* **SoC = System on a Chip**
    * A System on a Chip (SoC) integrates the CPU, GPU, memory controller, USB, Ethernet, HDMI, and other peripheral functions into a single semiconductor chip. 
    * The HDMI controller and the USB controller may share the same power rail or clock source. As a result, when an HDMI hot-plug detection (HPD) event occurs, the entire bus may be reinitialized.


### Raspberry 5

CPU: ARM Cortex-A76 (ARMv8.2-A, 64bit, OoO)
* 2.4GHz
* 4 core
* Geek bench score 
900(Single) 3700(Multi)
* Intel Core i5-6300U
* like a note pc in 2016〜2018



#### Dangerous

* "Exposing it to static electricity" 
* "Refresh it by unplugging it directly." 

## Geek bench score

* closs plattform indicator.

**iPhone 14 Pro (A16 Bionic)**

Single：about 2500

Multi：about 6300

**Intel Core i5-1240P (Note PC)**

Single： about 1700

Multi：about 8500


