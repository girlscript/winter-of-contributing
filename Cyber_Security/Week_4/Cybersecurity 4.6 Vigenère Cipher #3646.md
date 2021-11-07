
# Vigenère Cipher
The Vigenère Cipher is an alphabetic text encryption algorithm. It employs a straightforward method of polyalphabetic substitution. Any cypher based on substitution that uses numerous substitution alphabets is known as a polyalphabetic cypher. The Vigenère square or Vigenère table is used to encrypt the source text.

- The alphabets are spelled out 26 times in various rows, with each alphabet shifting cyclically to the left of the preceding alphabet, matching to the 26 possible Caesar Ciphers.
- The cypher utilises a different alphabet from one of the rows at different stages during the encryption process.
- A recurring keyword determines the alphabet used at each place.

## Encryption
The plaintext's first letter, G, is linked with the key's first letter, A. As a result, employ the Vigenère square's row G and column A, namely G. Similarly, the second letter of the plaintext is replaced by the second letter of the key, which is C in row E and column Y. The rest of the plaintext is decoded in the same way.

## Decryption
Decryption is accomplished by determining the location of the ciphertext letter in the table row corresponding to the key, and then using the column's label as the plaintext. The ciphertext G occurs in column G, which is the first plaintext letter, in row A (from AYUSH). We next proceed to row Y (from AYUSH) and look for the ciphertext C in column E, making E the second plaintext letter.
Visualizing Vigenère algebraically by turning [A-Z] into integers [0–25] might be a simpler method.


## C++ code to encrypt via Vigenère Cipher
```
#include<bits/stdc++.h>

using  namespace  std;

  

string  generatingKey(string  str, string  key) {
	int  x = str.size();
	for (int  i = 0; ; i++) {
		if (x == i)
			i = 0;
		if (key.size() == str.size())
			break;
		key.push_back(key[i]);
	}
return  key;
}

string  cipherText(string  str, string  key) {
	string  cipher_text;
	for (int  i = 0; i < str.size(); i++) {
		char  x = (str[i] + key[i]) %26;
		x = x + 'A';
		cipher_text.push_back(x);
	}
	return  cipher_text;
}

string  originalText(string  cipher_text, string  key) {
	string  orig_text;
	for (int  i = 0 ; i < cipher_text.size(); i++) {
		char  x = (cipher_text[i] - key[i] + 26) %26;
		x = x + 'A';
		orig_text.push_back(x);
	}
	return  orig_text;
}

int  main() {
string  str = "MYNAMEISKUSHGUPTA";
string  keyword = "ENCRYPT";

string  key = generatingKey(str, keyword);
string  cipher_text = cipherText(str, key);

cout  <<  "Ciphertext : " <<  cipher_text  <<  "\n";

cout  <<  "Decrypted/Original/Input Text : "<<  originalText(cipher_text, key);

return  0;
}
```
OUTPUT:
```
Ciphertext : QLPRKTBWXWJFVNTGC
Decrypted/Original/Input Text : MYNAMEISKUSHGUPTA
```

---
### References:
https://www.geeksforgeeks.org/vigenere-cipher/
