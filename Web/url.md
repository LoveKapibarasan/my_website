###  The last part of a domain = Top-Level Domain (TLD)

* **.com** → comes from "commercial," originally for business sites (now open to anyone)
* **.net** → comes from "network," originally for network-related services (now open to anyone)
* **.org** → comes from "organization," often used by non-profits
* **.jp** → the country code for Japan (ccTLD)
* **.de** → the country code for Germany


* **www** stands for "World Wide Web."
* It’s a type of *host name* that points to the server providing web pages.
* Nowadays, many sites let you omit "www" (e.g., `www.google.com` and `google.com` lead to the same site).

### Scheme
* http, https, ftp, mailto, file

### Authority
`[userinfo@]host[:port]`
* `userinfo` = `user:pass`. deprecated
* `host` = domain

### Path

* `/`, `..`, `.`

### Query Parameter
```bash
?key1=value1&...
```
* This is also encripted in `https`

### Fragment
* `#`
* Page anchor

### Notation
**No trailing slash**
A trailing slash is the forward slash (`/`) at the end of a URL.


### canonical
* 重複するコンテンツがある際に検索エンジン側に正規となるURLを伝えるHTMLタグ
