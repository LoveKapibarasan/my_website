# Curl install

```bash
curl -fsSL https://example.com/install.sh | bash
```

### 1. curl

A command to fetch data over HTTP(S).
Here it downloads a shell script called install.sh.

### 2. Options -fsSL

    * `-f` (fail silently)
    Exit without output when an HTTP error (404, 500, etc.) occurs.

    * `-s` (silent)
    Do not show progress bar or error messages.

    * `-S` (show-error)
    Often used together with -s, but omitted here.

    * `-L` (location)
    Follow redirects if they occur.

👉 In other words, this mode quietly downloads the file while following redirects.

3. | (pipe)

* Passes the output of the command on the left to the input of the command on the right.
Here, it passes the script fetched by curl directly to bash.

4. bash

* Interprets the given input (in this case, the script) as a Bash shell script and executes it.