<hr>

# Void Pointer

## What is a Void Pointer?
* Void Pointers do not hold the address of any specific data type, so they are also called Generic Pointers.
* It can hold the address of any data type.
* Void Pointers can be typecasted into any data type for many applications.
* To dereference a void pointer, it first needs to be typecasted to the data type of the stored value in the address.

## How to Declare a Void Pointer?
* Syntax - `void* pointer_name;`. 
* For example - `void *ptr;`

## Understanding Void Pointers with Examples
For example - there is a void pointer declared in a C program, like `void *p;`  
Now if an integer variable's address is assigned to the void pointer, it stores the address of that int variable. like `p = &integer;`  
Similar is the case with char or any other data type.  
Now to dereference and print the value, the void pointer needs to be typecasted into an int pointer. Example of typecasting - `(int *)p;`

### Example Code Snippet
```C
//C Language Program

//We are declaring a void pointer
void* pointer; 

int num = 5;

//We are assigning the address of num, which is an integer, to the void pointer
//While printing, we are typecasting pointer to int, to access the integer at the address through dereferencing
pointer = &num;
printf("num is %d\n", *(int*)pointer);

char letter = 'm';

//Now we are reassigning the value of the void pointer to the address of the variable letter, which is a char.
//While printing, we are typecasting pointer to char, to access the character at the address through dereferencing
pointer = &letter;
printf("letter is %c", *(char *)pointer);
```

### Output
```
num is 5
letter is m
```

<hr>
