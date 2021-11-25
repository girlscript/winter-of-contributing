# THE "SET_NEW_HANDLER" FUNCTION  

- When the operator `new` cannot find a contigous block of memory large enough to hold the desired object, at this point, a special function called the `set_new_handler()` is called. Or rather, an internal pointer to a funtion is checked, and if the pointer is non-zero, then the function it points to is called.  

- By default, `new` operator returns a NULL if it fails to allocate memory. This default behaviour can be changed i.e., if the `new` operator fails to allocate the desired memory for an object, instead of returning a NULL, we could write a function which prints the error message and exits the program for debugging purpose.  

- There is an internal function pointer `_new_handler` , which usually contains a NULL value, which is called by the `new` when it fails and hence the failed `new` operator returns a NULL value. Now instead of a NULL value, we can point the `_new_handler` function pointer to any user defined function is called. To make the `_new_handler` function to point to some user-defined function definition, C++ provide a built-in function by name `set_new_handler()` function.  

- `set_new_handler()` function sets the `_new_handler` function pointer to point to a user-defined function which will be called when a request for dynamic memory allocation by `new` operator fails.  

- Now, if `new` operator cannot allocaate the requested memory, it calls the `_new_handler` that was set by a previous call to `set_new_handler()`. Let us call the new user-defined function which is pointed to by `_new_handler` function pointer as `my_handler()`. `my_handler()` should specify the actions to be taken when `new` operator fails to allocate memory. Usually, `my_handler()` would free up memory and return. `new` would then be able to allocate the memory and the program would continue. But, if `my_handler()` cannot provide memory for `new`, `my_handler()` should terminate the program, without which the program gets into an infinite loop.  

- The `set_new_handler()` function returns the old handler, if it has been defined. By default, no handler is installed. It is very important to note that, the user-defined function or `my_handler()` should not return a value and should not take any arguments.  

- The default handler is reset by doing `set_new-handler(0);`.  

Here's a program below explining the same:  
```C++
#include<iostream>
#include<cstdlib>
#include<new>
using namespace std;
int cnt = 0;
void my_handler()
{
  cerr << "Memory exhausted after " << cnt << "allocations" << endl;
  exit(1);
}
int main()
{
  set_new_handler(my_handler);
  while(1)
  {
    cnt++;
    int *p = new int[10000];  //exhausts memory
  }
  return 0;
}
```  

### _Output_  
> Memory exhausted after 80345 allocations  
