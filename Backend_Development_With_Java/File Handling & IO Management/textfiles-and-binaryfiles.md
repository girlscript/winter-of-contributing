# Text Files and Binary Files 

## _Introduction_

If you store any files, it will be either stored in text mode or binary form. 

There are two forms of data:

- Character Data  
- Numerical Data

Here's is an example below:

```C++

#include<iostream>
#include<fstream>
using namespace std;
int main() {
  char c = 'A';
  int i = 10;
  return 0;
}

```

When the program above gets executed, the character 'A' in the variable 'c' will print 65 if it's called in a binary form because the ASCII value of 'A' is 65, and the binary equivalent of 65 is 01000001.

## _Binary Files:_

A file where output and input operations are performed in binary mode is called Binary File. If 11111 integer take 4 bytes of memory, then the same integer will take 4 bytes in binary file also.

The value of the integer will be saved in binary format in both file and memory.

<br />

## _Text Files:_

A file where output and input operations are performed in text mode is called Text File. If 11111 integer take 4 bytes of memory, then the same value in text file will take 5 byte in a text file.

__*Note*__: In Character Data, there won't be any difference between text file and binary file because the Character Data takes only one byte both in file and memory.

Here's an example below explaining the same:

__1. *Binary Mode Input/Output:*__

   - Integer Value = 50
       - Occupies 4 bytes in File(hard disk)
       - Occupies 4 bytes in Memory(RAM)
   
   - Character Value = 'A'
       - Occupies 1 byte in File(hard disk)
       - Occupies 1 byte in Memory(RAM)
   

__2. *Text Mode Input/Output:*__

   - Integer Value = 50
       - Occupies 2 bytes in File(hard disk)
       - Occupies 4 bytes in Memory(RAM)
   
   - Character Value = 'A'
       - Occupies 1 byte in File(hard disk)
       - Occupies 1 byte in Memory(RAM)


---



