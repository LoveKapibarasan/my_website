## Hardware (PHY: Physical Layer)

**NIC(Network Interface Card)**
Component to receieve frames.
Frame is written by DMA（Direct Memory Access）

**Wifi (wlan<n>)**
* <n>th network interface in PC
* electromagnetic wave = elektromagnetische Welle
1. LNA: Low Noise Amplifier
2. Filtering
3. Demodulation
4. Analogue/Degital Conversion 

*An antenna is a device that converts electromagnetic waves in space into electrical signals=Eine Antenne ist ein Gerät, das elektromagnetische Wellen im Raum in elektrische Signale umwandelt.*

**Ethernet (eth<n>)**
* voltage change　= Spannungsänderung

5. Make a MAC frame
    Wifi: IEEE 802.11
    Ethernet: Ethernet

### Kernel

### Date Link Layer

1. Convert into **skb（socket buffer）struct.**

2. Perse header and check the MAC address to see if it is addressed to oneself.
Forward it in bridge mode


### Network Layer

1. Decide protocol and pass to higher (e.g. TCP/UDP) layer