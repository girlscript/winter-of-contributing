# Program to convert from any other base to Decimal in cpp.
## Binary to Decimal 
- *Binary number system :- It has only two symbol 0 & 1. by using these two we can represent any other number.*
- *Decimal number system :- This system has ten specific symbols like 0,1,2,3,4,5,6,7,8,9 which are called digits.*

*In this conversion,the individual digit of given Binary number is multiplied by base 2 to the power of its corresponding position value.*

[For example](../num_sys.md)
```cpp
#include <bits/stdc++.h>
using namespace std;
int binaryToDecimal (int n)
{
    int decimal = 0;                //initialize answer by 0 
    int x = 1;                      //initialize power by 1

    while (n>0)                     //loop till number greater than 0 
    {
        int lastdigit = n%10;           //get the last digit of number 
        decimal += x * lastdigit;       //add in answer
        x = x *2;                       //increase the power by base(2)
        n /= 10;                        //remove the last digit 
    }
    return decimal;                     //return answer
}
int main()
{
    int num;
    cout << "enter Binary number:- ";         //Input Binary number 
    cin >> num;                         

    cout<<binaryToDecimal(num);               //call a function
}
```
## OUTPUT:- 
![bTd](https://user-images.githubusercontent.com/70843941/138642039-17674329-9210-4e7b-99f0-aaf21c785662.png)

## Octal to Decimal 
- *Octal number system :- This system has only eight specific symbols like 0,1,2,3,4,5,6,7, It is known as base-8 system.*

*In Octal to Decimal conversion,the individual digit of given Octal number is multiplied by base 8 to the power of its corresponding position value.*
```cpp
#include <bits/stdc++.h>
using namespace std;
int octalToDecimal(int n)
{
    int decimal = 0;                        //initialize answer by 0 
    int x = 1;                         //initialize power by 1

    while (n > 0)                           //loop till number greater than 0
    {
        int lastdigit = n%10;                 //get the last digit of number
        decimal += x * lastdigit;              //add in answer
        x *= 8;                                 //increase the power by base(8)
        n/= 10;                                 //remove the last digit 
    }
    return decimal;                             //return answer
}

int main()
{
    int num;
    cout << "enter octal number:- ";                //Input octal number 
    cin >> num;

    cout<<octalToDecimal(num);                      //call a function
}
```
## OUTPUT  
![oTd](https://user-images.githubusercontent.com/70843941/138642094-539c791b-2344-4bfe-9f52-a239ccbcf9bf.png)

## HexaDecimal to Decimal 
- *Hexadecimal number system :- It has 16 specific symbols like 0,1,2,3,4,5,6,7,8,9 & A,B,C,D,E,F. hexadecimal uses A to F which are equivalent to decimal values 10 to 15.*

*In Hexadecimal to Decimal conversion,the individual digit of given Octal number is multiplied by base 8 to the power of its corresponding position value.*
```cpp
#include <bits/stdc++.h>
using namespace std;
int hexaToDecimal(string n)
{
    int sum = 0;                                      //initialize answer with 0 
    int x = 1;
    int s = n.size();                                 //get size of hexadecimal number
    for (int i = s - 1; i >= 0; i--)                  //loop each digit of number till greater than 0 
    {
        if (n[i] >= '0' && n[i] <= '9')               //if digit from 0 to 9 
        {
            sum += x * (n[i] - '0');                  //add in answer
        }
        else if (n[i] >= 'A' && n[i] <= 'F')          //else digit is a char 
        {
            sum += x * (n[i] - 'A' + 10);             //add in answer 
        }
        x = x * 16;                                    //increase power by base (16)
    }
    return sum;                                       //return answer
}

int main()
{
    string num;
    cout << "enter hexaDecimal number:- ";                    //input hexadecimal number
    cin >> num;

    cout<< hexaToDecimal(num);                                //function call
}
```
## OUTPUT  
![hTd](https://user-images.githubusercontent.com/70843941/138642131-feeee7fe-74f7-4e18-92b9-cd3bbb4f28f5.png)

