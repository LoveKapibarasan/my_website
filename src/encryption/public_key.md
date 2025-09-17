
# Public Key Cryptography?

It’s a type of cryptographic system that uses **two different keys**:

* **Public Key**: Can be shared with anyone. Used for encryption or signature verification.
* **Private Key**: Must be kept secret. Used for decryption or signing.

Together, they are called a **key pair**.

---

## How it Works

1. **Encryption & Decryption**

   * The sender encrypts a message with the recipient’s public key.
   * The recipient decrypts it with their own private key.
     → Even if the public key is widely known, only the private key can unlock the message.

2. **Signing & Verification**

   * The sender signs a message with their private key.
   * The recipient verifies the signature with the sender’s public key.
     → This proves the message really came from that sender.

---

## Analogy

Think of it like a **padlock and key**:

* The **padlock (public key)** can be given to anyone.
* The **key (private key)** is kept only by you.

If someone wants to send you a letter, they put it in a box and lock it with your padlock. Only you, with your secret key, can open it.

---

