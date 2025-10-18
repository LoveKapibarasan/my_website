**Start**
Hallo,


**End**
敬具
Viele Grüße, Mit freundlichen Grüßen
Sincelely, Best Regards

**Name**

### Format
* `html`, `css`
* ✘ `JS`, `tex`

### Mail Address

`name@domain`

**Server**
 
**Sender**
* SMTP (Simple Mail Transfer Protocol)
*  Port 25, 587, 465

**Receiever**
* POP3 (Post Office Protocol 3)
* Port 110, 995.


**IMAP (Internet Message Access Protocol)**
* Mails are managed on a server
* Multiple device can access.
* Port 143, 993

### MTA（Mail Transfer Agent）
* e.g. Postfix

## Elements
1. Mail Server
2. Mail Address
3. Mail Client

### Gmail
* Perfect package for mail.

### Outlook.com (with `@outlook.com`)
* Perfect package


### Outlook

* Web application.

### Domain Transfer

1. Unasign the domain from the web site and get EPP/Auth Code.
1. **DNS**: Turn off DNSSEC protection and change name server.

> Without domain transfer, you can change DNS record setting.

### ICANN Lock
* https://lookup.icann.org/
* When domain owner information(name, phone number, mail address, address) is changed, you cannot transfer the domain for 60 days.
* "Opt out of 60-day transfer lock" option may exist.


### SSL Certificates
* Encryption levels are the same.
* Enable SSL encryption.

* DV（Domain Validation）
    * Check only domain ownership.
    * Free.(Let's encrypt.)
    ```bash
    sudo apt install certbot
    sudo certbot certonly --webroot -w /var/www/html -d example.com
    ```
* OV（Organization Validation）
* EV（Extended Validation）

### Site Lock
* Security tools for website
* Unnecessary.

### GDPR Masking

* Nowadays it should be free.
**Withour protection.**
```
whois example.com
---
Registrant Name: Taro Yamada
Registrant Email: taro@personal.com
Registrant Phone: +81-90-1234-5678
Registrant Address: 東京都渋谷区1-2-3
```


### VPS（Virtual Private Server）
* You can download any software freely.

**Type**

* Shared Hosting
* VPS
* Dedicated Server -- Large sites
* Cloud(like AWS) -- Pay-as-go, Enterprise



