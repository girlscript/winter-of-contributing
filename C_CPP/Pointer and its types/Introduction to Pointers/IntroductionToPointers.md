<hr>

# Introduction to Pointers

## Memory
* Memory in a typical computer system is divided into small units called bytes(1 byte = 8 bits).
* Each byte of the memory has a unique address for it.
* Every variable made of any datatype with a value assigned to it, like `int a = 1`, is stored in memory.

## What are pointers?
* Pointers are variables which stores the address of another variable or a memory location.

## Understanding Pointers With an Example
For example, lets imagine a computer having a memory of size 1500 bytes. In which first byte's address is 0 and its last byte's address is 1499.  

A C/C++ language program consists of code:- `int numberVariable = 5;`. 
Here, for an integer variable - 4 bytes of memory is being allocated, i.e., 1004-1007, by the computer when the program is being run.  

Now, `numberVariable` is located at address 1004, which is the starting address of the variable. 
This address 1004 can be stored in a variable called pointers.

Note : Memory addresses here are taken as base 10 integer numbers(like 1004, 1007) for simple understanding only. 

## Example Code Snippet 
```C
//address of numberVariable --> 0x7ffcded83754
int numberVariable = 5;

//integer pointer ptr contains the value 1004, i.e., address of numberVariable is assigned to it
int* ptr = &number;

//value of ptr is printed in the output console
printf("%p", *ptr);
```
### Output
```
0x7ffcded83754
```
