# UNDEFINED BEHAVIOUR

### What is *undefined behaviour* ?
In Layman's Terms, undefined behaviour is actually when the compiler is unable to predict the specific result of running a particular code. These types of cases occur a number of times in C and CPP and sometimes the compiler does not throw an error but instead keeps on executing the code to produce an undesirable result.

### When does an *undefined behaviour* occur?
Undefined behaviour occurs due to the following reasons:
- Dividing a number by zero.
- Trying to access a null pointer.
- Using uninitialized variables.
- Going out of bounds.
- Going beyond the limit of the datatype.

The above are the few common mistakes which lead to undefined behaviour. There are also other reasons that lead to this kind of behaviour.

Let us understand it clearly with the help of a sample code:
```CPP
	#include<bits/stdc++.h>
	using namespace std;

	int main()
	{
		cout<<25/0; // dividing a number by 0--- Produces undefined output
		return 0;
	}
```
### OUTPUT:
```
	Floating point exception
```

Another example is,
```C
	#include<stdio.h>
	#include<stdlib.h>

	int main()
	{
		int i= 100000000000000000;
		printf("%d", i); // here the value of `i` goes beyond the limit of `int`
		return 0;
	}
```
### OUTPUT:
```
	1569325056
```
We can see that in both the above cases the output produced is unpredictable.
In the first case the compiler throws an error whereas in the second case it prints an undesirable value.

### Preventing *undefined behaviour*
In order to prevent an undefined behaviour the programmers:
- Should be well versed with the programming language.
- Should understand the program workflow and working of the compiler.
- Should be well versed with the cases which can result in an undefined behaviour.
- Should not base his logic on cases which has a possibility of throwing an error.

It is necessary to prevent *undefined behaviour* as it may cause several problems including security vulnerabilities and buffer overflow attacks.
