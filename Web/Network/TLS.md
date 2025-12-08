# TLS（Transport Layer Security）

**SSL（Secure Sockets Layer）→ TLS 1.0 → TLS 1.2 → TLS 1.3**

* s(ssL) of https🔒.

* A kind of digital certificate that verifies the authenticity of the server you are communicating with.

* Time should be synced.

* Encrypt entire communication including query parameters.

**Keys**

**Certification**
* `.crt`, `.cer`,  `.cert`, `.pem`(Privacy Enhanced Mail): 
    * Certificate extensions(text file.)
    ```
    -----BEGIN CERTIFICATE-----
    -----END CERTIFICATE-----
    ```

```
X → [Encrypt with key A] → Encripted data → [decript with key B] → Y
```

**Public Key**
* for Encryption

**Private Key**
* for Decryption.

公開鍵 = 開いた南京錠（誰でも持てる）
秘密鍵 = その南京錠の鍵（サーバーだけが持つ）

### Man-in-the-Middle attack(中間者攻撃)

```
You → [Company proxy] → Internet
```

**CA(Signiture), SSL certificate**
* Signed by some organization.
* Buy or Let's Encrypt
* OV（Organization Validation）
* EV（Extended Validation）

**Let's Encrypt**
* [URL](https://certbot.eff.org/)
* for free.
* DV(Domain Validation):ownership of domain.
```bash
sudo certbot certonly --standalone -d "$yourdomain"
```
**Stand Alone**
1. certbot runs web server on port 80.
2. Let's Encrypt checks
* URL: http://example.com/.well-known/acme-challenge/random_string


**Mechanism**
1. Hash = SHA256(whole data)
   = e3b0c44298fc1c149afbf4c8996fb92427ae41e4649b934ca495991b7852b855
2. Signature = Sign(Hash, DigiCert_secret_key)= 8a:3f:2e:9c:5d:1b:7e:4f...

> Replacement of public key can be detected.
> Onry entire certification replacement works.