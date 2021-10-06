
# Affine Cipher

 - An affine cipher is an example of a monoalphabetic substitution cipher. In this cipher, each letter in an alphabet is mapped to its numeric equivalent then encrypted using a simple mathematical function, and converted back to a letter. 
 
 - In a substitution cipher encryption , every time a given letter appears in the plaintext, it is always replaced by the same ciphertext letter.
 
 - Each alphabet letter is given a numerical value starting from 0. Then plain text is encrypted to cipher text.
> ![enter image description here](https://i.imgur.com/4gcjEPk.png)

 - **Encryption**: To encrypt each letter in a plain text, it uses modular arithmetic to convert the integer that each plaintext letter corresponds to into another integer that correspond to a ciphertext letter. The encryption function is: 

			`E (x) = ax + b `

	where modulus m is the size of the alphabet i.e. , 26
	and a & b are the keys of the cipher
	Also, value a must be chosen such that a and m are coprime.

 - **Decryption**: To decrypt each letter into plain text, do the inverse function on the ciphertext to retrieve the plaintext. The Decryption function is derived from Encryption function. 
 
	![enter image description here](https://i.imgur.com/PZTruau.png)
 
	    D ( y ) = a^(-1) ( y - b ) mod m

	where a^(−1) is the modular multiplicative inverse of a modulo m. I.e., it satisfies the equation: 

	   1=a * a^(-1) mod m

##

**Example : Encrypt and Decrypt 'CIPHER' using key pair (3,7)**

**For Encryption**:

**Step 1**: Write down the corresponding numeral value to each letter of given plain text. 
|Plaintext |C|I|P|H|E|R|
|--|--|--|--|--|--|--|
|Equivalent Numeral (x)|2|8|15|7|4|17

**Step 2**: The value of a and b is given i.e. a=3 & b=7.
|Plaintext |C|I|P|H|E|R|
|--|--|--|--|--|--|--|
|Equivalent Numeral (x)|2|8|15|7|4|17
|ax+b = 3x+7|13|31|52|28|19|58
|(3x+7)mod 26|13|5|0|2|19|6
|Ciphertext|N|F|A|C|T|G

 **Note**: To get the ciphertext, write equivalent letters from numerals as reverse of step 1. 

Hence, the plaintext 'CIPHER' is encrypted as 'NFACTG'

**For Decryption**:

 Ciphertext is NFACTG and a & b is same i.e. 3 and 7. 
The formula for decryption is :   D ( y ) = a^(-1) ( y - b ) mod m

**Step 1:** Putting the values of a, b, m in given formula,
D(y) =  3^(-1) (y-7) mod 26
To calculate the plaintext, we need to find the value of 3^(-1) i.e. multiplicative inverse of 3.

**Step 2:** Calculate the value of 3^(-1).

**Method 1:**
In function: **1=a * a^(-1) mod m**, let i= a^(-1)
Putting the values of a and m,
3 * ( i )mod 26=1,  	where i is 3^(-`1)

Try i from 1 and check at what what of i, equation satisfies:
 For i=1, (3 * 1) mod 26 = 3
 For i=2, (3 * 2)mod 26 = 6
 For i=3, (3 * 3) mod 26 = 9
 For i=4, (3 * 4) mod 26 = 12
 For i=5, (3 * 5) mod 26 = 15
 For i=6, (3 * 6) mod 26 = 18
 For i=7, (3 * 7)mod 26 = 21
 For i=8, (3 * 8)mod 26 = 24
 For i=9, (3 * 9)mod 26 = 1 
when i=9, the value of (3*9) mod 26 is 1.
Hence, the multiplicative inverse or 3^(-1) mod 26 is 9.

**Method 2: Using Extended Euclidean Algorithm**
Find the GCD of 3 and 26.
26 = 3 * 8 + 2  [Copy divisor as dividend and remainder as divisor for next line]
3 = 2 * 1 + 1  
Remainder is 1, so multiplicative inverse exist.
Backward Substitution of above equations is:
1 = 3 - 2 * 1
2 = 26 -  3 * 8
Putting value of 2 in above equation and solving,
1 = 3- 2*(1)
1 = 3 - ( 26- 3 * 8 ) * 1
1 = 3 - ( 26 * 1 - ( 3 * 8 ) * 1)
1  = 3 -  ( 26 * 1 - ( 3 * 8 ) * 1)
1 = 3 * 1 - 26 * 1 + 3 * 8
1 = 3 * ( 1 + 8 ) -26 * 1
1 = 3 * 9 - 26 * 1
1 = ( 3 * 9 - 26 * 1 ) mod 26
Since 26 mod 26 is 0.
  1 = 3 * 9 mod 26
  Hence, the multiplicative inverse or 3^(-1) mod 26 is 9.

**Step 3:** 
Putting the value of 3^(-1) in function: 
3^(-1) (y-7) mod 26=> 9 (y-7) mod 26

|Plaintext |N|F|A|C|T|G|
|--|--|--|--|--|--|--|
|Equivalent Numeral (y)|13|5|0|2|19|6
| 9(y-7) |13|31|52|28|19|58
| 9(y-7) mod 26|2|8|15|7|4|-9
|Ciphertext|C|I|P|H|E|R	

**Note**: For negative numerals, use following table. (Not all negative values will exist for mod 26)
![enter image description here](https://i.imgur.com/qVsGSnB.png)

## Python Code to implement Affine Cipher:

    #Encrypting the PLaintext using given key 
    
    def encrypt(plaintext, key): 
	    #E = (a*x + b) % 26 
	    return ''.join([ chr((( key[0]*(ord(t) - ord('A')) + key[1] ) % 26) + ord('A')) for t in plaintext.upper().replace(' ', '') ])

    #calculate gcd of a and m
    
    def calculate_gcd(c, d): 
	    x,y, u,v = 0,1, 1,0
	    while c != 0: 
		    q, r = d//c, d%c 
		    m, n = x-u*q, y-v*q 
		    d,c, x,y, u,v = c,r, u,v, m,n 
	    gcd = d 
	    return gcd, x, y 
    
    #calculate multiplicative inverse of a
    
    def multiplicative_inverse(a, m): 
	    gcd, x, y = calculate_gcd(a, m) 
	    if gcd != 1: 
		    return None # modular inverse does not exist 
	    else: 
		    return x % m 
    
    #Decrypting the Ciphertext to Plaintext
    
    def decrypt(cipher, key): 
    #D(E) = (a^-1 * (E - b)) % 26
    return ''.join([ chr((( multiplicative_inverse(key[0], 26)*(ord(c) - ord('A') - key[1])) % 26) + ord('A')) for c in cipher ]) 
    
    #Driver Code to test the above functions 
    
    def main():
	    key=[]
	    plaintext = input("Enter Plaintext: ")
	    a, b =input("Enter key: ").split( )
	    key.append(int(a))
	    key.append(int(b))
	    # calling encryption function enc_text = encrypt(plaintext, key) print('Encrypted Text: {}'.format(enc_text)) 
	    # calling decryption function 
	    print('Decrypted Text: {}'.format(decrypt(enc_text, key) 
    
    if __name__ == '__main__': 
	    main() 

*Output*: 

![enter image description here](https://i.imgur.com/mSwVcTZ.png)

    


`
    


References : 
https://en.wikipedia.org/wiki/Affine_cipher
https://www.codespeedy.com/implementation-of-affine-cipher-in-python/