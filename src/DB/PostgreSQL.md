

```bash
sudo systemctl enable postgresql --now
```

```bash
sudo -u postgres psql 
-- Create user with password
CREATE USER username WITH PASSWORD 'password';

-- Create database
CREATE DATABASE db_name OWNER username;

-- Grant privileges
GRANT ALL PRIVILEGES ON DATABASE citrine TO citrine_user;

\q
```

* `psql` is the default super user.

## Commands

* `--`
* `\q`