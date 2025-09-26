
```bash
jq '.name' config.json # extract value with key name
jq . config.json # format json
jq '.name = "newName"' old.json > new.json
# do not need to escape . inside name and newName
```