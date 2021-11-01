# C vs CPP

C and CPP are one of the most commonly used programming languages. These 2 programming languages have a lot of similarities as well as differences.

Let us now look at the basic differences between these programming languages,

<table border="3">
	<tr>
		<th>C++</th>
		<th>C</th>
	</tr>
	<tr>
		<td>It is a high level language.</td>
		<td>It is an intermediate between high level and machine level language.</td>
	</tr>
	<tr>
		<td>It implements the concept of OOPs.</td>
		<td>It does not implement the concept of OOPs.</td>
	</tr>
	<tr>
		<td>Reference variables are supported.</td>
		<td>Reference variables are not supported.</td>
	</tr>
	<tr>
		<td>Access Modifiers are present.</td>
		<td>Access Modifiers are absent.</td>
	</tr>
	<tr>
		<td>cin and cout are used for input and output respectively.</td>
		<td>scanf and printf are used for input and output respectively.</td>
	</tr>
	<tr>
		<td>Namespace features are present.</td>
		<td>Namespace features are absent.</td>
	</tr>
</table>

As we can see, the C and CPP programming languages have a lot of differences. However, they also have a few similarities. These similarities are as follows,

- Syntax of conditional statements and loops are similar.
- Both C and C++ have the same syntax for single line and multi line comments.
- C and C++ have in-built variables and functions.
- Both C and C++ can implement the concept of Variadic functions.
- C and C++ were developed at the Bell Laboratories.

### SAMPLE C CODE
```C
	#include<stdio.h>
	int main()
	{
		printf("Hello World");
		return 0;
	}
```
*Output*
```
		Hello World
```

### SAMPLE CPP CODE
```CPP
	#include<iostream>
	using namespace std;

	int main()
	{
		cout<<"Hello World";
		return 0;
	}
```
*Output*
```
		Hello World
```

From the above codes the differences in the syntax are clearly visible.
Note: In the CPP program `printf` can also be used in place of `cout`. In fact, printf actually makes the program faster.

Let us now take a look at the existance of class in C++ and the difference between classes in CPP and structures in C.
```CPP
	#include<iostream>
	using namespace std;

	class ABC
	{
		int i;
		public:
		int j;
	};
	int main()
	{
		ABC obj;
		obj.j=10; // We cannot directly access `i` and initialize it.
		return 0;
	}
```
```C
    #include<stdio.h>
	struct ABC
	{
		int i;
		int j;
	};
	
	int main()
	{
		ABC obj;
		obj.j=10;
		obj.i=20; // `i` can be directly initialized.
		return 0;
	}
```

### EXPLANATION
Here we can see that in CPP the classes are in private mode by default and the structures in C are in public mode by default.

### Conclusion
The languages C and C++ have several differences and similarities. However, both languages have their own advantages and disadvantages. As of today, C++ is the third most popular language and is used widely all over the world.