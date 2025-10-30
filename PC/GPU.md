
## VRAM(Virtual RAM)
* High-end: 8~12GB
* like CPU cache.

# NVIDIA

* GeForce(Geometric Force) GTX(Giga Texel Shader eXtreme)(~2018)/ RTX(Ray Tracing Texel eXtreme)
* Quadro(4つの) / RTX A: for professonal artist
* Tesla / A100 / H100: data center


### NVIDIA GeForce

**RTX/GTX + GEN + Grade** 
e.g. RTX 4090 = RTX | 40 | 90 = Gen 0 | Grade 0  

* **Ti** = Titanium is better
* **Super**

RTX 50 (2025)
RTX 40（2022〜）- Ada Lovelace
RTX 30（2020〜）- Ampere
RTX 20（2018〜）- Turing
GTX 10xx（2016〜）- Pascal
GTX 200 ~ 900

**Tensor Core**
* RTX
* Faster matrix calcuration


# AMD（Advanced Micro Devices）

* Radeon(「Radiance（輝き）+eon（粒子）」)

**RX + GEN + Grade** 

RX 9000 (2025)
RX 5000 (2019)
RX Vega (2017)
RX 400/500 (2014/2015)


* Radeon PRO
* Instinct

# Intel

* Arc=弧、軌跡、アーチ(2022~)
* Iris Xe
* Data Center GPU Flex / Max


# 3dfx Voodoo(~1990)
* now in Nvidia

### Score
1. **3DMark**
[URL](https://www.3dmark.com/search)
Example:
RTX 4090: 36,000
RTX 4080: 28,000

2. Geekbench

3. Test
```bash
sudo apt install glmark2
glmark2
```


### TDP（Thermal Design Power）
* RTX 4090: 450W
* RTX 4080: 320W


### iGPU( Integrated GPU)

* 3d Mark arpund 2000

### Check

```bash
vulkaninfo --summary
```



### eGPU(external GPU)

* eGPU,  box
* Thunderbolt 3/4 port(like USB -C but not USB -C)

* → 15-30% Grade down
* high cost

**Thunderbolt 4**
* by Apple.
* Thunderbolt (TB)、USB-C、Mini DisplayPort
**Oculink**
* PCI Express（PCIe）base external connector.
* NVMe M.2 -> Oculink



### Size
**Length**
1. Full Length -- 25～28cm
1. Half-length -- 13～15cm
1. Low-profile


**Slot**
x16(Full), x8, x4, x1

### computing

* CUDA (Compute Unified Device Architecture)
* Intel oneAPI: CUDA in Intel Arc
* TensorRT: Nivdia
    * Convert AI model faster
    * 精度削減（Precision Calibration）, Layer Fusion
    * GTX 1650/1660: OK, No Tensor Core
    * GTX 1080 ??
* MIGraphX: Radeon TensorRT. Limited support
* Rocm(Radeon Open Compute): 
    * Open Source, PyTorch, TensorFlow, ONNX. Compile CUDA code
* CuDNN (CUDA Deep Neural Network library): 
    * for deep lerning. Used on PyTourch, TensorFlow