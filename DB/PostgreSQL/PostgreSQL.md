# PostgreSQL

* Open Source

* [URL](https://github.com/postgres/postgres)

* mainly wrritten in `C`


**Config:**

* `~/.pgpass`
```ini
localhost:5432:database_name:username:password
```
* Docker URL
`postgresql://[user[:password]@]host[:port]/database[?param=value&...]`
    * Host=service name when executing docker.
    * Use docker container's port for port.

`jdbc:postgresql://${localhost_or_ip}:${port}/${database_name}`

## Basic

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

### Users

**User list**
```sql
\du+ -- show user list
SELECT rolname FROM pg_roles;
```
* `psql` is the default super user.

**Delete user**
```sql
DROP ROLE <user_name>;
```

### DB

**DB list**
```sql
\list
SELECT datebasename FROM pg_database;
```
* template0, 1, postgres are default.
* Whatever you create database, it is copied from `template1`.

**connect**
```sql
\c db_name
```

**table list**
```sql
\dt
```

**Change owner**
```sql
ALTER DATABASE "$old_user" OWNER TO "$new_user";
```

**Comments**
* `-- comment` -- psql/SQL comments


**Commands**

```bash
psql -h "$domain_or_IP_address" -p <port_number> -U <username> -d <db_name>
```
* `-c` = command
* `-h` = hostname
* `-f` = excute `.sql` file.
* `-q` = quiet

**Logs**
1. Check `systemctl status` or `docker logs`

2.

```bash
sudo vim /etc/postgresql/17/main/postgresql.conf
```

```ini
logging_collector = on
log_directory = 'log'
log_filename = 'postgresql-%a.log'
```



### Errors

**Constraints Error**

**CASCADE Error**

**ERROR: Unknown constraint error**
* FK is created before the referencing table is created.

### Plug in

* `CREATE EXTENSION`
(Run as super user `postgre`)


| `CREATE EXTENSION pgcrypto;` | Adds cryptographic functions (e.g. UUID generation)  |
| `CREATE EXTENSION citext;`   | Adds case-insensitive text type (`citext`)           |


**PostGis**(Geographic Information System)
```sql
CREATE EXTENSION postgis;
``` 


* Enables geographic data types.

```sql
-- Before
latitude FLOAT
longitude FLOAT

-- PostGIS
coordinates geometry(Point) 

-- 「渋谷から新宿までの距離」を計算
SELECT ST_Distance(
    ST_GeomFromText('POINT(139.7017 35.6595)', 4326)::geography,
    ST_GeomFromText('POINT(139.7006 35.6905)', 4326)::geography
) / 1000 AS distance_km;
```

* tiger: part of PostGIS


### Notes
```
postgres=# -- input OK
postgres-# -- not OK. commonly you forget ;
```
* `'` vs. `"`
  * `"` = Identifier. Capital and Non-Capital letters are distinguished. 
  * `'` =  String Literals

- You cannot use "user" for username 
- PG_PASSWORD
