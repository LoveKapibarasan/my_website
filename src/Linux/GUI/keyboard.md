# Keyboard


## 1. Signals from the hardware

* A keyboard generates a **scan code** whenever a key is pressed or released.
* The format of the scan code depends on the device type, e.g., PS/2 keyboards or USB HID (Human Interface Device) keyboards.

PS/2 (Personal System/2)
---

## 2. Kernel (Device driver layer)

1. **The driver receives the scan code**

   * For example, the `atkbd` driver handles PS/2 keyboards, while the `usbhid` driver handles USB keyboards.
2. The kernel converts the scan code into a **key code**.

   * A key code is a standardized number representing the physical key inside the OS.
   * For example: `KEY_A`, `KEY_ENTER` (defined in `/usr/include/linux/input-event-codes.h`).

---

## 3. Input subsystem (`/dev/input/event*`)

* The Linux **input subsystem** provides a unified framework for handling input devices (keyboard, mouse, joystick, etc.).
* Each device appears as a character device like `/dev/input/eventX`.
* Key events are passed from the kernel to user space as a `struct input_event`:

  ```c
  struct input_event {
      struct timeval time; /* Time of the event */
      __u16 type;          /* Type of event (EV_KEY, EV_REL, etc.) */
      __u16 code;          /* Key code (e.g., KEY_A, KEY_ENTER) */
      __s32 value;         /* Value (press=1, release=0, autorepeat=2) */
  };
  ```

---

## 4. Console / TTY layer

* In virtual terminals (VTs), key codes are translated into **character codes** (ASCII, Unicode).
* This conversion uses **keymaps** (`/usr/share/kbd/keymaps/`).
* At this stage, modifier keys such as Shift, Alt, and CapsLock are applied to produce the final character.

---

## 5. User space (X11 / Wayland)

* In graphical environments, additional keyboard processing takes place:

  * In Xorg, the **X Keyboard Extension (xkb)** maps key codes to key symbols (e.g., `XK_A`).
  * In Wayland, the same function is performed by `libxkbcommon`.

## 6. IME(Input Method Editor) framework

    * a software layer that enables multilingual input.

    * e.g. ibus, fcitx5

---

