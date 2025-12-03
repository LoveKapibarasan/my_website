# DNS Records 
* Internet's Address Book

@ = all domain

### A, AAAA
* IPv4, IPv6
* Do not touch `localhost（127.0.0.1）, autoconfig, autodiscover`
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