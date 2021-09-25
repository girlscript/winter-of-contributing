> # NUMBER SYSTEM 
>> Decimal number

>> Binary number

> Bit manipulation

------------------------
<h3>NUMBER SYSTEM  -><h3>
When we type some letter or words .The the computer translate them in numbers as computer can understand only number .

- The digit .
- The position of the digit in the number . 
- The base of the number syster ( Wher the base is define as the total number of digit available in the system ) .

<h4> DECIMAL NUMBER SYSTEM  -><h4>
Decimal number system has base 10 as it use 10 digit from 0 to 9 . In decimal number system .The succesive position to the left of the decimal point represented unit , tens , hundreds , thousand and so on .

Example :-

```
(1*1000) + (2*100) + (3*10) + (4*1)
(1*10^3) + (2*10^2) + (3*10^1) + (4*10^0)
1000 + 200 + 30 + 4
1234
```
<h4> BINARY NUMBER SYSTEM  -><h4>
Characteristics of the binary number system .

- Use  two digit 0 and 1 .
- Also called base 2 number system .
- Each position in binary number represent a  power of base ( 2 ) . 

Conversion binary to decimal :-
```
( 10101 )

 1          0         1         0        1
(1*2^4) + (0*2^3) + (1*2^2) + (0*2^1) + (1*2^0)
= ( 16 ) + ( 0 ) + ( 4 ) + ( 0 ) + ( 1 )
= ( 16 + 0 + 4 + 0 + 1)
= 21
```
## Bit Manipulation

- In programming, an n-bit integer is internally stored as a binary number that consists of n bits. 
- The C++ type int is a 32-bit type ( Depend Machine toMachine ), which means that every int number consists of 32 bits.


Example :-

The bit representation of the int number 43 .
```
00000000000000000000000000101011
```
- The bits in the representation are indexed from right to left .
- To convert a bit representation b<sub>k</sub> ... b<sub>2</sub>b<sub>1</sub>b<sub>0</sub> into a number .

<h3>b<sub>k</sub> <sub>2</sub>k + . . . . + b<sub>2</sub> <sub>2</sub>2 + b<sub>1</sub> <sub>2</sub>1 + b<sub>0</sub> <sub>2</sub>0 </h3>
 
- The bit representation of a number is either signed or unsigned.
- Signed representation is used, which means that both negative and positive numbers can be represented.
- A signed variable of n bits can contain any integer between −2n−1 and 2n−1 − 1.

Example :- 
The int type in C++ is a signed type, so an int variable can contain any integer between −231 and 231 − 1 .
```
11111111111111111111111111010101
```
- In an unsigned representation, only nonnegative numbers can be used, but the upper bound for the values is larger.
-  An unsigned variable of n bits can contain any integer between 0 and 2n − 1 .

Example :-

Unsigned int variable
can contain any integer between 0 and 232 − 1 .

- A signed number −x equalsan unsigned number 2n − x. 

Example :- 

The signed number x = −37 equals the unsigned number y = <sub>2</sub>32  − 37 :
```
#include<iostream>
using namespace std;
int main(){
    int x = -37;
    unsigned int y = x;
    cout << x <<endl;    // -37
    cout << y <<endl;    // 4294967259
    return 0;
}
```

If a number is larger than the upper bound of the bit representation, the number will overflow. In a signed representation, the next number after 2n−1 − 1 is −2n−1 and in an unsigned representation, the next number after 2n − 1 is 0 .

Example :-
```
#include<iostream>
using namespace std;
int main(){
    int x = 2147483647
    cout << x <<endl;          // 2147483647
    x++;
    cout << x <<endl;          // -2147483648
    return 0;
}
```
> Initially, the value of x is 231 − 1. This is the largest value that can be stored in an int variable, so the next number after 231 − 1 is −231 .

------------------------------------

> ## Bits Operations
>> And ( & ) Operation

>> Or ( || ) Operation

>> Xor ( ^ ) Operation

>> Not ( ~ ) Operation

<h3>And ( & ) Operation -></h3>

The and operation x & y produces a number that has one bits in positions where both x and y have one bits .

Examples ->
   <h4>22 & 26 = 18 </h4>

```
  10110       (22)
& 11010       (26)
-------------------
= 10010       (18) 
```
---------------------------------------------------------

<h3>Or ( || ) Operation -></h3>

The or operation x | y produces a number that has one bits in positions where at least one of x and y have one bits .

Examples ->
 <h4> 22 | 26 = 30 </h4>

 ```
   10110        (22)
| 11010        (26)
-------------------
=  11110       (30)
```
---------------------------------------------------------

<h3>Xor ( ^ ) Operation -></h3>

The xor operation x ˆ y produces a number that has one bits in
positions where exactly one of x and y have one bits .

Examples ->
 <h4>  22 ˆ 26 = 12 </h4>

 ```
   10110      (22)
ˆ 11010      (26)
------------------
= 01100      (12) 
```
---------------------------------------------------------

<h3>Not ( ~ ) Operation -></h3>

The not operation ~x produces a number where all the bits of x have been inverted. The formula ~x = −x −1 holds . It is also depend system to system .

Examples ->
<h4>  ~29 = −30 </h4>

 ```
  x =  29 00000000000000000000000000011101 
~x = −30 11111111111111111111111111100010 
```
-------------------------------
## Bit Shifting
- The left bit shift x << k appends k zero bits to the number, and the right bit shift x >> k removes the k last bits from the number. 

Example :-

 14 << 2 = 56
 
 14 and 56 correspond to 1110 and 111000. Similarly, 49 >> 3 = 6, because
49 and 6 correspond to 110001 and 110. Note that x << k corresponds to multiplying x by 2k , and x >> k corresponds to dividing x by 2k rounded down to an integer.

-----------------------------------------------------
## Bit Masking  
A bit mask of the form 1 << k has a one bit in position k, and all other bits are zero, so we can use such masks to access single bits of numbers. In particular, the kth bit of a number is one exactly when x & (1 << k) is not zero. 

Example ->
```
#include<iostream>
using namespace std;
    int main(){
    for (int k = 31; k >= 0; k--) {
        if (x&(1<<k)) 
            cout << "1"<<endl;
        else 
            cout << "0"<<endl;
    }
    return 0;

```