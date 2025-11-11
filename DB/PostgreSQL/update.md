## An old version of the database format was found.
1. [URL](https://wiki.archlinux.org/title/PostgreSQL#Upgrading_PostgreSQL)

2. 
```bash
sudo rm -rf /var/lib/postgres/data
sudo -u postgres initdb -D /var/lib/postgres/data
```

### Data directory

* CentOS/RHEL
`/var/lib/pgsql/data`
* Debian/Ubuntu
`/var/lib/postgresql/<version>/main`
* Arch Linux
`/var/lib/postgres/data`

```bash
psql -U postgres -c "SHOW data_directory;"
```

1. PG_VERSION: contains only version number
2. base: contains data
