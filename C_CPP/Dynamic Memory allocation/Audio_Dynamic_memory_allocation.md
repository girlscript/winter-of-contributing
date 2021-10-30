# DYNAMIC MEMORY ALLOCATION
The process of allocating memory to the variables during execution of the program or at run time is known as dynamic memory allocation.Till now whenever we needed an array
we had decleared a static array of fixed size,say
```cpp
int arr[100];
When this statement is executed,consecutive space for 100 integers is allocated .It is not uncommon that we may be using only 10% or 20% of the allocated space thereby wasting
rest of the space .To overcome this problem and to utilize the memory efficiently,C language provides a mechanism of dynamically allocating memory so that only the amount
of memory that is actually required is reserved.We reserve space only at the run time for the variables that are actually required.Dynamic memory allocation gives best
performance in situations in which we do not know memory requirements in advance.  
C provides four library routines to automatically allocate memory at the run time.These routines are as follows
- Malloc()
- Calloc()
- Free()
- Realloc()
<hr>

## Here is an audio giving overview of Dynamic memory allocation,its importance and use in C
[Audio for Dynamic Memory allocation in C](https://drive.google.com/file/d/1A01zWxgp6h-ElTcmgNN1IvTgwrGyT2ww/view?usp=sharing)