# Memo

* Real-Time Clock -- nonvolatile timer

* Switch bot or motor

* Wi-Fi module

* Charger
[Link](https://www.allaboutcircuits.com/projects/create-an-arduino-controlled-battery-charger)




##  Switch vs. Resistor Orientation

* **Switches (e.g., tactile push buttons)** have internal pairs of pins connected. Pins on the same side are connected; pressing connects both sides. Place the switch so that the **input pin and ground are connected across opposite sides**, not along the same side.
* **Resistors** are not polarized: they work in either direction. Orientation does not matter.

##  Resistor Color Bands

4-band code:

* Band1: 1st digit
* Band2: 2nd digit
* Band3: Multiplier (×10^n)
* Band4: Tolerance

Example: Red–Violet–Brown–Gold → 27 ×10¹ = **270Ω ±5%**

## Serial.begin(9600)

* `Serial.begin(9600);` starts serial communication at 9600 bps.
* Without it, `Serial.print()` will not output.
* Use Serial Monitor (baud 9600) in Arduino IDE to see logs.
