# phone

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


### Parts
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
* modulator-demodulator
* Optical Network Unit

### Hub
* split ethernet

### Mobile WIFI(Pocket WIFi= Proper noun like tupperware )


### Wi-Fi designation


### GSM（Global System for Mobile Communications)
