# Curl(Client URL) 

* It is a powerful command line tool for sending and receiving data via URLs.

```bash

curl https://example.com # get content

curl -o "${file_name}.html" https://example.com


curl -i https://example.com # show also header

```
> Example.com(org) is reserved example domain.
```bash
curl -X POST -d "key=value" https://api.example.com
```
* `-H "$key":"$value"`: Header
    * `-H "Content-Type: application/json"`: declare that data format is JSON
* `-X (--request)`
    * `--request` = GET,POST,PUT,DELETE

        * `-F "${field_name}=@${file_path}"` = send file_path as field_name.
        * `-d ${name_1}=${value_1}&${name_2}=${value_2}` 

* `-k`: skip SSL certification check `--insecure`
* `-s` -- do not display info from curl

* `-I` -- only header

* `-v` -- verbose mode

* `-D file` output responce header
  * `-D -` in standard output

* `-d{}`: body data
* `-o` = assign output file name.
  * `/dev/null` -- ignore main message

**name**
```html
<form action="https://api.example.com/login" method="POST">
  <input name="username" value="taro">
  <input name="password" value="1234">
</form>
```


# wget「World Wide Web get」

* Especially for large files.

```bash

wget -O "$newname".zip https://example.com/file.zip
# -O = output file path
# -o = log file

# Resume download
wget -c https://example.com/largefile.iso
```
