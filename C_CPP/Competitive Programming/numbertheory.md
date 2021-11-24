# Number Theory
Number theory is a topic in competitive programming. It contaions approximately 14 algorithms. It is used to find factors of integers, prime number and to solve integeer equations.

**Fourteen algorithms** are:

1. Euclid's Algorithm
2. Modular Multiplicative Inverse
3. Sieve of Eratosthenes
4. Segmented Sieve
5. Linear Diophantine Equation
6. Chinese Remainder Theorem
7. Lucas Theorem
8. Totient Theorem
9. Wilson Theorem
10. Miller and Rabin Primarity Test

# Find all factor of a natural number?

```cpp

// C++ implementation of Naive method to print all
#include<iostream>
using namespace std;
void divisors(int a)
{
	int i;
	for( i = 1; i <= a; i++)
		if(a%i==0)
			cout <<i<<" ";
}
int main()
{
	cout <<"The divisors of 35 are: \n";
	divisors(35);
	return 0;
}
```


## Input
a : 35
## Output
1 5 7

As in above code i have not initialised 'a' using runtime input. We have input the value of 'a' at the time i was declaring the defintion of int main. So, we can also used runtime method also.
### Example

```CPP
int main()
{
	int a;
	cout<<"Enter the number whose divisor you want to calculate";
	cin>>a;
	divisors(a);//Function call
}
```

# Algorithm Used
- First, we have to input an integer 'a'
- Second, we can run a for loop, initializing i from 1 and increment it until it is less then 'a'.
- Third, Use if condition in for loop and check 'a'using modulus operator ie if a%i==0 then print i.   
- Fourth, Print all the values of i.
