# PAM (Pluggable Authentication Modules)

**Config:**

* `/etc/pam.d/`
    * `/etc/pam.d/common-*` -- imported with `@include common-auth`
    * `/etc/pam.d/sshd` -- for ssh authentication
    * `/etc/pam.d/sudo` -- sudo
    * `/etc/pam.d/login` -- tty or virtual console login 
    * `/etc/pam.d/other` -- fallback (default:deny)

**Line**
```
<group> <flag> <modules> [arguments...]
```

**Management group (module type)**

* auth: User authentication (e.g., password verification)

* account: Account validity and access control

* password: Password change processing

* session: Session start and end processing (logging, environment setup)

**Control flag**

* required: Mandatory; if it fails, processing continues

* requisite: Mandatory; if it fails, processing stops immediately

* sufficient: If successful, no further checks are needed

* optional: Not essential; may or may not be used

**Module examples**

* pam_unix.so → Standard authentication using `/etc/passwd` and `/etc/shadow`

* pam_tally2.so → Controls login failure counts

* pam_sss.so → SSSD (integration with LDAP or Kerberos)

* pam_google_authenticator.so → Two-factor authentication

* pam_fprintd.so → Finger print