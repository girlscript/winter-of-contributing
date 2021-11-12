## EUCLID ALGORITHM :-

### GCD (Greatest Common Divisor)
In our childhood, we used to call it HCF (Highest Common Factor). GCD of two
numbers is the largest number that divides both of them.

### The algorithm is based on the below facts :-

* If we subtract a smaller number from a larger (we reduce a larger number), GCD doesn’t change. So if we keep subtracting     repeatedly the larger of two, we end up with GCD.
* Now instead of subtraction, if we divide the smaller number, the algorithm stops when we find remainder 0.
<br>

We use the logic that : `gcd(a,b) = gcd(b,a%b)`

### TIME COMPLEXITY :  O(Log min(a, b)) 
i.e if(a>b) then, TIME COMPLEXITY will be : `O(Log(b))` else
 if(b>=a) then, TIME COMPLEXITY will be : `O(Log(a))` and
TIME COMPLEXITY of both iterative and recursive approach is same.


<b>EXPLANATION OF ITERATIVE APPROACH</b>:
In the below program, GCD() is a function having two parameters i.e. a and b. If b is equal to 0, then loop will be terminated and a is returned to the main() function. Otherwise loop will be executed again and again till the value of b is not equals to zero. 
```c
//ITERATIVE APPROACH FOR FINDING GCD OF TWO NUMBERS
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
    cin>>a>>b;                                  //TAKING INPUT FROM USER
    if(a>b)
    cout<<"GCD of A and B is : "<<GCD(a,b);     //FUNCTION CALLING
    else 
    cout<<"GCD of A and B is : "<<GCD(b,a);     //FUNCTION CALLING
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
<b>EXPLANATION OF RECURSIVE APPROACH</b>:
In the below program, GCD() is a recursive function. It has two parameters i.e. a and b. If a is equal to 0, then b is returned to the main() function. Otherwise the GCD() function recursively calls itself with the values (b % a, a).
```c
//RECURSIVE APPROACH FOR FINDING GCD OF TWO NUMBERS 
#include<iostream>
using namespace std;
//Function for Finding GCD
int GCD(int a, int b)
{
    if (a == 0)
        return b;
    return GCD(b % a, a);                   //RECURSIVE CALLING     
}
int main()
{
    int a,b;
    cout<<"ENTER ANY TWO NUMBERS : ";
    cin>>a>>b;                                  //TAKING INPUT FROM USER
    if(a>b)
    cout<<"GCD of A and B is : "<<GCD(a,b);     //FUNCTION CALLING
    else 
    cout<<"GCD of A and B is : "<<GCD(b,a);     //FUNCTION CALLING
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

## GCD FUNCTION IN C++ STL :-
We have a inbuilt GCD Function in C++ STL which also uses Euclid Algorithm for finding GCD of two numbers.
To use this inbuilt function, you must first include the algorithm file:
### `#include <algorithm>`
SYNTAX : __gcd(num1,num2);

```c
//PROGRAM TO DEMONSTRATE USING OF __GCD() FUNCTION 
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int a,b;
    cout<<"ENTER ANY TWO NUMBERS : ";
    cin>>a>>b;
    cout<<"GCD of A and B is : "<<__gcd(a,b);     //FUNCTION CALLING
    return 0;
}
```
```c
ENTER ANY TWO NUMBERS : 10 35
GCD of A and B is : 5
ENTER ANY TWO NUMBERS : 270 192  
GCD of A and B is : 6
ENTER ANY TWO NUMBERS : 10 10
GCD of A and B is : 10
```
