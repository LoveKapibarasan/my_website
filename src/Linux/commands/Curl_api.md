# Curl + API


* `-X (--request)`

--request = GET,POST,PUT,DELETE

* `-F "<field_name>=@<file_path>"`

send file_path as field_name.

* `-d name=value1&name2=calue2` 

**name**
```html
<form action="https://api.example.com/login" method="POST">
  <input name="username" value="taro">
  <input name="password" value="1234">
</form>
```
