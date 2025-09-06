## GPU Accerelation Setting

0. Check GPU
```bash
lspci | grep -E "VGA|3D"
```


1. Packages(mesa)

```bash
sudo pacman -Syu mesa lib32-mesa vulkan-intel vulkan-radeon lib32-vulkan-intel lib32-vulkan-radeon
# Check
glxinfo | grep "renderer"
vulkaninfo | grep "deviceName"

```

> Arch 32bit install
```bash


```

## WebGL (Web Graphics Library)

* WebGL is a JavaScript API for rendering 2D and 3D graphics in the

**Firefox**

2-1. `about:config` → 

webgl.disabled → false

webgl.force-enabled → true

layers.acceleration.force-enabled → true

2-2. `about:support`

3. Check
[Check URL](https://get.webgl.org/)