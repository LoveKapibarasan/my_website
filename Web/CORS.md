# CORS (Cross-Origin Resource Sharing)  
* a security mechanism in web browsers.

### Background

* Web browsers enforce a rule called the **Same-Origin Policy**.

* Origin = scheme (`http`/`https`) + `domain` + **`port`**.


* In request header, origin: url is included.

* Because of this policy, JavaScript running on one origin (say, `Origin A`) cannot freely access resources from another origin (`Origin B`). This is essential for security.

* CORS restriction is caused by browser, but API server setting can solve this problem.

* `Access-Control-Allow-Origin: http://localhost:xxx` will be appended in API request at header.