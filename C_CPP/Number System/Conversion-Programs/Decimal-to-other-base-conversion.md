# Programs to convert from decimal to any other base in cpp.
## Number System :- 
- Number system are necessary to represent computer data. Number system are differentiate by their base.
- where BASE is total digits or symbols available in that Number system.
- Detail on different [Types of Number System](../num_sys.md)
## Decimal To Binary 
*In decimal to binary conversion decimal number is divided by 2 and reminder will be consider as digit of equivalent binary number.These reminders are arranged in bottom to top order.*
```cpp
#include <bits/stdc++.h>
using namespace std;
// Decimal to Binary conversion function
int decimalToBinary(int n)
{
    int ans = 0;         // initialize answer by 0 
    int rem = 1;         // initialize reminder by 1;
    int i = 1;           // placevalue of answer
    // loop until number not equal to 0
    while (n != 0)
    {
        rem = n%2;      //store the reminder 
        n /= 2;         // divide num by base(2), store the Quotient
        ans = ans + rem * i ;  // store the answer 
        i *= 10;  // increment placevalue 
    }
    return ans ;
}
int main()
{
    //Take input as decimal number 
    int num;
    cout << "enter decimal number:- ";
    cin >> num;
    cout<< decimalToBinary(num);   // function call
}
```
## OUTPUT  
![binary](https://user-images.githubusercontent.com/70843941/138641632-58408401-95ef-40bd-9627-363fa94061c1.png)

## Decimal To Octal
*Here the decimal number is divided by 8 and remainder will be the digit of equivalent octal number. these remainders are arranged in reverse (bottom to top) order.*
```cpp
#include <bits/stdc++.h>
using namespace std;

// Decimal to octal conversion function
int decimalToOctal(int n)
{
    int ans = 0;          // initialize answer by 0 
    int rem = 1;          // initialize reminder by 1;
    int i = 1;            // placevalue of answer
    
 // loop until number not equal to 0
    while (n != 0)
    {
        rem = n%8;          // divide num by base(8), store the reminder 
        n /= 8;             // store the Quotient
        ans = ans + rem * i ;       // store the answer 
        i *= 10;                     // increment placevalue 
    }
    return ans ;

}
int main()
{

    int num;
  
    //Take input as decimal number 
    cout << "enter decimal number:- ";
    cin >> num;
    cout<< decimalToOctal(num);         //function call
}
```
## OUTPUT  
![octal](https://user-images.githubusercontent.com/70843941/138641591-c092f98d-1550-4a0f-bf86-759698948025.png)

## Decimal To HexaDecimal
*In this conversion the decimal number is divided by 16 and remainder will be the digit of equivalent hexadecimal number. these remainders are arranged in reverse (bottom to top) order.*
*(Note:- if remainder is 10, 11, 12, 13, 14, 15 then in hexadecimal it will be A,B,C,D,E,F respectively.)*
```cpp
#include <bits/stdc++.h>
using namespace std;

// decimalTOHexadecimal function defination 
void decimalToHexadecimal(int n)
{
    int i = 1;
    char ans[100];        //character array for answer
    int rem = 1;          //initialize reminder by 1
    
    //loop until number not eual to 0
     while (n != 0)
    {
        rem = n % 16;     //divide num by base(16), store reminder
        // if reminder less than 10, 48 is added to it according to ASCII value
        //else 55 is added
        if (rem < 10)      
            ans[i++] = rem + 48;
        else
            ans[i++] = rem + 55;
        n = n / 16;         //store the Quotient
    }
    cout << "\nHexadecimal => ";
    for (int j = i-1; j > 0; j--)       //print the answer(array) in reverse order
        cout << ans[j];
}
int main()
{
    //Take input as decimal number 
    int num;
    cout << "enter decimal number:- ";
    cin >> num;
    decimalToHexadecimal(num);      //function call
}
```
## OUTPUT  
![hexadecimal](https://user-images.githubusercontent.com/70843941/138641536-6b176083-7daa-4d68-8c0b-f211d1ed4351.png)

