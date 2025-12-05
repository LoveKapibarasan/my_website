
### Reset Password
```bash

# WP-CLI
curl -O https://raw.githubusercontent.com/wp-cli/builds/gh-pages/phar/wp-cli.phar
chmod +x wp-cli.phar
mv wp-cli.phar /usr/local/bin/wp
# Check
wp --info --allow-root

wp user update "$username" --user_pass="$newpassword" --allow-root
```