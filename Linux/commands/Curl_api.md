# Curl + API


* `-X (--request)`

--request = GET,POST,PUT,DELETE

* `-F "<field_name>=@<file_path>"`

send file_path as field_name.

* `-d name=value1&name2=calue2` 


* `-s` -- do not display info from curl

* `-I` -- only header

* `-v` -- verbose mode

* `-D file` output responce header
  * `-D -` in standard output

* `-o`
  * `/dev/null` -- ignore main message

**name**
```html
<form action="https://api.example.com/login" method="POST">
  <input name="username" value="taro">
  <input name="password" value="1234">
</form>
```
