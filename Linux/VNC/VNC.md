# VNC (stands for Virtual Network Computing)
* a remote desktop technology that allows you to operate another computer with a graphical display over a network.

* **Server side (the controlled machine):** Runs VNC server software to share its screen.

    * vncserver :1(:1 = display number) 
    * Set password
    * Port Forwarding
    * Open port (Default: TCP 5900. Display 1:5901)
        ```bash
        sudo ufw allow 5900:5999/tcp
        ```

* **Client side (the controlling machine):** Uses a VNC viewer (client) to connect to the server and operate it.

### Wayland

* wayvc


### Tailscale 
* allow to join virtual LAN from different LAN.