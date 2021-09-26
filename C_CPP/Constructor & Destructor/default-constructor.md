# Default Constructor

It is a type of Constructor that has nothing in its parameter list or you can say, a Constructor that accepts no arguments. If you ever see these characteristics in a Constructor then you can easily label it as Default Constructor.
<br />

Here's an example below explaining the same:
<br />

```C++
#include <iostream>
using namespace std;
class girlscript
{
  public:
       int c;
       int cpp;
       string github;
  
       girlscript()  //initializing a constructor. Also, notice that there are no parameters passed.
       {
         c = 4;
         cpp = 5;
         github = "I am inside girlscript repository";
       }
};
int main()
{
  girlscript g;  //creating an object 'g' 
  cout << g.c << endl;   //default constructor is called
  cout << g.cpp << endl;   //default constructor is called
  cout << g.github << endl;   //default constructor is called
  return 0;
}
```
<br />

### Output
 
> 4  
> 5  
> I am inside girscript repository

<br />

---

