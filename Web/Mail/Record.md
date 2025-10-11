# DNS Records 
* Internet's Address Book

@ = all domain


### CNAME Record (Canonical Name = Alias)
Points one name to another name

### MX Record (Mail Exchange)
Tells where email should be delivered

### TXT Record (Text)
Stores text information for various purposes
    * SPF = List of servers allowed to send email for your domain
    * DKIM = Digital signature for emails
    * DMARC = Anti-spam policy


### SRV Record (Service)
Points to specific services with port numbers


### Change mail server
1. MX @ →  new server
2. a mail →  new server
3. v=spf1 ip4:$ip a mx include:websitewelcome.com ~all
* verify authentication.
