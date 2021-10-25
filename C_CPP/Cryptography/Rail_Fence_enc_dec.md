# Rail Fence technique for encryption and decryption
## Explanation: 
Rail fence technique is a transposition method of cryptography in which the original message content is shuffled in a way that is not meaningful for anyone. This content needs to be decrypted to understand the message. As the name suggests, rail fence technique uses a zig-zag encryption decryption.
Here, the plaintext is written in a zig-zag manner and then read from left to right line by line.

`Example` : Let us take a plaintext word "welcome_to_gwoc". Right now, the content is understandable since it is in plaintext. After encryption, the obtained text will be called as cipher text or encrypted text.<br>

w      &nbsp;&nbsp; l       &nbsp;&nbsp; o    &nbsp;&nbsp;   e         &nbsp;&nbsp; t          &nbsp;&nbsp;&nbsp;_&nbsp;&nbsp;&nbsp;      w        &nbsp;&nbsp;    c      <br>
&nbsp;&nbsp;    e    &nbsp;&nbsp;   c    &nbsp;&nbsp;   m      &nbsp;&nbsp; _        &nbsp;&nbsp;    o   &nbsp;&nbsp;  g        &nbsp;&nbsp;     o                

<br>
Then, the string is encrypted to: `wloet_wcecm_ogo`
This text is not understandable by anyone and hence it makes the encryption process successful.

Here, the number of lines used while encrypting is 2. We can also increase it to any number that we want and encrypt our text. The number of lines must not exceed the length of plaintext and its a good practice to keep the number of lines less than or equal to half of the plaintext length.
This number of lines is referred to as key of the cryptography process. This key is common for both encryption and decryption. If the attacker gets the ciphertext he/she cannot get the idea of plaintext unless key is known. Hence, this key must be secured.

## Code snippets:
The following code considers key to be 2 and encrypts or decrypts the content as required.
### function for encryption:

```cpp
// return type is string that returns ciphertext and one argument that is plaintext
string encrypt(string plainText){
//   d denotes ciphertext
    string d="";
//   iterating over the plaintext for taking even indexed values
    for(int i=0;i<plainText.length();i+=2){
        d+=plainText[i];
    }
//   interating over the plaintext for taking odd indexed values
    for(int i=1;i<plainText.length();i+=2){
        d+=plainText[i];
    }
//   returning ciphertext
    return d;
}
// end of function
```

### function for decryption:
```cpp
// return type is string that returns plaintext for the argument of ciphertext
string decrypt(string CipherText){
//   d stores plaintext
    string d="";
//  outputs will vary for even and odd length ciphertext.
//   firstly considering even length of ciphertext
    if(CipherText.length()%2==0){
//       adding the ith and n/2+ith index substring values from ciphertext to d till all the characters are not considered
        for(int i=0;i<CipherText.length()/2;i++){
            d+=CipherText[i];
            d+=CipherText[i+CipherText.length()/2];
        }
    }
//   considering odd length of ciphertext
    else{
//       n will keep a count of the length of string d
        int n=0;
//       determining the d (plaintext string)
        for(int i=0;n<CipherText.length();i=(i+CipherText.length()/2+1)%CipherText.length()){
            d+=CipherText[i];
            n++;
        }
    }
//   returning plaintext stored in d
    return d;
}
// end of decryption function
```

### main function:
```cpp
// main function
int main(){
//   text will store the string to be encrypted or decrpted
    string text;
    cout<<"Enter the string: ";
    cin>>text;
//   a will store the choice opted (either encryption or decryption
    char a;
    cout<<"Enter E for encryption and D for decryption: ";
    cin>>a;
//   if-else ladder for performing cryptography and printing result
    if(a=='E'){
        cout<<"Encrypted text: "<<encrypt(text);
    }
    else if(a=='D'){
        cout<<"Decrypted text: "<<decrypt(text);
    }
    else{
        cout<<"Invalid input!";
    }
//   end of if-else
}
// end of main block
```

## Time complexity:
The time complexity of this code is O(N) since the whole plaintext/ciphertext is iterated only once to get the corresponding ciphertext/plaintext.

