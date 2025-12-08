# Multi-Factor Authentication 
* a security method requiring two or more verification factors to access an account

### OAuthtool


#### 1. **TOTP（Time-based OTP）**
* This does not need internet and do not store the secret key.
* Keep `SECRET_KEY`.
```
Current_Data + Public key → hash function → 6 degit code
per 30 second
```
```bash
export SECRET_KEY=
oathtool --totp --base32 "$SECRET_KEY" | clip 
```

#### 2. **HOTP（HMAC-based OTP）**

```bash
oathtool --hotp --counter=n "$SECRET_KEY" | clip
#  --counter= how many times, 0,1,2..
```

### Others

#### DTMF(Dual-Tone Multi-Frequency)
* 名探偵コナンの映画、『戦慄の楽譜』ソプラノ歌手とのハモリ
1 = 697Hz + 1209Hz
