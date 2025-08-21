
* [URL](https://github.com/postgres/postgres)

* mainly `C`
# Basic

```bash
sudo systemctl enable postgresql --now

sudo -u postgres psql # become the postgres user and enter in psql
-- Create user with password
CREATE USER username WITH PASSWORD 'password';

-- Create database
CREATE DATABASE db_name OWNER username;


-- quit
\q
```

## Users

### User list
```sql
\du+ -- show user list
SELECT rolname FROM pg_roles;
```

* `psql` is the default super user.

### Delete user
```sql
DROP ROLE <user_name>;
```

## DBs

### DB list
```sql
\list
SELECT datname FROM pg_database;
```
### table list

```sql
\dt
```

* template0, 1, postgres are default.

### Change owner

```sql
ALTER DATABASE <old_user> OWNER TO <new_user>;
```


## Comments

* `--` -- psql/SQL


## Connection

```bash
psql -h <IP_address> -p <port_number> -U <username> -d <db_name>
```

* 127.0.0.1 = localhost

## TCP IP connection setting

```bash
postgresql.conf in etc
# and  listen_addresses = '*', port_number = 

pg_hba.conf in etc
# IPv4 local connections:
# host    all             all             127.0.0.1/32           scram-sha-256 or md5(older)

```

## Logs
1. Check systemmd

2.

```bash
sudo vim /etc/postgresql/17/main/postgresql.conf
```

```conf
logging_collector = on
log_directory = 'log'
log_filename = 'postgresql-%a.log'
```

```bash
sudo -u postgres psql -c "SHOW data_directory;"

#  relative to postgre data_directly
sudo -u postgres psql -c "SHOW log_directory;"
sudo -u postgres psql -c "SHOW log_filename;"
```

# Memo
```
postgres=# -- input OK
postgres-# -- not OK
```

**ERROR: Unknown constraint error**
* FK is created before the referencing table is created.

# Plug in

* `CREATE EXTENSION`
(Run as super user)

| Command                      | What it enables                                      |
| ---------------------------- | ---------------------------------------------------- |
| `CREATE EXTENSION postgis;`  | Enables geographic data types like `geometry(Point)` |
| `CREATE EXTENSION pgcrypto;` | Adds cryptographic functions (e.g. UUID generation)  |
| `CREATE EXTENSION citext;`   | Adds case-insensitive text type (`citext`)           |
