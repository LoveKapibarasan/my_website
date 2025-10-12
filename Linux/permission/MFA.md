# Multi-Factor Authentication 
* a security method requiring two or more verification factors to access an account

### OAuthtool

* This does not need internet and do not store the secret key.

```bash
export SECRET_KEY=
oathtool --totp --base32 "$SECRET_KEY" | clip -selection clipboard
#  --counter=
```
