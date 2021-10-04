# Caesar Cipher

One of the earliest and most basic encryption techniques is the Caesar Cipher. It's a substitution cypher in which each letter of a given text is replaced with a letter from a specific number of places down the alphabet. With a shift of one, for example, A would be replaced by B, B by C, and so on. Julius Caesar is said to have called the technique after himself, as he used it to communicate with his officials.

To encrypt a given text, we require an integer value called shift, which specifies how far down each letter of the text has been shifted.

The encryption may be expressed using modular arithmetic by converting the letters to integers using the A = 0, B = 1,..., Z = 25 method. The mathematical formula for encrypting a letter with a shift n is as follows:

### E(x) = (x + n)mod 26   ---> Encryption
### D(x) = (x - n)mod 26   ---> Decryption

**Text**: HELLOEVERYONE
**Shift**: 4
**Cipher**: LIPPSIZIVCSRI

**Text**: WRITTENBYKUSHGUPTA
**Shift**: 21
**Cipher**: RMDOOZIWTFPNCBPKOV



### # A C++ program to illustrate Caesar Cipher Technique
```
#include <iostream>
using namespace std;
 
// This function receives text and shift and
// returns the encrypted text
string encrypt(string text, int s)
{
    string result = "";
 
    // traverse text
    for (int i=0;i<text.length();i++)
    {
        // apply transformation to each character
        // Encrypt Uppercase letters
        if (isupper(text[i]))
            result += char(int(text[i]+s-65)%26 +65);
 
    // Encrypt Lowercase letters
    else
        result += char(int(text[i]+s-97)%26 +97);
    }
 
    // Return the resulting string
    return result;
}
 
// Driver program to test the above function
int main()
{
    string text="WRITTENBYKUSHGUPTA";
    int s = 21;
    cout << "Text : " << text;
    cout << "\nShift: " << s;
    cout << "\nCipher: " << encrypt(text, s);
    return 0;
}
```

## What is the best way to decrypt?
We may either construct a decrypt function identical to encrypt that will decode the original text by applying the provided shift in the opposite way. However, because of the cipher's cyclic characteristic under modulo, we may simply observe-

### Cipher(n) = De-cipher(26-n)


##
#### References:
https://www.geeksforgeeks.org/caesar-cipher-in-cryptography/
