## Euclidean algorithms :-

### GCD (Greatest Common Divisor)
In our childhood, we used to call it HCF (Highest Common Factor). GCD of two
numbers is the largest number that divides both of them.

### The algorithm is based on the below facts :-

* If we subtract a smaller number from a larger (we reduce a larger number), GCD doesn’t change. So if we keep subtracting     repeatedly the larger of two, we end up with GCD.
* Now instead of subtraction, if we divide the smaller number, the algorithm stops when we find remainder 0.
<br>

```c
// Basic Euclidean Algorithm
#include <bits/stdc++.h>
using namespace std;
 
// Recursive function returning gcd of a and b
int gcd(int a, int b)
{
    if (a == 0)
        return b;
    return gcd(b % a, a);
}

//Iterative function returning gcd of a and b
int gcd(int a , int b)
{
    while(b!=0)
    {
        int temp=a%b;
        a=b;
        b=temp;
    }
    return a;
}

// Driver Code
int main()
{
    int a = 10, b = 15;
    cout << "GCD(" << a << ", "
         << b << ") = " << gcd(a, b)<< endl;

    a = 35, b = 10;
    cout << "GCD(" << a << ", "
         << b << ") = " << gcd(a, b)<< endl;

    a = 31, b = 2;
    cout << "GCD(" << a << ", "
         << b << ") = " << gcd(a, b)<< endl;
         
    return 0;
}
```

```c
OUTPUT: 
GCD(10, 15) = 5
GCD(35, 10) = 5
GCD(31, 2) = 1
```
