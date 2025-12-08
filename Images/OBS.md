# Open Broadcaster Software 

* Open source

* requires pipewire

* [Github](https://github.com/obsproject/obs-studio)


**Stream Key**
* Like application interface key to YouTube Live、Twitch、Facebook Live


**Streaming**
* A method of delivering audio, video, and other data by receiving **small chunks of data** continuously and playing them back, rather than downloading the entire file first. UDP protocol.


### Menus

1. **Scene**
* Screen , Audio components.
    * Window Capture / Screen Capture = Slide, Screen
    * Video Capture Device = Web Camera
    * Media Source = Prepared files
    * Audio Input Capture = Mike
    * Audio Output Capture = System Sound

2. **Sources**

* Screen layout.

3. **Audio Mixier**

* Adjust audio.


### Config

```bash
obs # open obs-studio
~/.config/obs-studio/logs | head -n 1 # get recent log file name

# Restart pipewire
systemctl --user start pipewire
```