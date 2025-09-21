

**ISA (Instruction Set Architecture)** 
* Instruction Set that software can use.

## x86 / x86-64 (Intel, AMD)


* **MMX (1996, Intel)**
  The first SIMD extension (64-bit). Now mostly obsolete.

* **SSE (Streaming SIMD Extensions)**
  SSE (128-bit floating point), SSE2 (integer support), SSE3, SSSE3, SSE4… improved step by step.
  → Dominated multimedia, gaming, and scientific computing for a long time.

* **AVX (Advanced Vector Extensions, 2011)**
  256-bit SIMD. Enhanced floating point operations.

* **AVX2 (2013)**
  Extended AVX to integer operations and gather instructions. Widely used in scientific computing, cryptography, and AI workloads.

* **AVX-512 (2017–)**
  512-bit SIMD. Very powerful for AI and HPC, but high power consumption. Adoption is limited (Intel Xeon, some Core CPUs).

  * Has multiple subsets for specific purposes (AVX-512F, AVX-512BW, AVX-512DQ, VNNI, BF16, etc.).

* **Other specialized extensions**

  * AES-NI (accelerates AES encryption)
  * FMA3 (Fused Multiply-Add, speeds up numerical computing)
  * BMI1/2 (bit manipulation instructions)
  * TSX (transactional memory)

---

## ARM (ARMv7, ARMv8, ARMv9)

Used in smartphones, Apple M-series, and servers like AWS Graviton.

* **NEON (since ARMv7)**
  128-bit SIMD. Roughly equivalent to SSE–AVX2 in x86.
  → Widely used in multimedia processing and machine learning.

* **SVE (Scalable Vector Extension, ARMv8.2-A–)**
  Variable-length SIMD (128–2048 bits depending on implementation). Targeted at HPC and AI.

  * Used in "Fugaku" (Japanese supercomputer).

* **SVE2 (ARMv9)**
  Generalizes SVE further. Strengthens integer and cryptographic operations.

* **Crypto Extension**
  Accelerates AES and SHA.

---

## Apple Silicon (M1, M2, M3…)

ISA based on ARMv8/ARMv9.

* Compatible with **NEON**.
* Also has Apple’s proprietary **AMX (Apple Matrix Coprocessor)**, very powerful for machine learning.

---

## RISC-V

A new open ISA.

* **RVV (RISC-V Vector Extension)**
  Similar to ARM’s SVE, supports variable-length vectors.
* **Crypto extensions**, **Bitmanip extensions**, and others are modular.

---


* **x86**: MMX → SSE → AVX → AVX2 → AVX-512
* **ARM**: NEON → SVE → SVE2
* **Apple**: ARM-based + proprietary AMX
* **RISC-V**: RVV (vector extension)

### CPU Cooler

* Sometimes CPU cooler does not match motherboard although CPU does.

**Heat Sink**

* A heat sink is a block of metal (usually aluminum or copper) attached to components that generate heat (like the CPU, GPU, or chipset).
* Its purpose is to absorb the heat and dissipate it into the surrounding air.
