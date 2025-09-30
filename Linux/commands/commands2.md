


* `sudo -E vim`
-E = use the same environment when editing root file.(system clip board is synced.)

* `tail` = show end of file(typically for log files)
-n <number> = number of lines
-f = realtime
-F = trace when file is recreated, renamed.




* `openssl rand -base64 <n>` = random password

* `cut -d'<separator>' -f<group_number>`


### Printf

```bash
printf %s\n # output string directly
printf %q\n # reusable output for shell, output space or \r explicitly
```

### Line Change


* Windows, HTML header … \r\n (CRLF)

* Unix/Linux … \n (LF)

* Old Mac … \r (CR)
