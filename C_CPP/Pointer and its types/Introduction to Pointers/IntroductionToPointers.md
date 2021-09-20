<hr>

# Introduction to Pointers

## Memory
* Memory in a typical computer system is divided into small units called bytes(1 byte = 8 bits).
* Each byte of the memory has a unique address for it.
* Every variable made of any datatype with a value assigned to it, like `int a = 1;`, is stored in memory.

## What are pointers?
* Pointers are variables which stores the address of another variable or a memory location.
* Pointers contains address of a variable of same data type.

## Understanding Pointers With an Example
For example, lets imagine a computer having a memory of size 1500 bytes. In which first byte's address is 0 and its last byte's address is 1499.  

A C/C++ language program consists of code:- `int numberVariable = 5;`. 
Here, for an integer variable - 4 bytes of memory is being allocated, i.e., 1004-1007, by the computer when the program is being run.  

Now, `numberVariable` is located at address 1004, which is the starting address of the variable. 
This address 1004 can be stored in a variable called pointers.

Note : Memory addresses here are taken as base 10 integer numbers(like 1004, 1007) for simple understanding only. 

## How to Declare Pointers
Pointers are declared with a data type of variable so that its address can be stored.  
It is declared with * (Dereference Operator or Indirection Operator)
Syntax for declaration of pointer - `data_type *pointer_variable_name;`  

After pointer declaration, to initialise the address of the variable to the pointer, & (Address Operator) is used.  
Initialising a value to the pointer - `pointer_variable_name = &data_variable_name;`

## Example Code Snippet 
```C
//for example, address of numberVariable --> 0x7ffcded83754
int numberVariable = 5;

//integer pointer ptr contains the value 0x7ffcded83754, i.e., address of numberVariable is assigned to the pointer.
int* ptr;
ptr = &numberVariable;

//value of ptr is printed in the output console
printf( "%p", ptr );
```
### Output
```
0x7ffcded83754
```
