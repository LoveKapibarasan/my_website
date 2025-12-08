

* Cannot delete, move, write, create a link.

* stronger than rm `-f`.
```bash

sudo chattr +i filename

# check
lsattr filename

sudo chattr -i filename
```