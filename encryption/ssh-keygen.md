



```bash
ssh -i $path_to_key ${username}@${hostname_or_IP}
# Remove from  known_hosts(History)
ssh-keygen -R $hostname_or_IP
```