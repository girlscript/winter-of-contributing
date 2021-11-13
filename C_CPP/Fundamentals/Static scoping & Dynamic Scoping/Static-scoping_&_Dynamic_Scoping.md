# Static scoping & Dynamic Scoping

## Static Scoping 

 
- Static scoping is known as **Lexical scoping.** 
- Static scoping of a variable is resolved by searching its containing block and so on.
- Static variable are variable which have a property of preserving their values even when they go out of Scope.
- They preserve their value from the previous scope and are not initialized again. 
- Static variable reamain in memory throughout the span of the program.

Example :-
 ```cpp
#include<stdio.h>
int num=10;
int main(){
	int num=34;
	printf("%d",num);
	return 0;
}
```
Output

```
34
```
Output is **34** because Compiler first searches in its nearest and local block. Local value is **34** So output is **34**.

Example :-
```cpp
#include<stdio.h>

int num=10;
int fun1(){
	return num;
}

int fun2(){
	int num=20;
	return fun1();
}

int main(){
	printf("%d",fun2());
	return 0;
}
```
Output
```
10
```
In this case compiler first search in the current block then after global. So output is here **10**.

## Dynamic Scoping
Dynamic scoping of a variable is resolved by searching its containing block and if not found, then searching its calling funtion and if still not found then the function which called that calling funtion will be seached.

Example :-
```cpp
#include<stdio.h>

int num1=15;
int fun1(int num2){
	num2 = num2+10;
	num2 = fun2(num2);
	return num2;
}

int fun2(int num2){
	int result;
	result = num1 +num2;
	return result;
}

int main(){
	int num1 = 20;
	num1 = fun1(num1);
	printf("%d",num1);
	return 0;
}
```
Output
```
45
```
