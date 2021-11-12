# **ASSIGNMENT OPERATORS:**

Assignment operators are used to assign values to a variable or a constant. 

Some samples are:
```
a = 10;
a += 10; // This means a= a + 10;
```

There are several operators like:
`=, +=, -=, *=, /=, %=, >>=, <<=, |=, &=, ^=, ?:`

Let us look at the working of the assignment operators with the help of the code,
```CPP
    #include<iostream>
    using namespace std;

    int main()
    {
      int a=10; //using the first assignment operator

      a += 2; // a= a+2= 12 second assignment operator

      a -= 3; // a= a-3= 9 third assignment operator

      a /= 3; // a= a/3= 3 forth assignment operator

      a *= 2; // a= a*2= 6 fifth assignment operator

      a %= 2; // % returns the remainder. Therefore a= a%2= 0.

      cout<<a;
    }
```

The output of the code is `0`, after multiple different assignments.

Let us now look at the working of the remaining assignment operators i.e 
`<<= , >>= , |=, &=, ^=, and ?:`

The operators << and >> are known as the left-shift and right-shift operators 
respectively. | is the bitwise OR operator and & is the bitwise and operator.

The left-shift operator will shift the bits towards the left for the given number of times.
```
    int a= 2<<1;
    cout<<a;
```
The output of the code will be: 4

<strong>EXPLANATION:</strong>

The binary representation of 2 is 0010. On using the left-shift operator all 
bits will shift one position toward left and the last bit position will be 0 
making it 0100 which is the binary representation of 4.

Similarly, for the >> operator, bits shift towards the right.

Let us understand the code snipet,
```CPP
int a= 1;
a <<= 2; // 0001 left-shift 2 times gives 0100 which is 4
a >>= 1; // a= a>>1 right shift once which gives 0010 which is 2
cout<<a;
```
The output will be 2.

Let us now look at a different code snipet,
```CPP
int a= 1;
a |= 2; // a= a|2 which is 0001|0010 which gives 0011 which is 3
a &= 1; // a= a&1 which is 0011&0001 which gives 0001 which is 1
cout<<a;
```
The output will be 1. Thus, |= and &= are bitwise OR assignment operator and bitwise AND assignment operator respectively.

`^=` is the XOR assignment operator.
a ^= 2 when a=1 will assign the value of a to 3. 0010 and 0001 so 2 bits are
different which gives 0011 hence 3.

Let us now look at the working of the ternary operator. `?:`
```CPP
      int a=10;
      a= (a>5)?5:6;
```
Here, the final value of a is 5. 

<strong>EXPLANATION:</strong>

If the value of a is greater than 5 then a will be assigned the value 5 else it will be assigned the value 6. In the code, the value of a is initialized to 10 so it is greater than 5. Therefore, a is assigned the value 5.

### Assignment operators can be used in several other ways.

Let us implement assignment operator in a structure.
```CPP
        struct a
        {
            int l;
        };
        int main()
        {
            a s1, s2;
            s1.l= 15;
            s2= s1; // use of assignment operator
            cout<<s2.l; 
        }
```

Here, the output will be `15`. This is another way in which assignment operators can be used.
The same can be said for a class.


Now, we can clearly see the use of assignment operators.