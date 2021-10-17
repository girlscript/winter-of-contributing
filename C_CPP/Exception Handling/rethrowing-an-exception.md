# Rethrowing an Exception

In some situations, an exception handler(i.e. the 'catch block') will have to rethrow an exception that it received to the next enclosing try/catch sequence. This rethrow exception will be caught by a 'catch' statement listed after that enclosing 'try block'.
<br />
The exception handler can rethrow the exception by simply invoking 'thrown' without any arguments ass shown below:

> throw;  

Here's an example below explaining the same:

```C++
#include<iostream>
using namespace std;
void girlscript( int x, int y )
{
  cout << "I am in girlscript" << endl;
  try
  {
    if( y = 0 )
    {
      throw y;
    }
    else
    {
      cout << x/y << endl;
    }
  }
  catch(int)
  {
    cout << "In girlscript catch" << endl;
    throw;   //rethrowing exception
  }
}
int main()
{
  cout << "I am in main" << endl;
  try
  {
    girlscript(5, 0);
  }
  catch(int)
  {
    cout << "In main catch" << endl;
  }
  return 0;
}
```

### Output:

> I am in main  
> I am in girlscript  
> In girlscript catch  
> In main catch  
<br />

When an exception is rethrown, it will not be caught by the same 'catch' statement or any other 'catch' in that group. It might be caught by an appropriate 'catch' in the outer try-catch sequence only.

<br />

---
