## EUCLID ALGORITHM :-

### GCD (Greatest Common Divisor)
In our childhood, we used to call it HCF (Highest Common Factor). GCD of two
numbers is the largest number that divides both of them.

### The algorithm is based on the below facts :-

* If we subtract a smaller number from a larger (we reduce a larger number), GCD doesn’t change. So if we keep subtracting     repeatedly the larger of two, we end up with GCD.
* Now instead of subtraction, if we divide the smaller number, the algorithm stops when we find remainder 0.
<br>

We use the logic that : `gcd(a,b) = gcd(b,a%b)`

```c
#include<iostream>
using namespace std;

//Function for Finding GCD
int GCD(int a, int b)
{
    while(b!=0)
    {
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}

int main()
{
    int a,b;
    cout<<"ENTER ANY TWO NUMBERS : ";
    cin>>a>>b;
    if(a>b)
    cout<<"GCD of A and B is : "<<GCD(a,b);
    else 
    cout<<"GCD of A and B is : "<<GCD(b,a);
    return 0;
}
```
```c
OUTPUT : 
ENTER ANY TWO NUMBERS : 10 35
GCD of A and B is : 5
ENTER ANY TWO NUMBERS : 270 192  
GCD of A and B is : 6
ENTER ANY TWO NUMBERS : 10 10
GCD of A and B is : 10
```
```c
//RECURSIVE APPROACH FOR FINDING GCD OF TWO NUMBERS 
#include<iostream>
using namespace std;

//Function for Finding GCD
int GCD(int a, int b)
{
    if (a == 0)
        return b;
    return GCD(b % a, a);
}

int main()
{
    int a,b;
    cout<<"ENTER ANY TWO NUMBERS : ";
    cin>>a>>b;
    if(a>b)
    cout<<"GCD of A and B is : "<<GCD(a,b);
    else 
    cout<<"GCD of A and B is : "<<GCD(b,a);
    return 0;
}
````
```c
OUTPUT : 
ENTER ANY TWO NUMBERS : 45 27
GCD of A and B is : 9
ENTER ANY TWO NUMBERS : 10 15  
GCD of A and B is : 5
ENTER ANY TWO NUMBERS : 10 10
GCD of A and B is : 10
```
