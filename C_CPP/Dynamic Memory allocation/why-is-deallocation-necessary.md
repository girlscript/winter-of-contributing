# Why is Deallocation necessary?  

To avoid ***'memory leakage'***. Memory leakage is a situation where, once memory is allocated dynamically for a variable and later if the allocated memory is not de-allocated after its purpose is satisfied, during the program execution, the memory gets lost. This problem, where in the memory is dynamically allocaed or reserved but not released and hence not accessible to any of the program is called "memory leakage".  

Here's a code below explaining the same:  
```C++
int main()
{
   int *a;
   a = new int;
   *a = 10;
   a = new int;
   *a = 20;
}
```  

In the above program, initially the pointer 'a' contains the starting address of the dynamically allocated memory to store an integer value. This is evident from the statements  
```C++
a = new int;
*a = 10;
```  

Let the memory allocated be 2000 and 2001, for example. Now again, the memory is once again allocated to store an integer value and the starting address is returned to the pointer 'a'. This is evident from the statement,  
```C++
a = new int;
*a = 20;
```  

Now, the memory allocated may be 3000 and 3001, for example. This is done without freeing the previously allocated memoery is lost and cannot be accessed by any of the program, as the pointer is now pointing to a new value. Hence, there is a "memory leakage". A wastage of memory. Hence to avoid this "memory leakage", we use "delete" operator to deallocate the allocated memory.
