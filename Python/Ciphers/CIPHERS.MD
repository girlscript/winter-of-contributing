# Ciphers in Python
Ciphers are a type of cryptographic technique , used primarily for encryption and decryption of data.They play a major role in cybersecurity domain.<br>

### Cryptography
Before heading directly to ciphers , we need to understand what cryptography is all about.<br>
It is defined as the art and science of concealing the message to introduce privacy and secrecy as recognized in information security.

### Encryption & Decryption
The language which we conversate in general or on social Media is generally a normal message or in technical terms refferes to as "Plain Text".<br>
However , when we want to disguise such a message so that the content within it can be hidden we use a technique called as "Encryption".It is just the process of converting a normal 
message into a code language so that it becomes diffcult to understand.<br>
This encrypted message in Technical terms is reffered to as "Cipher Text".<br>
However , once the encrypted data is transferred to the respective location, we decrypt the data which is the process of turning ciphertext back into plaintext .<br>
This process is also called as decryption.

### Cipher
A cryptographic algorithm, also called a cipher, is the mathematical function used for encryption and decryption. <br>
Both the encryption and decryption operations use a key. The range of possible values of the key is called the keyspace.

### Types of Ciphers
There are two basic types of classical ciphers:<br>
<ul>
  <li>Transposition ciphers </li>
  <li>Substitution ciphers </li>
</ul>

### Substitution Ciphers
A substitution cipher is one in which each character in the plaintext is substituted for another character in the ciphertext. <br>
The receiver inverts the substitution on the ciphertext to recover the plaintext.<br>
For example: Caesar Cipher, in which each plaintext character is replaced by the character three to the right modulo 
26 ("A" is replaced by "D," "B" is replaced by "E,"..., "X“ is replaced by "A," "Y" is replaced by "B," and "Z" is replaced by "C") 
is a simple substitution cipher.

### Transpositon Ciphers
A transposition cipher is obtained by performing some sort of permutation on the plain text symbols. Here, the symbols remain the same but their order is shuffled around.<br>
For example: In a simple columnar transposition cipher, the plain text is written horizontally row by row in rectangle of fixed width. 
To form cipher, the text is read off vertically. The order of columns is kept secret and is the key. <br>
Decryption involves writing the ciphertext vertically of identical length and then reading the text horizontally. <br>
Let me illustrate this with the help of an example:
Consider the sentence: “IT IS RAINING TODAY”<br>
Key value: 4 (rectangular width)<br>

Encryption process:<br>

<tr>
  <td>I</td>
  <td>T</td>
  <td>I</td>
  <td>S</td>
</tr><br>
<tr>
  <td>R</td>
  <td>A</td>
  <td>I</td>
  <td>N</td>
</tr><br>
<tr>
  <td>I</td>
  <td>N</td>
  <td>G</td>
  <td>T</td>
</tr><br>
<tr>
  <td>O</td>
  <td>D</td>
  <td>A</td>
  <td>Y</td>
</tr><br>


Ciphertext: IRIO TAND IIGA SNTY
<br>





  

