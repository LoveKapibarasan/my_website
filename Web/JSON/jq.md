# JQ
* JSON operations

* `-r`: raw output(without ")

```bash
jq '.name' "$config".json # extract value with key 'name'
jq '.name_1.name_2' "$config".json # extract recursively
jq -r '.array[].xx' # Loop. Output xx is separated with \n

jq '.[0]' file.json # Array
jq . config.json # format json
jq '.name = "newName"' old.json > new.json
# do not need to escape . inside name and newName
```
`left // right`: if left is empty, execute right
`empty`: Output nothing

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
