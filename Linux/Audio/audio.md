### Kernel 

**ALSA（Advanced Linux Sound Architecture）**
 
* responsible for communication with the hardware. = für die Kommunikation mit der Hardware zuständig.

* Audio driver.

* The replacement model of OSS = Nachfolgemodell von OSS
    * OSS (Open Sound System)



### User Space

**PulseAudio**

**JACK (Jack Audio Connection Kit)**

* used for professional purpose.

* low latency

**PipeWire**
* replace PluseAudio and Jack


* The layer that runs on top of ALSA and allows applications to use audio comfortably. = Die Schicht, die auf ALSA läuft und es Anwendungen ermöglicht, Audio komfortabel zu nutzen.


## SOF (Sound Open Firmware)
* Mainly used with Intel SoCs / integrated audio (HDA, ASoC, from Tiger Lake onward). = Wird hauptsächlich mit Intel-SoCs / integrierter Audiohardware (HDA, ASoC, ab Tiger Lake) verwendet.


### FSB (FMOD Sound Bank)
* Extension: `.fsb`.
* Video game audio.
* Multiple audio files compressed into a single bank file
