```bash
# 1. Get GPG key
curl -fsSL https://example.com/repo.gpg | sudo gpg --dearmor -o /usr/share/keyrings/example-archive-keyring.gpg

# -dearmor = binary not ASCII Armor
# -o = output file

# 2. Add to source.list.d
echo "deb [signed-by=/usr/share/keyrings/example-archive-keyring.gpg] https://example.com/apt stable main" | sudo tee /etc/apt/sources.list.d/example.list
## /etc/apt/sources.list.d/*.list is better for this purpose
# 3. Update index 
sudo apt update

# 4. Install
sudo apt install example-package
```
