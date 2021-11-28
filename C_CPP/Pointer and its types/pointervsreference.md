# Pointers vs References in C++

This documentation highlights the differences between pointers and references on the given criteria.

<table>
<tr>
   <td> Criteria </td> <td> Pointers </td> <td> References </td>
</tr>
   
<tr>
   <td> Definition </td>
   <td> A pointer is a variable that holds memmory address of another variable. It can be dereferenced with a `*`.</td>
   <td> A reference variable is an alias, that is, another name for an already existing variable. It is similar to a *const pointer*.</td>
</tr>
   
<tr>
   <td> Declaration and Initialization</td>
   <td> Declaring a pointer:
      
   ```C++ 
   int a = 5; 
   int *p = &a; 
   ``` 
      
   </td>
   <td>Declaring a reference:
      
   ```C++ 
   int a = 5; 
   int &ref = a;
   ``` 
      
   </td>
</tr>
   
<tr>
   <td> Memory Adddress </td>
   <td>
      Pointer has as its own memory address and size on stack. So the pointer variable and variable it points to, have different memory adresses. 
   </td>
   <td>
      Reference shares same memory location as original variable and also takes up some space on stack.
   </td>
</tr>
<tr>
   <td> Arithmetic Operations </td>
   <td> Numerous arithmetic operations can be performed on pointers including arithmetic addition, subtraction etc. Pointers can also iterate over an array. Following are some examples of pointer artithmetic:

   ```C++
   int *ptr;  
   ptr=ptr+2;     //addition
   ptr--;         //subtraction
   ```
   
   </td>
   <td> There is no such thing as reference artithmetic. Nor can references iterate over arrays. For example:

   ```C++
   int value=90;  
   int &a=value;  
   &a=&a+5         // throws compile time error
   ```
      
   </td>
</tr>
<tr>
   <td> Null Assignment </td>
   <td>Pointer can be assigned NULL directly.</td>
   <td>Reference can not be assigned NULL directly.</td>
</tr>
<tr>
   <td> Reassignment </td>
   <td>Pointers can be reassigned. The reassignment is useful while working with linked lists, trees, etc. 

   ```C++
   int a, b;
   int *p=a;
   *p=b;
   ```
      
   </td>
   <td> References cannot be reassigned. It must be assigned only once at initialisation.

   ```C++
   int i, k;    // variable declaration  
   int &a=i;  
   &a=k;        // error   
   ```
      
   This code snippet shows the error *multiple declarations of int &a not allowed*. Hence we conclude that reassignment operation invalid for the reference variables.
   </td>
</tr>
<tr>
   <td> Indirection </td>
   <td>
   There can be arbitrary number of nested pointers to pointers offering many levels of indirection. Example:
```C++
int a = 10;
int *p = a;
int **q = *p;
```
      
   </td>
   <td>
      References only offer one level of indirection. There cannot be reference to a reference.
   </td>
</tr>
<tr>
   <td> Uses </td>
   <td> Pointers can be used to traverse an array or as a nase data type for other data structures such as linked lists, trees, etc.</td>
   <td> References can be passed in function parameters and return types. </td>
</tr>
</table>

## Mention of

[Stack Overflow](https://stackoverflow.com/questions/57483/what-are-the-differences-between-a-pointer-variable-and-a-reference-variable-in)

[Javatpoint](https://www.javatpoint.com/cpp-reference-vs-pointer)
