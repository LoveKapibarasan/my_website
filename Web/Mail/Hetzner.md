# Hetzner

CPX21: €7.59/Month (~¥1,280)
- 3vCPU (AMD EPYC)
- 4GB RAM
- 80GB NVMe SSD
- 20TB Traffic
- Ubuntu is better.

1. SSH connection

```bash
ssh-keygen -t ed25519 -C "$mail_address"

# Use this
cat ~/.ssh/id_ed25519.pub

# Connect

ssh "root@${ip}"

apt update
apt upgrade -y

timedatectl set-timezone "$time_zone"

apt install -y vim curl wget git ufw fail2ban

# Firewall 
ufw allow 22/tcp    # SSH DO NOT FORGET TO ALLOW SSH 
ufw allow 80/tcp    # HTTP
ufw allow 443/tcp   # HTTPS
ufw enable          

ufw status

curl -s https://mailinabox.email/setup.sh | sudo bash
