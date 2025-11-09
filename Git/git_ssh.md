#  Using Git with SSH

## 1. Generate a New SSH Key

Create a new SSH key on `$HOME/.ssh/`

```bash
ssh-keygen -t ed25519 -C "your_email@example.com"
```

* `-t ed25519` → modern ECC algorithm
* `-C` → a comment (your email address)

When prompted:

```
Enter file in which to save the key (/home/you/.ssh/id_ed25519):
```

→ Press Enter

```
Enter passphrase (empty for no passphrase):
```

→ Set a passphrase for extra security (recommended)

This creates two files:

* `~/.ssh/id_ed25519` (private key)
* `~/.ssh/id_ed25519.pub` (public key)

---

## 2. Start the SSH Agent and Add the Key

```bash
eval "$(ssh-agent -s)"
ssh-add ~/.ssh/id_ed25519
```
1: ssh-askpass (GUI, every time)
2: ssh-agent (Openssh, use cache)
---

## 3. Add the Public Key to GitHub

Show your public key:

```bash
cat ~/.ssh/id_ed25519.pub
```

Copy the full output (starts with `ssh-ed25519 ...`) and register it on GitHub.

---

## 4. Test the Connection

```bash
ssh -T git@github.com
```

The first time, you will see:

```
Are you sure you want to continue connecting (yes/no/[fingerprint])?
```

→ Type `yes`

If successful:
```
Hi USERNAME! You've successfully authenticated, but GitHub does not provide shell access.
```

---

## 5. Switch Repository URL to SSH

If you already cloned a repository using HTTPS, switch it to SSH:

```bash
git remote set-url origin git@github.com:USERNAME/REPO.git
```

Check:

```bash
git remote -v
```

→ Should show `git@github.com:...`

---



[URL](https://zenn.dev/taroosg/articles/20241128185741-7ff336de9ad0c2)

* Separate keys for each device.

### `known_hosts`
* Public key history of server you connect
* can delete