```bash
yay -S nordvpn-bin
yay -S nordvpn-gui  # Optional

# Add user to group and reboot:

sudo usermod -aG nordvpn $USER
sudo reboot

# Enable daemon:

sudo systemctl enable --now nordvpnd.service

# Log in via CLI (web callback or token):

nordvpn login

# Connect and configure:

nordvpn connect <country_code>
nordvpn status
nordvpn disconnect

nordvpn set technology NordLynx # fastest
nordvpn set dns 1.1.1.1 8.8.8.8

nordvpn set killswitch off
nordvpn set threatprotectionlite off

nordvpn set autoconnect on <country_code>
```