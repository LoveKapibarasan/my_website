# WordPress
* Open source content managemant system.
* PHP
* Mirror repository.
[URL](git@github.com:WordPress/WordPress.git)
```
wordpress/
├── wp-admin/          # Admin interface
├── wp-includes/       # core
├── wp-content/        
│   ├── themes/        # Site Design
│   ├── plugins/       
│   └── uploads/       # Files
├── wp-config.php      # Setting Files（DB info）
└── index.php          # Entry Point
```
## Hosting Service System

= rental server system

### Establish

1. Install web server like `Apache/Nginx`.
    * It receieves a request and runs php, reads my database and returns an article.
2. Install MySQL and PHP.

3. 
```bash
cd /dir
wget https://wordpress.org/latest.tar.gz
tar -xzvf latest.tar.gz
sudo mv wordpress /var/www/html/

sudo chown -R www-data:www-data /var/www/html/wordpress
sudo chmod -R 755 /var/www/html/wordpress

```

4. Edit database connection information.
```bash
cd /var/www/html/wordpress
cp wp-config-sample.php wp-config.php
```

5. Web server setting.
Apache: `/etc/apache2/sites-available/wordpress.conf`

6. Get fixed IP address

7. DNS setting
* A record: example.com →  Server IP address.

8. SSL certification
* Let's Encrypt
