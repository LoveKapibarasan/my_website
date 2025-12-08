# OpenSSL 
* an open-source software library that implements the SSL/TLS protocols used to encrypt internet communications.


```bash
openssl <command> [options]
```

### encrypt derypt file

```bash
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

### TLS

**Get certification public key**

```bash
openssl s_client -connect google.com:443 -showcerts
```

`s_client` : connect as client
`443` : http port
`-showcerts`: Show certification(key)

* return

```

CONNECTED(00000003) # connected
depth=2: root
depth=1: Bridge
depth=0: Original

New, TLSv1.3, Cipher is TLS_AES_256_GCM_SHA384
# Algorithm: TLS_AES_256_GCM_SHA384, RC4, 
Server public key is 2048 bit # key length
Verify return code: 0 (ok)

---

read R BLOCK # wait input

```


**Get and Save**

```bash
openssl s_client -connect google.com:443 -showcerts </dev/null 2>/dev/null | openssl x509 -outform PEM > certification.crt
```

### Self-Certification
    * valify itself.
    * depth 2
    * Installed on OS

    ```bash
    # Check root certification
    ls /etc/ssl/certs/ | grep DigiCert
    ```
    * Certification chain ends here.


```bash
openssl s_client -connect google.com:443 2>/dev/null | openssl x509 -noout -subject -issuer
```

* 例え話：身分証明

#### ケース1：運転免許証（普通の証明書）

あなた：「私は田中太郎です」

警察官：「免許証見せて」

あなた：[免許証を提示]
        発行者：警視庁
        顔写真：あり
        
警察官：「警視庁が発行してるから本物だ」


**信頼の流れ：**
```
警視庁（政府）← みんなが信頼
    ↓
免許証
    ↓
あなた ← 信じてもらえる
```

---

#### ケース2：自作の身分証（自己署名）

あなた：「私は田中太郎です」

警察官：「免許証見せて」

あなた：[手書きのメモを見せる]
        「私は田中太郎です。by 田中太郎」
        
警察官：「？？？お前が書いただけじゃん！」


e.g. DigiCert Root CA
