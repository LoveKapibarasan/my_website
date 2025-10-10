# OpenSSL 
* an open-source software library that implements the SSL/TLS protocols used to encrypt internet communications.


```bash
openssl <command> [options]
```

```bash
openssl s_client -connect example.com:443 # check server connection with TLS
```
### encrypt derypt file
```
openssl enc -aes-256-cbc -in "$secret" -out "$secret.enc"
openssl enc -d -aes-256-cbc -in "$secret.enc" -out "$secret"
# -in, -out
# -d = decrypt
# -pbkdf2: Password base function
# -pass pass:"$Pass"
# -aes-256-cbc: Algorithm
```


```bash
# generate random
openssl rand [options] num
# -hex
# -base64
# -out "$file"
```


