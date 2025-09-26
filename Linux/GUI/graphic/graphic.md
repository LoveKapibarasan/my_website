
### Hardware

* receieves `framebuffer`.

**Framebuffer**
a memory region that stores the colors of all pixels on the screen in sequence. = ein Speicherbereich, der die Farben aller Pixel des Bildschirms in Reihenfolge speichert.

**pixel = picture element**
1. Color(RGB)(Red, Green, Blue)
2. Position
Corresponds to the coordinates (x, y) = Entspricht den Koordinaten (x, y)

**Resolution**
1920×1080 = 1920 pixels × 1080 pixels 

Full HD (1920×1080)
4K (3840×2160)
8K (7680×4320)

**x-bit color**

* 1 bit = white or black
* 8 bit = 256 color
> When RGB, 256 * 256 * 256 = 16,777,216 combination colors

**a**
= Alpha
opacity / transparency = Durchsichtigkeit

### Kernel


**Framebuffer (fbdev)**

* In the past, it could write pixels directly to device files like `/dev/fb0`.


**DRM/KMS (Direct Rendering Manager / Kernel Mode Setting)**

### User space

**Protocol**

    **Wayland**
        * A new protocol developed as the successor to X11.
        * The application renders a finished image (buffer) by itself and hands it over to the compositor → the compositor combines everything and displays the final screen. = Die Anwendung rendert selbst ein fertiges Bild (Buffer) und übergibt es an den Compositor → der **Compositor** setzt alles zusammen und zeigt das Endbild an.
        * Implementation: **`libwayland`**

    **x11**
        * The traditional window system.
        * The application sends commands like “draw a line” or “draw text” to the X server → the X server performs the actual drawing. = Die Anwendung schickt Befehle wie „zeichne eine Linie“ oder „zeichne Text“ an den X-Server → der **X-Server** übernimmt die eigentliche Darstellung.
        * Wrapper for app to send instruction: **`Xlib`, `XCB`**

**compositor**
* A program that combines the drawing results (buffers) of multiple applications to create the final screen. = Ein Programm, das die Darstellungsresultate (Buffer) mehrerer Anwendungen zusammensetzt, um den endgültigen Bildschirm zu erzeugen.
* Compiz, Compton, Mutter, KWin　in X11
* hyplrand, sway, tinyWM in Wayland
* Compositor = Windows Manager in Wayland

### Rendering libraries

* `Cairo or Skia` (used by Chrome): 2D rendering libraries.

* `OpenGL / Vulkan`: 3D graphics APIs, directly leveraging the GPU for high-performance rendering.

* `EGL`: Bridges OpenGL ES and window systems (X11, Wayland, DRM, etc.).


### Commands

```bash
xrandr # x11

ls /sys/class/drm # kernel level
# drm = Direct Rendering Manager

# wayland: depend on GUI
```

### Memo

**Xwayland**
    to use x11 application on wayland.