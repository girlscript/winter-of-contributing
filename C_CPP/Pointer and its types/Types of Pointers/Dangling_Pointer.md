<hr>

# Dangling Pointer

## What is a Dangling Pointer?
* Dangling Pointers points to the address of memory location which has been deleted.
* The variable which the pointer has been pointing to is deallocated from the memory.

## How are Dangling Pointers created?
Dangling Pointers are created in three cases :-
* Dynamically allocated memory which was assigned to a pointer was freed from the memory.
* When an variable goes out of scope
* When the address of an local variable in an function is returned during a function call.

## Understanding Wild Pointers with Examples 
### 1. Deallocation
* An integer pointer is declared and dynamically allocated memory using `malloc()`, of size of int is initialised to the pointer.
* Now the address of an integer variable is assigned to the pointer.
* When the pointer is freed using `free()`, the memory is deleted or deallocated, i.e., now the pointer becomes an dangling pointer.

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
* Inside a if conditional Now the address of an integer variable is assigned to the pointer.
* When the pointer is freed using `free()`, the memory is deleted or deallocated, i.e., now the pointer becomes an dangling pointer.

### Example Code Snippet
```C
//C Language Program

//We are declaring a int pointer
int* pointer; 

int temp(){
    int num = 2000;
    pointer = &num;
}

printf("%d", *pointer);

//To avoid dangling pointer, we can assign NULL to the pointer now
```

### Output
```
Error: Invalid Pointer
```

### 3. Function Call
* An integer pointer is declared.
* Inside a if conditional Now the address of an integer variable is assigned to the pointer.
* When the pointer is freed using `free()`, the memory is deleted or deallocated, i.e., now the pointer becomes an dangling pointer.

### Example Code Snippet
```C
//C Language Program

//We are declaring a int pointer
int* pointer; 

int temp(){
    int num = 2000;
    pointer = &num;
}

printf("%d", *pointer);

//To avoid dangling pointer, we can assign NULL to the pointer now
```

### Output
```
Error: Invalid Pointer
```


<hr>