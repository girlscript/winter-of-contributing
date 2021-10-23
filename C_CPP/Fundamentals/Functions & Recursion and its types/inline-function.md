<h1 align="center">'inline' Functions</h1>

While calling a normal funciton each time, a substantial amount of time is spent on overheads involved in calling and returning mechanism. Typically, the arguments are pushed on to the stack and when a funciton is called several registers are saved and later restored when the function returns. The problem is that, the execution of machine instrucitons for these activities takes huge amount of time. Especially, when small funcitons are called, these overheads has to be eliminated.
<br />
<br />
Hence, to eliminate the cost of calls to small funciton definitions, C++ introduces a new feature called *inline funcitons*. An *inline funciton* is a function that is expanded inline within the main program at the point of invocation when it is invoked. 
<br />
<br />
Here's the syntax of *inline function* below:

```C++ 
inline <function name>(formal_arguments)   {body};
```

where 

> *inline* -> is a keyword used to make a funciton inline  
> *function_name* -> is the valid name of a function or identifier.  
> *formal_arguments* -> contains the parameter list passed by the calling funciton.  
> *body* -> consist of funciton definition.
<br />
<br />
Here's a program below explaining the same:

```C++
#include<iostream>
using namespace std;
inline int main( int a, int b )
{
   return a < b ? a : b;
}
int main()
{
   cout << min(10, 20);
   return 0;
}
```
<br />
As far as the compiler is concerned, the above program is equivalent to the below program:
<br />

```C++
#include<iostream>
using namespace std;
int main()
{
   cout << (10 < 20 ? 10 : 20);
   return 0;
}
```
<br />
Though expanding funciton calls in line can produce faster execution of the code, it can also result in larger code size because of duplication of code. inline functions are not used where functions are called several times, to avoid increase in size of the time. Hence it is best to use inline functions for every small functions.
