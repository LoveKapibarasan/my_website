# Motherboard
[URL](https://www.sycom.co.jp/media/archives/2012/)

* ATX（305 × 244 mm）(Advanced Technology Extended)

* Micro-ATX（mATX）（244 × 244 mm）

* Mini-ITX（170 × 170 mm）

### manifacturer
* ASUS
* ASRock 
* GIGABYTE
* MSI

### Asus

**ASUS Motherboard Model Naming – Basic Structure**

(Example: ASUS ROG STRIX B550-F GAMING WIFI II)

1. Brand Line

* ROG (Republic of Gamers) → Flagship gaming brand

* ROG STRIX → Slightly below ROG, but still high-end gaming focused

* TUF Gaming → Durability and stability focused, good cost-performance
* PRIME → Basic line
* ProArt → Aimed at creators (video, design work)
* WS (WorkStation) → Professional workstation use

2. Chipset Name

* Intel: H610 / B660 / Z690 / Z790, etc.

* AMD: A520 / B550 / X570, etc.
→ Indicates CPU generation and performance tier

3. Model Number + Suffix
**Suffix**
* F/E = ATX (full-size)
* A = Slightly lower-end variant
* I = Mini-ITX (small form factor)
* H = Micro-ATX
* GAMING = Gaming-oriented design (reinforced power delivery, RGB, extra features)

4. Additional Features
* Wi-Fi / WIFI6 / WIFI II → Includes onboard wireless LAN
* II / V2 → Updated revision/version


### Wifi

* Wired LAN (RJ45 port).

* Wi-Fi depends on the specific model.


### Pcle generation, number of lanes

* PCIe 3.0 x4 → about 3,500MB/s

* PCIe 4.0 x4 → about 7,000MB/s

* PCIe 5.0 x4 → about 10,000MB/s

### SATA
* SATA 6.0 Gb/s is standard.

### Port
* TPM：Trusted Platform Module（security tip）

* F_AUDIO: Front panel audio header (for case headphone/microphone jacks).

* LINE_OUT: Line-out jack (to speakers or amplifier).

* MIC_IN: Microphone input jack.

* SPK_OUT: Speaker output

* LVDS(Low Voltage Differential Signaling) 
    * for display connection.
    * faster than LGB.

### Check

* CPU support


* BIOS update

### RAM support
    * DDR4 or DDR5.



### Chip Set
**North + South**
* Older
1. North
**Memory Controller Hub**
* Connect CPU with high end component like GPU or memory
2. South
**I/O Controller Hub**

**CPU + PCH**
* Newer
1. CPU
**Intel chipsets**
`Xnnn`
`H` = Entry-level
`B` = Mid-range
`Z` = High-end
`W` = work station
`Q` = Business

**AMD chipsets**
`A` = Entry-level
`B` = Mid-range
`X` = High-end

2. PCH（Platform Controller Hub）



### PSU

* **Desktop**: +3.3V、+5V、+12V 
* **Notebook**: 19V（≒20V）


### F_PANEL

* Necessary to turn on.
```
Pin numbers →     1         3           5        7   9
                ------------------------------------------
Top row        | PWR_LED+ | PWR_LED- | PWR_BTN | NC | NC |

Bottom row     | HDD_LED+ | HDD_LED- | RESET   | NC | NC |
                ------------------------------------------
Pin numbers →     2         4           6        8   10
```

**PWR_LED+ / PWR_LED-**
→ Power LED on the case front panel (has polarity: + / -).

**HDD_LED+ / HDD_LED-**
→ Hard drive / SSD activity LED (has polarity: + / -).

**PWR_BTN**(PWR_SW)
→ Power button (turns system ON/OFF) if two pin is connected.

**RESET**
→ Reset button (forces reboot).

**NC**
→ Not connected (unused pins).

### Notes

**OC(Over Clock compatibility)**

* If the **DC_PWR** plug won’t fit because of the I/O shield tab, it’s okay to bend or even remove that tab only. 
* For other ports like USB, LAN, or HDMI, it’s best to leave the tabs in place since they help with grounding/shielding.



