# DNS Records 
* Internet's Address Book

@ = all domain

### A, AAAA
* IPv4, IPv6
* Do not touch `localhost（127.0.0.1）, autoconfig, autodiscover`
```
Type: A
Name: subdomain
Value: xx.xxx.xxx.xx
```
```powershell
# Check
nslookup subdomain.domain
```

### CNAME Record (Canonical Name = Alias)
* Points one name to another name
* www ->

### MX Record (Mail Exchange)
* Priority
* Tells where email should be delivered

### TXT Record (Text)
Stores text information for various purposes
    * SPF = List of servers allowed to send email for your domain
    * DKIM = Digital signature for emails
    * DMARC = Anti-spam policy

### NS
* Name server

### SRV Record (Service)
Points to specific services with port numbers

### PTR
* Pointer
* IP -> Domain



### DKIM (DomainKeys Identified Mail)
```
TXT mail._domainkey.example.com v=DKIM1; h=sha256; k=rsa; p=MIIBIjANBg...
```
* selector 'mail' is free to choose

### SPF (Sender Policy Framework)
```
example.com. IN TXT "v=spf1 ip4:192.0.2.10 ip4:192.0.2.20 -all"
```
* v = version
* `~all`: Warning(Soft fail)
* `-all`: Deny(Hard fail)
* `+all`: Allow All

### DMARC (Domain-based Message Authentication, Reporting and Conformance)
```
_dmarc.example.com. IN TXT "v=DMARC1; p=none; rua=mailto:dmarc-reports@example.com"
```
* `p=none`: only report
* `p=quarantine`: spam
* `p=reject`: deny
* `sp`: subdomain