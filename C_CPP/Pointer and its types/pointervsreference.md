# Pointers vs References in C++

This documentation highlights the differences between pointers and references on the given criteria.

## Definition

* A **pointer** is a variable that holds memmory address of another variable. It can be dereferenced with a `*`.

* A **reference** variable is an alias, that is, another name for an already existing variable. It is similar to a *const pointer*.

## Declaration and Initialization

* Pointer

   ```C++
   int a = 5;
   int *p = &a;
   ```

* Reference

   ```C++
   int a = 5;
   int &ref = a;
   ```

## Memory Adddress

* **Pointer** has its own memory address and size on stack. So the pointer variable and variable it points to, have different memory adresses.

* **Reference** shares same memory location as original variable and also takes up some space on stack.

## Arithmetic Operations

- Various arithmetic operations can be performed on pointers. Pointers can also iterate over an array. Following are some examples of pointer artithmetic:

   ```C++
   int *ptr;  
   ptr=ptr+2;     //addition
   ptr--;         //subtraction
   ```

- There is no reference artithmetic. It can't iterate over an array. For example:

   ```C++
   int value=90;  
   int &a=value;  
   &a=&a+5         // throws compile time error
   ```

## Reassignment

*  **Pointer** can be reassigned. The reassignment is useful while working with linked lists, trees, etc.

   ```C++
   int a, b;
   int *p=a;
   *p=b;
   ```

* **Reference** cannot be reassigned. It must be assigned only once at initialisation.

   ```C++
   int i, k;    // variable declaration  
   int &a=i;  
   &a=k;        // error   
   ```
This code snippet shows the error *multiple declarations of int &a not allowed*. Hence we conclude that reassignment operation is not valid for the reference variable.

## Null Assignment

- Pointer can be assigned `NULL` directly.

- Reference can not be assigned `NULL` directly.

## Indirection

There can be arbitrary number of nested pointers to **pointers** offering many levels of indirection. Example:

```C++
int a = 10;
int *p = a;
int **q = *p;
```

**References** only offer one level of indirection. There cannot be reference to a reference.

## Uses

* References can be used in function parameters and return types.

* Pointers can be used to traverse an array or for other data structures like linked lists, trees, etc.

## Mention of

[Stack Overflow](https://stackoverflow.com/questions/57483/what-are-the-differences-between-a-pointer-variable-and-a-reference-variable-in)

[Javatpoint](https://www.javatpoint.com/cpp-reference-vs-pointer)