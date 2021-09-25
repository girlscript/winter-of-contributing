<hr>

# Wild Pointer

## What is a Wild Pointer?
* Wild Pointers are pointers that are declared but have no address of any variable initialized to it.
* Thus they store the address of arbitrary(unknown) memory location. 
* Garbage value(not a real address) may be initialized to the wild pointer.

## How to Make a Wild Pointer?
* We can declare a pointer of any data type.
* But when no address is assigned to the pointer, then it is called a Wild Pointer.
* Syntax - `Data_Type* pointer_name;`. 
* For example - `char *ptr;` (or) `int *ptr2;`

## Understanding Wild Pointers with Examples
For example - There is an int pointer declared in a C program, like `int *p;`, but no address is assigned to it. So this becomes a wild pointer  

Note: Wild Pointers points to a garbage address and using them in programs may cause errors and the program to eventually crash without producing the desired output.

## How to Avoid a Wild Pointer?
* Simply initializing the pointer will make the pointer from a wild pointer to a pointer of a specific data type.
* Address to the data variable is to be assigned to the pointer.

### Example Code Snippet
```C
//C Language Program

//We are declaring a wild pointer
int* pointer; 

int num = 5;

//We are initializing the address of num to the pointer which converts it from wild pointer to an int pointer.
pointer = &num;
printf("%d", *pointer);
```

### Output
```
5
```

<hr>
