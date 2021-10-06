# CRYPTOGRAPHY

The term **Crypt** stands for *“Hidden”* and **graphy** means *“writing"*. Cryptography converts data into a format that is unreadable for an unauthorized user which allows it to be transmitted without decoding it back into a readable format (by unauthorized entities).
<br>

**Cryptography also allows senders and receivers to authenticate each other using key pairs.**

<br>

## Some common algorithms for encryption: 
<br>

- **Single-key or Symmetric-key encryption:** Only one key is used for both encryption and decryption. Symmetric-key encryption algorithms create a fixed length of bits known as a *block cipher* with a secret key that the creator or sender uses to encrypt data (encipher) and the receiver uses to decrypt (decipher) it. Type of symmetric-key cryptography include the *Advanced Encryption Standard (AES)*. 

![symmetric-encryption[credit:Auth0]](./images/symmetric-encryption.png)

<br>

- **Public-key or Asymmetric-key encryption:**  Two keys are used; one key is the public key that anyone can access. The other key is the private key (only the owner can access it). The sender encrypts the information using the receiver’s public key. The receiver decrypts the message using own private key. The types of public-key cryptography include *RSA*, *DSA (Digital Signature Algorithm)*. 

![asymmetric-encryption[credit:Auth0]](./images/asymmetric-encryption.png)

<br>

- **Hash Functions:** They use no key and are also called one-way encryption. Hash functions are mainly used to ensure that a file has remained unchanged. Types of cryptographic hash functions include *SHA-1 (Secure Hash Algorithm 1), SHA-2, SHA-3 and MD5*. 

![hashing[credit:educative]](./images/hashing.png)

<br><br><br>

## Objectives & Importance: 
<br>

- **Confidentiality:** The information cannot be understood by anyone for whom it is unintended. As sender encrypts the data with public key of receiver which can only be decrypted by using receiver’s private key. 

- **Integrity:** The information cannot be altered in storage or transit between sender and intended receiver without the alteration being detected. Hashing is used to create a unique message digest from the message that is sent along with the message. 

- **Non-repudiation:** For non-repudiation, the sender encrypts plain text using a private key, while the receiver uses the sender’s public key to decrypt it. Thus, the receiver knows who sent it and the sender of the information cannot deny at a later stage. 

- **Authentication:** The sender and receiver can confirm each other’s identity and the origin and destination of the information using Digital Certificates. 
