<h1>Number Theory</h1>
Number theory is a branch of pure mathematics devoted to the study of the natural numbers and the integers. It is the study of the set of positive whole numbers which are usually called the set of natural numbers. As it holds the foundational place in the discipline, Number theory is also called <b>"The Queen of Mathematics".</b>

<h1>Find all factor of a natural number?</h1>

```cpp

// C++ implementation of Naive method to print all
#include<iostream>
using namespace std;
void printDivisors(int n)
{
	for(int i = 1; i <= n; i++)
		if(n%i==0)
			cout <<" " << i;
}
int main()
{
	cout <<"The divisors of 100 are: \n";
	printDivisors(100);
	return 0;
}
```


<h1>Input</h1>
n:10
<h1>Output</h1>
1 2 5 10

<h1>Algorithm</h1>
->First, we have to input an integer n<br>
->Second, we can run a for loop, initializing i from 1 and increment it until it is less then n.<br>
->Third, Use if condition in for loop and check n using modulus operator ie if n%i==0 then print i.<br>   
->Fourth, Print all the values of i.