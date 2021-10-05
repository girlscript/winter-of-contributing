# Dangling Pointer

## What is a Dangling Pointer?
* Dangling Pointers points to the address of memory location which has been deleted.
* The variable to which the pointer has been pointing is deallocated from the memory.

## How are Dangling Pointers created?
Dangling Pointers are created in three cases:-
* Dynamically allocated memory which was assigned to a pointer was freed from the memory.
* When a variable goes out of scope
* When the address of a local variable in a function is returned during a function call.

## Understanding Wild Pointers with Examples 
### 1. Deallocation
* An integer pointer is declared and dynamically allocated memory using malloc(), of the size of int is initialized to the pointer.
* Now the address of an integer variable is assigned to the pointer.
* When the pointer is freed using free(), the memory is deleted or deallocated, i.e., now the pointer becomes a dangling pointer.

### Example Code Snippet
```C
//C Language Program

//We are declaring a int pointer and dynamically allocating memory
int* pointer = (int *)malloc(sizeof(int)); 

int num = 5;
pointer = &num;

//Now we are deallocating the memory pointed by the int pointer
//Thus pointer becomes a dangling pointer
free(pointer);
printf("%d", *pointer);

//To avoid dangling pointer, we can assign NULL to the pointer now
```

### Output
```
Error: Invalid Pointer
```

### 2. Variable Out of Scope
* An integer pointer is declared.
* In the inner block, an int variable num is created and its address is assigned to the pointer.
* Now when the control goes out of the scope of the inner block, the variable num is no more available and in the outer block, the pointer is pointing to the invalid memory location.

### Example Code Snippet
```C
//C Language Program

//We are declaring an int pointer
int* pointer; 

int temp(){
    int num = 2000;
    pointer = &num;
}

printf("%d", *pointer);

//To avoid a dangling pointer, we can assign NULL to the pointer now
```

### Output
```
Error: Invalid Pointer
```

### 3. Function Call
* An integer pointer is declared.
* A function call is made which returns an address to the int variable and it is stored in the pointer
* But since a local variable's address is returned and after returning, the function variables are deleted from the stack memory, the pointer here is a dangling pointer

### Example Code Snippet
```C
//C Language Program

int* func()
{
    int variable = 10;

    //Address to the local variable of the function returns to the function call
    return &variable;
}

int main()
{
    //We are declaring an int pointer
    int* pointer; 

    //func() is called. It returns the address of var and it is stored in the pointer.
    
    pointer = func();

    //var's address is returned but it is deleted from the stack memory after control of program returns back to main().
    //Thus the pointer here is an dangling pointer
    printf("%d", *pointer);
}

//To avoid dangling pointer, we can assign NULL to the pointer now
```

### Output
```
warning: address of stack memory associated with local
      variable 'var' returned [-Wreturn-stack-address]
    return &variable;
            ^~~~~~~~
1 warning generated.
```


<hr>
