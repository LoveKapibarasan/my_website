# Web Server
It receieves HTTP request and returns JS, CSS, HTML.
e.g. Serve, Nginx, Apache


### Nginx
* Dynamic Server
`/usr/share/nginx/html/`     ← Place HTML file
`/etc/nginx/nginx.conf`      ← How to distribute
```nginx
# Main Context
user nginx; # user to execute
worker_processes auto; # worker process number
error_log /var/log/nginx/error.log; # Error log location

events {
    worker_connections 1024; # max connection number
}

http {
    # HTTP context
    include /etc/nginx/mime.types; # file type definition
    default_type application/octet-stream;
    
    access_log /var/log/nginx/access.log;
    
    server {
        # Server Context
        listen 80;
        server_name $domain.name;
        root /usr/share/nginx/html; # directory
        index index.html; # default file to show
        
        location / {
            # Location Context
            try_files $uri $uri/ /index.html;
        }
        
        location /name/ { # url start with /api/
            proxy_pass http://backend:3000/;
        }
    }
    # send compressed content
    gzip on;
    gzip_vary on;
    gzip_min_length 1000;
    gzip_types
        text/plain
        text/css
        text/xml
        text/javascript
        application/javascript
        application/json
        application/xml+rss
        image/svg+xml;
}

```

### Serve
* Static Server: Returns file as it is.
* Image size is much bigger.
* easy to understand.

**Config:**
* `serve.json`
* command line argument.
* Default port is 3000.

```bash
serve -s
# -s or --single: SPA mode. All HTTP requests will be redirect to 3000
```
