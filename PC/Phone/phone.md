# phone

* 吸盤と薄いプラスチック製の板で温めながら剥がす。
* 50～80℃
## Parts
* RAM（Random Access Memory）
    * LPDDR = Low Power Double Data Rate

* Wi-Fi

* Blootooth

* Battery
    * Lithium
    * **JST PH 2.0**: 2 pins, 1.25mm pitch, 3.7V
    * **Care explosion**

* Display(touch panel)
    * DSI（Display Serial Interface）or MIPI（Mobile Industry Processor Interface）
    * [URL](https://misoji-engineer.com/archives/raspberry-pi-mipi-dsi.html)
    * ** USB-C DisplayPort Alt Mode**


* SOC(System on a chip)
    * CPU, GPU, NPU, DSP, modem
    * CPU
        * Qualcomm Snapdragon
        * Apple A, M
        * MediaTek Dimensity
        * Google Tensor
        * HiSilicon（Huawei） Kirin

**NPU（Neural Processing Unit**
Accerarate AI, machine learning.

**DSP（Digital Signal Processor**

* Memory
UFS（Universal Flash Storage）
like SSD
FDE：Full Disk Encryption

* iOS
* Android
* LineageOS
* Ubuntu Touch

### MIPI

**Pitch**
30 pins, 0.35mm
22 pins, 0.5mm -- Raspberry Pi
39 pins, 0.3mm -- Tablet

### Addictive

* Touch screen.

* Shape

* High accesibility

* Software

###

* SMS
    * Subscriber Identity Module 
* SIM
    * < 160 Character
    * PDU
    ```
    [SMSC information][PDU type][MR][address][PID][DCS][VP][UDL][UD]
    ```

    * No internet needed.
    * Mini-SIM(2FF): 25mm × 15mm
    * Micro: 15mm × 12mm
    * Nano:  12.3mm × 8.8mm

### PDU
SMSC = SMS center information like xx xx [+xx] 
PDU type: 01 = send
MR(Message Reference): Normally 00
Address:length[type][number] 
    * e.g. 090-1234-5678 = 11 81 09 01 32 54 76 F8
        # make a pair and swap
        # for odd number add F
PID (Protocol Identifier): Normally 00
DCS (Data Coding Scheme)
VP (Validity Period): AA = 4 days
UDL (User Data Length)
UD (User Data)

### G(Generation)
1: analogue
2,3: no support
4: LTE(Long Term Evolution)
5


**Cellular Modem (Baseband Processor)**
a chip that handles communication with cellular networks.


### APN (Access Point Name) 
* Address setting to connect
* Like domain.com
### Phone Call
Listen copy of other's voice.
* Mobile Phone Connection
    * Wireless signal
* Landline connection
    * Optical fiber、Copper wire

### DTMF(Dual-Tone Multi-Frequency)
1 = 697Hz + 1209Hz

### AT command
AT = ATtension
AT+
* D // Dial
* A // reply phone call
* CMGS  // SMS send
* CGDCONT  // data connection
[URL](https://zenn.dev/bearmini/books/12ebf8331d6f9ea1d90d)

### Router vs. Modem vs ONU
* Router
    * Distribute the network.
* Modem(modulator-demodulator)
* ONU(Optical Network Unit)


### Mobile WIFI(Pocket WIFi= Proper noun like tupperware )


### Wi-Fi designation


### VoIP, IP phone call
* difficult to identify location
* Voice over Internet Protocol

### GSM（Global System for Mobile Communications)


### 先行例
* [URL_fix](https://sonohen.life/fix_iphone_by_yourself/)
* [URL_custom_phone](https://fabscene.com/new/make/galaxy-z-flip-blackberry-keyboard-mod-diy-smartphone/)
