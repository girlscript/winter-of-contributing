# Throwing Exceptions from Functions

Mostly, in real-world programs, exceptions will be thrown from the function definitions. These functions that throw exceptions are invoked from within the try block. Here's an example below explaining the same:

### Example:

```C++
#include<iostream>
using namespace std;
void div(int, int, int);
int main()
{
  int i = 5, j = 0, c;
  try
  {
    div( i, j, c);
  }
  catch(int x)
  {
    cout << "Exception " << x << endl;
  }
  return 0;
}
void div(int i, int j, int c)
{
  if(j!=0)
  {
    c = i/j;
    cout << "C = " << c << endl;
  }
  else
  {
    throw j;
  }
}

```
### Output:

> Exception 0  

In this program, the function 'div()' is called from the 'try block'. In the function definition, as the value of 'j' is zero, the division, operation cannot be carried out and hence an exception is thrown. Now the program control enters the 'catch block' and executes the 'catch block' and later the program terminates.

<br />

- Sometime it becomes necessary that, a function be restricted to throw only specific kind of exception according to the user's wish. This can be  achieved by placing a throw list clause along with the function hrader in the function definition. See the syntax below for reference:

### Syntax:

```C++
void div(int x) throw(char *, int)
{
   // function definition
}

```

Here's an example below explaining the same syntax mentioned above:

### Example:

```C++

#include<iostream>
using namespace std;
void div(int d, int e, int f) throw(const char *, int)
{
  if(e == 0)
    throw "Cannot be divided by zero";
  else
    throw e;
}
int main()
{
  int i = 5, j = 0, c;
  int x = 5, y = 6;
  try
  {
    div(i, j, c);
  }
  catch(const char *str)
  {
    cout << str << endl;
  }
  catch(int p)
  {
    cout << p << endl;
  }
  return 0;
}

```

### Output:

> Cannot be divided by zero  

**Note:** Once an exception is thrown, the entire program stack is compiled and the execution stops.

<br />

---

