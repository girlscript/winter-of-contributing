<hr>

# NULL Pointer

## What is a NULL Pointer?
* NULL Pointers are pointers that do not have any address assigned to them.   
* The pointer points to NULL, i.e. nothing.

## How to Declare a NULL Pointer?
* Assign the value `NULL` to the pointer during declaration. 
* For example - `int *pointer = NULL;`

### Example Code Snippet
```C
//C Language Program

//A pointer of type int is created and NULL is assigned to it, so now it is a NULL pointer
//Pointer is pointing to no address.
int *pointer = NULL;

//printing the address stored in the pointer. Since nothing is stored, the output will be (nil)
printf("%p", pointer);
```
### Output
```C
(nil)  
```

<hr>
