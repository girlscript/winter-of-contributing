# Encryption and Decryption

## 1. Encryption

<p> Encryption is the process of converting normal message into meaningless message. </p>

## 2. Decryption

<p> Decryption is the process of converting meaningless message into its original form. </p>

Let us take a situation, you are talking with your friend and you both don't want anybody to understand your chats that contain your private messages.

So your friend coded a program that encrpt and decrypt the messages for user.

He gave the code of encrypt program to you and taken the decrypt program for himself.

## 1. Program for Encryption of messages (For You)

```cpp
#include <iostream>
#include <stdio.h>
using namespace std;

void encrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr + 1; // increasing the ascii value of the alphabets by 1
        ptr++;
    }
}

// driver code
int main()
{
    char str[100];
    cout << "Enter a string: ";
    gets(str); // takes the string

    encrypt(str); // function call
    cout << "Encrypted string is : " << str << endl;

    return 0;
}
```

### Output

```
Enter a string: hello brother, how you doing?

Encrypted string is : ifmmp!cspuifs-!ipx!zpv!epjoh@
```

## 2. Program for Decryption of messages (For your Friend)

```cpp
#include <iostream>
#include <stdio.h>
using namespace std;

void decrypt(char *c)
{
    char *ptr = c;
    while (*ptr != '\0')
    {
        *ptr = *ptr - 1; // decreasing the ascii value of the alphabets by 1
        ptr++;
    }
}

// driver code
int main()
{
    char str[100];
    cout << "Enter a string: ";
    gets(str); // takes the string

    decrypt(str); // function call
    cout << "Decrypted string is : " << str << endl;

    return 0;
}
```

### Output

```
Enter a string: ifmmp!cspuifs-!ipx!zpv!epjoh@

Decrypted string is : hello brother, how you doing?
```
