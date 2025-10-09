# Motherboard
[URL](https://www.sycom.co.jp/media/archives/2012/)

* ATX（305 × 244 mm）

* Micro-ATX（mATX）（244 × 244 mm）

* Mini-ITX（170 × 170 mm）

### manifacturer
* ASUS
* ASRock 
* GIGABYTE
* MSI

## GIGABYTE

### Basic Structure of GIGABYTE Motherboard Model Numbers

Example: GIGABYTE B550 AORUS ELITE AX V2

1. Chipset name (B550, X570, Z690, etc.)

The first letter indicates the series / target tier:

* A = A-series (entry level, for Ryzen: A320, A520)

* B = B-series (mid-range: B450, B550)

* X = High-end (X370, X570)

* Z = High-end for Intel (Z590, Z690, Z790)

* H = Low-end for Intel (H510, H610)

The numbers correspond to the generation or supported CPU generation.

2. Brand name

* AORUS = GIGABYTE’s gaming brand. RGB lighting, reinforced power delivery, flashier design.

* Ultra Durable (UD) = Durability focused. Cost-effective and stable.

* Gaming X / Gaming = Gaming-oriented but simpler and cheaper than AORUS.

3. Model name (ELITE, PRO, MASTER, XTREME, etc.)

Indicates the tier within the same chipset line:

* ELITE = Lower tier

* PRO = Mid tier

* MASTER = Upper tier

* XTREME = Flagship / top tier

4. Suffixes (feature indicators)

* AX = Built-in Wi-Fi 6 (AX)

* V2 = Version 2 (revised model)

* M = micro-ATX form factor

* I = mini-ITX form factor

* DS3H / D3H = Older naming convention, entry-level

* K = Indicates a special feature or cost-reduced version (e.g., A520M K V2)



## Asus

**ASUS Motherboard Model Naming – Basic Structure**

(Example: ASUS ROG STRIX B550-F GAMING WIFI II)

1. Brand Line

* ROG (Republic of Gamers) → Flagship gaming brand

* ROG STRIX → Slightly below ROG, but still high-end gaming focused

* TUF Gaming → Durability and stability focused, good cost-performance

* PRIME → Basic line, minimal features, affordable

* ProArt → Aimed at creators (video, design work)

* WS (WorkStation) → Professional workstation use

2. Chipset Name

* Intel: H610 / B660 / Z690 / Z790, etc.

* AMD: A520 / B550 / X570, etc.
→ Indicates CPU generation and performance tier

3. Model Number + Suffix

* -F / -E / -A / -I / -H, etc.

* F/E = ATX (full-size)

* A = Slightly lower-end variant

* I = Mini-ITX (small form factor)

* H = Micro-ATX

* GAMING = Gaming-oriented design (reinforced power delivery, RGB, extra features)

4. Additional Features

* Wi-Fi / WIFI6 / WIFI II → Includes onboard wireless LAN

* II / V2 → Updated revision/version


### Wifi

* Wired LAN (RJ45 port) is always standard.

* Wi-Fi depends on the specific model.


## Pcle generation, number of lanes

* PCIe 3.0 x4 → about 3,500MB/s

* PCIe 4.0 x4 → about 7,000MB/s

* PCIe 5.0 x4 → about 10,000MB/s


## Port
* TPM：Trusted Platform Module（security tip）

* F_AUDIO: Front panel audio header (for case headphone/microphone jacks).

* LINE_OUT: Line-out jack (to speakers or amplifier).

* MIC_IN: Microphone input jack.

* SPK_OUT: Speaker output

* LVDS(Low Voltage Differential Signaling) 
    * for display connection.
    * faster than LGB.

## Check

* CPU support

* SATA or PCIe

* BIOS update

* RAM support
    * DDR4 or DDR5.


* **Dead on Arrival**
0.5% ~ 2%.

### Tabs
* If the **DC_PWR** plug won’t fit because of the I/O shield tab, it’s okay to bend or even remove that tab only. 
* For other ports like USB, LAN, or HDMI, it’s best to leave the tabs in place since they help with grounding/shielding.


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

**PWR_BTN**
→ Power button (turns system ON/OFF).

**RESET**
→ Reset button (forces reboot).

**NC**
→ Not connected (unused pins).
