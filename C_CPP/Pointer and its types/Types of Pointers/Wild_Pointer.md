<hr>

# Wild Pointer

## What is a Wild Pointer?
* Wild Pointers are pointers which are declared but have no address of any variable initialised to it.
* Thus they store address of arbritrary(unknown) memory location. 
* Garbage value(not a real address) may be initialised to the wild pointer.

## How to Make a Wild Pointer?
* We can declare a pointer of any data type.
* But when no address is assigned to the pointer, then it is called as a Wild Pointer.
* Syntax - `Data_Type* pointer_name;`. 
* For example - `char *ptr;` (or) `int *ptr2;`

## Understanding Wild Pointers with Examples
For example - there is a int pointer declared in a C program, like `int *p;`, but no address is assigned to it. So this becomes an wild pointer  

Note : Wild Pointers points to a garbage address and using them in programs may cause errors and program to eventually crash without producing the desired output.

## How to Avoid a Wild Pointer?
* Simply initialising the pointer will make the pointer from a wild pointer to a pointer of specific data type.
* Address to the data variable is to be assigned to the pointer.

### Example Code Snippet
```C
//C Language Program

//We are declaring a wild pointer
int* pointer; 

int num = 5;

//We are initialising address of num to the pointer which converts it from wild pointer to an int pointer.
pointer = &num;
printf("%d", *pointer);
```

### Output
```
5
```

<hr>