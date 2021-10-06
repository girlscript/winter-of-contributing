
# Substitution Cipher

<p align="center"> <img width =490 height=299 src="https://imgur.com/RzRs3JT.gif"> </p>
<br>

Substitution cipher is an umbrella of data encoding (i.e., encrypting) techniques used to conceal the original information by replacing its constituent units with some unreadable encoded text, in a certain calculated fashion.

Depending upon the method of substitution cipher used, these units may vary from being single characters, pairs of letters, a mixture of both etc.

  

### Terminologies

Before proceeding further to understand substitution cipher, it is important to get familiar with some fundamental terms used commonly in cryptography:

- **Plaintext**: The information in its original form. It refers to the unaltered, unencrypted, readable and comprehensible data which is intended to be subject to cryptographic algorithms such as encryption techniques.

- **Ciphertext**: The text/data in encrypted format. It refers to the encoded version of the original, plaintext altered into incomprehensible gibberish, obtained as a result of the application of an encryption algorithm.

- **Key**: A cryptographic key or simply *key*, is a calculated set of characters that facilitates encrypting plaintext into cipher text and/or decrypting the ciphertext to change it back into its original form, upon being processed through the cryptographic algorithm.

  

---

Formally, a substitution cipher is a technique of data encryption whereby the constituent units (characters, numerical text etc.) of the plaintext are replaced or *substituted* by the ciphertext in a defined manner, in accordance with a key.

  

## Types of Substitution Cipher

Depending upon the size and method of the substituted units of the plaintext, the substitution cipher can be classified into the following techniques of encryption:

  

1. **Simple Substitution/ Monoalphabetic Substitution Cipher**

It entails the replacement of each character/alphabet of the plaintext individually by some fixed character, decided by a rule. For example, if the letter 'A' is set to be replaced by 'D' then such substitution must be followed throughout the plaintext.

e.g.: Caesar Cipher, ROT13

  

2. **Homophonic Substitution Cipher**

Analogous to the monoalphabetic substitution cipher, homophonic substitution cipher also entails the substitution of individual alphabets of the plaintext, but by mapping the same to more than one ciphertext keys.
For instance, `A` could be replaced by any of the characters out of the key set of `Z, 9, *, H`. Similarly for the substitution of `B`, it could be out of `W, G` and so on.
This technique guarantees better protection against brute force attacks with an increased (i.e., more than one) number of possible cipher values for each of the constituent characters.




3. **Polygram Substitution Cipher**

In place of replacing individual characters, polygram substitution cipher deals with the substitution of a whole block of words with another block of characters.

For instance, `INCLUDEHELP` can be changed to `WDSAEQTGTAI` whereas for the given cipher, `HELP` may be replaced by `RYCV`. Thus each block of characters is regarded as an individual, unique entity, regardless of any possible similarities with other blocks.

  

4. **Polyalphabetic Substitution Cipher**

The polyalphabetic substitution cipher makes use of *multiple* one-character keys. The first key encrypts the first plain-text character, the second encrypts the second plain-text character and so on. Once all the keys in this set of multiple one-character keys are exhausted, they are reused from the beginning.

For instance, if there are 50 keys in consideration, the 51st plaintext character would be replaced by one of the keys from that set.

The size of this set of one-character keys after which recycling of the keys is performed is known as the ***period of the cipher***.

e.g.: Vigenère cipher, Beaufort cipher

  
  

## Simple Substitution Cipher: Shift Cipher

Operating as a mono-alphabetic substitution cipher, shift ciphers perform the operation of data encryption by replacing a character of the plaintext with the character appearing after *k* positions or *shifts* in the English alphabet.

For instance, according to a shift cipher relying on *k=3* shifts, `A` would be replaced by `D`, `B` would be encoded as `E` and so on.

  

*Note that the aforementioned example of shift cipher with k=3 is known as the popular **Caesar cipher***.

  

### Encryption

For every character in a message 'M' and given value of 'K' (i.e., no. of shifts):

  

***Step-1***: Map each letter to a number corresponding to its occurrence in the alphabet, say 'X'.

A | B |C |D| E|F|G|H|I|J|K|L|M|N|O|P|Q|R|S|T|U|V|W|X|Y|Z
--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--
 0 | 1 | 2|3|4|5|6|7|8|9|10|11|12|13|14|15|16|17|18|19|20|21|22|23|24|25

  

***Step-2***: Corresponding to each charcater, calculate the value of 'Y', given by:

>**Y = (X + K) mod 26**

  

***Step-3***: For each character of the message, map the obtained (numerical) value of 'Y' back to its alphabetical equivalent by referring to the table above. The thus obtained message in an altered manner is the cipher text.

  
  
  
  
  

### Decryption

In order to decrypt a cipher message M* back to its original form, follow the procedure as described:

  

***Step-1***: Map each character of the ciphertext 'Y' back to its numerical equivalent.

A | B |C |D| E|F|G|H|I|J|K|L|M|N|O|P|Q|R|S|T|U|V|W|X|Y|Z
--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--|--
 0 | 1 | 2|3|4|5|6|7|8|9|10|11|12|13|14|15|16|17|18|19|20|21|22|23|24|25

  

***Step-2***: To obtain the original, substituted version of each of these characters 'X', perform the operation:

  

> **X = (Y - K) mod 26**

  

***Step-3***: Using the above obtained numerical value of 'X', determine the corresponding alphabetical counterpart by referring to the mapping above, for each of the characters of the cypher message to finally achieve the plaintext version of the original message in decrypted form.

  

#### -- Example:

Consider the encryption of the message: `MISS VANJIE`

with ***K = 23***

  

<p align="center"> <img src="https://imgur.com/ALoj2aZ.jpg"> </p>

  

Thus,

`MISS VANJIE` encrypts into `JFPP SXKGFB`

  
  

## Conclusion: Security Challenges

As inherently simple in implementation it may be, the simple substitution cipher tends to harbour a major drawback of being very easily cracked. Even for plain text consisting of moderately long message words, a cryptanalyst would be able to decrypt the ciphertext without the key, simply by *analysing the frequency distribution of the alphabets* across the plaintext.

Moreover, *by observing repeated patterns of ciphertext*, as usually displayed by sentence connectors such as *'to'*, *'and'* etc., the encrypted text can be guessed to obtain its original form.
