## OS
**Raspi Imager**
* Debian
* Ubuntu

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

* 2 * Micro HDMI(Type-D), DSI

* Noise from the HDMI cable or the monitor’s circuitry can interfere with **the 2.4 GHz Wi-Fi band**.
1. Change 5 GHz band


* **DSI(Display Serial Interface)**
for smartphone, tablet.

* **HDMI(High-Definition Multimedia Interface)**
Can transmit video and audio digitally at the same time


* **SoC = System on a Chip**
    * A System on a Chip (SoC) integrates the CPU, GPU, memory controller, USB, Ethernet, HDMI, and other peripheral functions into a single semiconductor chip. 
    * The HDMI controller and the USB controller may share the same power rail or clock source. As a result, when an HDMI hot-plug detection (HPD) event occurs, the entire bus may be reinitialized.


### Raspberry 5(2023.10.~)
 
**CPU:**
* ARM Cortex-A76 (ARMv8.2-A, 64bit, OoO)
* 2.4GHz
* 4 core
* Geek bench score 
900(Single) 3700(Multi)
* Intel Core i5-6300U
* like a note pc in 2016〜2018

**RAM** 
* 4GB / 8GB 
* LPDDR4X

**GPU**
* VideoCore VII

**PCLe**
PCIe 2.0 x1

**Wifi**
* Gigabit Ethernet
* Wi-Fi 6
* Bluetooth 5.0

**GPIO（General Purpose Input/Output）**
* 40 pins.

**Power**
* USB-C
* 5V/3A
* Max 8W

#### Dangerous

* Exposing it to static electricity 
* Refresh it by unplugging it directly."




