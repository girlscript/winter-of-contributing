<h1>Number Theory</h1>
Number theory is a topic in competitive programming. It contaions approximately 14 algorithms. It is used to find factors of integers, prime number and to solve integeer equations.
<br>
Fourteen algorithms are:
<ol>
<li>Euclid's Algorithm</li>
<li>Modular Multiplicative Inverse</li>
<li>Sieve of Eratosthenes</li>
<li>Segmented Sieve</li>
<li>Linear Diophantine Equation</li>
<li>Chinese Remainder Theorem</li>
<li>Lucas Theorem</li>
<li>Totient Theorem</li>
<li>Wilson Theorem</li>
<li>Miler and Rabin Primarily Test</li>
</ol>
<h1>Find all factor of a natural number?</h1>

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


<h2>Input</h2>
a : 35
<h2>Output</h2>
1 5 7

<p>As in above code i have not initialised 'a' using runtime input. We have input the value of 'a' at the time i was declaring the defintion of int main. So, we can also used runtime method also.</p>
<h3>Example</h3>

```CPP
int main()
{
	int a;
	cout<<"Enter the number whose divisor you want to calculate";
	cin>>a;
	divisors(a);//Function call
}
```

<h1>Algorithm Used</h1>
->First, we have to input an integer 'a'<br>
->Second, we can run a for loop, initializing i from 1 and increment it until it is less then 'a'.<br>
->Third, Use if condition in for loop and check 'a'using modulus operator ie if a%i==0 then print i.<br>   
->Fourth, Print all the values of i.