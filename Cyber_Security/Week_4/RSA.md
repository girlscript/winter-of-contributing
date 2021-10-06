<h1 align="center">RSA Algorithm</h1>

RSA(Rivest Shamir Adleman) is [asymmetric encryption](https://github.com/girlscript/winter-of-contributing/blob/Cyber_Security/Cyber_Security/Week_4/Asymmetric%20Cryptography.md) (that means it uses two different keys, i.e., the <b>public key</b> and <b>private key</b>) method widely used.
Within the RSA system, a client subtly chooses a combination of prime numbers p and q so large that calculating the item n = pq is well past anticipated computing capabilities for the lifetime of the ciphers.

<h2 align="center">How it works</h2>
<ol>
  <h3><li>Generating the Keys</h3>
  
  
  In this process, public and private keys are made. For this :
  <ul>
    <li> The very first process is to select two large prime numbers (It is essential for security as the product of two large prime numbers cannot be easily factorized).
      Let us say these two numbers are p and q.<br>
    </li>
    <li> Calculate the product of the two numbers selected above. Let us consider <b>n</b> as the product of p and q (n = p * q).<br>
    </li>
    <li> Calculate the <a href="https://en.wikipedia.org/wiki/Euler%27s_totient_function">Euler's Totient</a> for n i.e., 	<b>φ(n) = (p-1)*(q-1)</b><br>
    </li>
    <li> Generating the public key(or encryption key). Consider the public key as <b>e</b>. Selection of e should be such that e is co-prime to the totient function (here φ(n)) 
      satisfying the condition , 1 < e < φ(n). Pair (n,e) is used for making public key  <br>
    </li>
    <li> Generating the private key(or decryption key). Let's say it's <b>d</b> such that e*d = 1 mod φ(n). Refer <a href="https://en.wikipedia.org/wiki/Extended_Euclidean_algorithm">this</a>.
      Pair(n,d) is for private key
    </li>
  </ul>
  </li>
  
  <h3><li>Encryption</h3>
  In this, we encrypt our message into a cipher text.
  Let the plain text(the text that is to be encrypted) be P and the Ciphertext be C. To obtain the the cipher text from the plain text, we use 
  <b>C = (P^e) mod n</b>.
  </li>
  <h3><li>Decryption</h3>
  At the decryption end, the ciphertext is again converted to the plain text. Private key pair (n,d) is used to convert the ciphertext into plain text.
  <b>P = (C^d) mod n </b>
  </li>
</ol>

<hr><br>
To understand the above algorithm, Let us consider we have two clients, A and B, communicating.
<br>

<br>


In <b>implementing a secrecy channel</b> Client A would publish e and n in an authenticated open directory but keep d secret. Anybody wishing to send a private message to A would 
encrypt it into numbers less than n and, after that, scramble it using the Encryption formula above to get the ciphertext. A can decrypt this message based on knowing d, but the presumption and the 
proof in this way far, is that for nearly all ciphers, no one else can decrypt the message unless he can also calculate factors of n.

In <b>implementing an authentication channel</b> A would release d and n and keep e secret. Within the most straightforward use of this channel for identity confirmation, B can confirm that he is 
communicating with A by looking within the catalog to discover A’s decryption key d and sending him a message to be encrypted. Suppose he gets back a cipher that decodes to his challenge message 
utilizing its d(decryption key) to decrypt it. In that case, he will know that it was in all likelihood made by somebody knowing e and consequently that the other communicant is likely to be A.
<hr>
