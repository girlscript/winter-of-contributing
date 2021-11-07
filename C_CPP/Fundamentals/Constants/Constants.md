# CONSTANT DECLARATION

### What are constants?
Constants are certain variables whose values cannot be changed once assigned. In other words, they are fixed values in a programming language.

Constants can be defined in 2 ways in the CPP programming language. These are:
- _const_ keyword
- _#define_ preprocessor directive.

Let us take a look at the working of the both.

## _const_ Keyword

The _const_ keyword is written before datatype of a variable to make that particular variable a constant. It has the following syntax:
```
	const datatype variable_name;
```
*Example*:

```
	const int v= 12; // constant declaration
	int p= 5; // variable declaration
	p++; // Modifying `p` is possible as it is a variable.
	v++; // This line shows *error message* as the value of constant cannot be modified.
```
Let us see the use of the _const_ keyword through a program.
```CPP
	#include<bits/stdc++.h>
	using namespace std;

	int main()
	{
		const int k= 12;
		cout<<k;
		return 0;
	}
```
### OUTPUT:
```
	12
```
## _#define_ preprocessor directive Keyword

The _#define_ preprocessor directive is also used to declare a constant value to an identifier. It has the following syntax:
```
	#define identifier_name value
```
*Note:* In this declaration no semicolon (`;`) is used.

Let us understand its use with the help of a code.
```CPP
	#define RENT 1000;
	#include<bits/stdc++.h>
	using namespace std;

	int main()
	{
		if(RENT> 1000)
			cout<<"High Rent";
		else
			cout<<"Low Rent";
		return 0;
	}
```
### OUTPUT:
```
	Low Rent
```

### ADVANTAGES
Let me explain the advantages with the help of the above code. In the above code as we can see the value of rent is fixed. The calculations are performed in accordance with the value of rent. So, if the owner increases the rent it is not possible to change the value everywhere in the program. Therefore, having the constant variable helps. Thus, it helps us to simplify complex situations.

