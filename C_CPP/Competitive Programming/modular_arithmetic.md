<h1>Modular Arithmetic in C++</h1>

Modular Arithmetic basically is related to mod expressions and how they are computed. So in this Documentation i'll
explain various Mod Expressions and there functionalities with some code examples.

Modulus Operation is not just about finding the remainder.
It is useful in many Algorithms & Programming Problems  because there 
are many Mod Properties which can help you solve many problems in Programming and derive important concepts . Therefore learning about these Mod operations would surely boost up your problem solving skills.

--------------------------------------------------------

Some of the Mod Properties are:-


* Modular Addition <br>
if There exists two numbers a and b 
 
 Property->  (a + b) mod m = ((a mod m) + (b mod m)) mod m

 Use->  Suppose we need to find the remainder after adding two large numbers in Programming then this property will be helpful as we can avoid the overflow and also the calculation will be fast enough to get the accurate result.

 Example:-
 <br>
 <b>Ques-> (a+b)%m</b>

 Code 
 ----------------------------
```
 #include<bits/stdc++.h>
 
 using namespace std;

 int main()

 {
     
     int a,b,m;
     cin>>a>>b>>m;

     int S=((a%m)+(b%m))%m;

     cout<<"The Remainder is"<<S<<endl;
 }
 ```

 * Modular Multiplication <br>

 For Two numbers a and b ,

 Property-> (a x b) mod m = ((a mod m) x (b mod m)) mod m

 Use-> If a and b both are large such that multiplying them is difficult .There we can use the concpet of modular multiplication.

 Example:-
 <br>
 <b>Ques->(a*b)%m</b>

 Code 
 ----------------------------

```
 #include<bits/stdc++.h>
 
 using namespace std;

 int main()

 {
     
     int a,b,m;
     cin>>a>>b>>m;

     int S=((a%m)*(b%m))%m;

     cout<<"The Remainder is"<<S<<endl;
 }
```

 * Modular Divison <br>

 For Two numbers a and b ,

 * Note:-

 * Check if inverse of b under modulo m exists or not


 Property-> (a / b) mod m = (a x (inverse of b if exists)) mod m


Use-> If a and b both are large such that division isn't possible .There we can use the concpet of modular Divison.

Example:-
 <br>
 <b>Ques->(a/b)%m</b>

 Code 
 ----------------------------
```

#include<iostream>

using namespace std;

// function for extended Euclidean Algorithm

int gcdExtended(int a, int b, int *x, int *y);

// Function to find modulo inverse of b.


// -1 when inverse doesn't exist

int modInverse(int b, int m)

{
	
    int x, y; 
	int g = gcdExtended(b, m, &x, &y);

	if (g != 1)
		return -1;

	// m is added to handle negative x
	return (x%m + m) % m;
}

// Function to compute a/b under modulo m

void modDivide(int a, int b, int m)

{

	a = a % m;
	int inv = modInverse(b, m);
	if (inv == -1)
	cout << "Division not defined";
	else
	cout << "Result of division is " << (inv * a) % m;
}

// find modular inverse.

int gcdExtended(int a, int b, int *x, int *y)

{


	if (a == 0)
	{
		*x = 0, *y = 1;
		return b;
	}

	int x1, y1; 
	int gcd = gcdExtended(b%a, a, &x1, &y1);

	// Update x and y using results of recursive
	// call
	*x = y1 - (b/a) * x1;
	*y = x1;

	return gcd;
}

// Driver Program

int main()

{

	int a = 7, b = 4, m = 1;
	modDivide(a, b, m);
	return 0;
}
```


 * Modular Exponentiation <br>

     For Two numbers a and b with power p 

 * Property->(ab) mod p = ( (a mod p) (b mod p) ) mod p
   
   Use->For Computing a^b efficently and speeding up the process.

   Example->

<br>
<b>Ques->(x^y)%p</b>


Code 
 ----------------------------

```
// C++ program to compute modular power -Iterative method

#include <iostream>
using namespace std;
 


int power(long long x, unsigned int y, int p)

{

    int res = 1;     
 
    x = x % p; // Update x if it is more than or
                // equal to p
  
    if (x == 0) 
    return 0; // In case x is divisible by p;
 
    while (y > 0)
    {
        // If y is odd, multiply x with result
        if (y & 1)
            res = (res*x) % p;
 
        // y must be even now
        y = y>>1; // y = y/2
        x = (x*x) % p;
    }
    return res;}
 
// Driver code

int main()

{

    int x = 3;
    int y = 6;
    int p = 14;
    cout << "Power is " << power(x, y, p);
    return 0;
}
```

<h1>Some Algorithms based on Modular Arithmetic</h1>

<ul>
<br>
<li>Euclidean Algorithm</li>
<li>Euler’s Totient Function</li>
<li>Chinese Remainder Theorem</li>
<li>Modulo Multiplicative Inverse</li>

</ul>
















 



 









 










