
```bash
jq '.name' config.json # extract value with key 'name'
jq '.[0]' file.json # Array
jq . config.json # format json
jq '.name = "newName"' old.json > new.json
# do not need to escape . inside name and newName
```


### Aggregate
```bash
# Min Max
echo '[5, 2, 8, 1, 9]' | jq 'min'
# ,ap(expression)
echo '[{"a": 1, "b": 2}, {"a": 3, "b": 4}]' | jq 'map(.a + .b)'
# select(condition)
echo '[1, 2, 3, 4, 5]' | jq 'map(select(. > 2))'
# jq internal pipe
jq '.a | .b | .c'
```
