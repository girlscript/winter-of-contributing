# What is Symmetric Cryptography?

Symmetric Cryptography which is also known as secret key cryptography, is the use of a single shared secret to share encrypted data between parties.
Ciphers in this this category are called symmetric becaausen we use the same key to encrypt and to decrypt the data. In other words, the sender encrypts data using a password, and the recipient must know that password to access the data.

Symmetric Cryptography is a type of encryption that uses the same key to encrypt and decrypt data. Both the sender and the recipient have identical copies of the key, which they keep secret and don’t share with anyone.

<div align="center">
<img src="images\symmetric-encryption1.png">
</div>

Symmetric Encryption is a two-way process. With a block of plaintext and a given key, symmetric ciphers will always produce the same ciphertext. Likewise, using that same key on the block of ciphertext will always produce the original plaitext. Symmetric encryption is useful for protecting data between parties with an established shared key and is also frequently used to store confidential data. For example, ASP.NET uses 3DES to encrypt cookie data for a forms authentication ticket.

Here's a quick review of how encryption works in general:
- The sender uses an encryption key (usually a string of letters and numbers) to encrypt their message.
- The encrypted message, called ciphertext, looks like scrambled letters and can’t be read by anyone along the way.
- The recipient uses a decryption key to transform the ciphertext back into readable text.

<div align="center">
<img src="images\symmetric-encryption.png">
</div>



## Advantages of Symmetric Cryptography:

**Extremely Secure** – when it uses a secure algorithm, symmetric key encryption can be extremely secure. One of the most widely-used symmetric key encryption systems is the U.S. Government-designated Advanced Encryption Standard (AES). When you use it with its most secure 256-bit key length, it would take about a billion years for a 10 petaflop computer to guess the key through a brute-force attack. Since, as of November 2012, the fastest computer in the world runs at 17 petaflops, 256-bit AES is essentially unbreakable...

**Relatively Fast** – Encrypting and decrypting symmetric key data is relatively easy to do, giving you very good reading and writing performance. In fact, many solid state drives, which are typically extremely fast, use symmetric key encryption internally to store data and they are still faster than unencrypted traditional hard drives.


## Disadvantages of Symmetric Cryptography:

**Sharing the Key** – The biggest problem with symmetric key encryption is that we need to have a way to get the key to the party with whom we are sharing data. Encryption keys aren't simple strings of text like passwords. They are essentially blocks of gibberish. As such, we'll need to have a safe way to get the key to the other party. Of course, if we have a safe way to share the key, we probably don't need to be using encryption in the first place. With this in mind, symmetric key encryption is particularly useful when encrypting our own information as opposed to when sharing encrypted information. When someone gets their hands on a symmetric key, they can decrypt everything encrypted with that key. When we're using symmetric encryption for two-way communications, this means that both sides of the conversation get compromised. With asymmetrical public-key encryption, someone that gets our private key can decrypt messages sent to us, but can't decrypt what we send to the other party, since that is encrypted with a different key pair.

**Digital Signatures** – It cannot provide digital signatures that cannot be repudiated.


##
#### References:
https://https://www.thesslstore.com/blog/symmetric-encryption-101-definition-how-it-works-when-its-used/
