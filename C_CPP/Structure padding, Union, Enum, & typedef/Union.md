# What is Union Data Type ?
 A Union is an *User-defined Type* in C Programming Language. Unions are used to save memory, To better understand It is a memory location shared by two or more variables of different Data Types. It allow data members which are mutually exclusive to share the same memory. This is quite important
when memory is valuable, such as in embedded systems. Unions are mostly used in embedded programming
where direct access to the memory is needed.
## Syntax of Union Data Type 
Syntax for declaring a union is same as that of declaring a *Structure* except the keyword **struct**. The general form of **Union** is: 
>**union** *union-type-name* {<br />	*type member-name*<br />	*type member-name*<br />	*type member-name* <br /> .<br /> .<br /> .<br/>} *union-variable* ;
 
 __For example__ :-
  ```c
union Test{
	int marks;
	char grade;
};
```
This is just declaration of union without any *union-variables*. We can declare a variable either by placing its name at the end of the declaration or by using a separate declaration statement. In **C**, a union name is its *tag* and it must be preceded by the keyword union.To declare a union variable called **Chemistry** of type **Test** using the definition just given, write

  ```c
union Test Chemistry;

```
When declaring union variables in **C++**, we can only the type name we don't need to precede it with the keyword **union** *i.e.,* In C++, the name of a union defines a complete type name. *For example*, here **Chemistry** is declared in C++:

  ```cpp
Test Chemistry;

```
## Memory Allocation of Union Data Type 
In **Chemistry**, both *integer* **marks** and *character* **grade** share the same memory location. As **marks** occupies 4 bytes (assuming 4-byte integers) and **grade** uses only 1. *Figure* shows how **marks** and **grade** share the same address. At any point in our program, we can refer to the data stored in a **Chemistry** as either an *integer* or a *character*.

![image](https://user-images.githubusercontent.com/68266741/136250306-fb38d584-0c73-475c-a1b7-4d27dc3d5167.png)

When a **union** variable is declared, the compiler automatically allocates enough storage to hold the largest member of the union. For example (assuming 4-byte integer **Chemistry** is 4 bytes long so that it can hold **marks**, even though **grade** requires only 1 byte.

## Accessing Union Member
To access a member of a union, use the same syntax that we would use for *structures* the dot and arrow operators. If we are operating on the union directly use the dot operator. If the union is accessed through a pointer, we will use the arrow operator. *For example*, to assign the integer 80 to element **marks** of **Chemistry**, write:
 ```cpp
Chemistry marks = 80;

```
In the next example, a pointer to **Chemistry** is passed to a function:
  ```c
void func(union Test *check){

	check->marks = 80; // assign 80 to chemistry through a pointer

}
```

## Implementation of Union Data Type
 ```c
#include <stdio.h>

union Test {
	int marks;
	char grade;
};

int main() {

union Test Chemistry;
Test.marks = 80; 
Test.grade = 'B'; 

printf("The Marks  %d and Grade %c is obtained in the subject Chemistry. \n\n",Test.marks,Test.grade);

return 0;

}

```
### Output
```c
The Marks 80 and Grade B is obtained in the subject Chemistry.

```
