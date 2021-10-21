# The 'explicit' Keyword

When a constructor receives a single argument, then an automatic type conversion takes place in which the type of the argument passed to the constructor is converted from its basic type to the class type in which the constructor is defined.

If we wish we can suppress such a behaviour. It means if we do not want such an automatic conversion to take place then we should define the class constructors to be "explicit constructors".

The 'explicit' keyword is used to declare the class constructors to be "explicit constructors". Once the constructor is made explicit, the automatic type conversion does not takes place. 


Here's an example below explaining the same:

```C++
#include<iostream>
using namespace std;
class girlscript
{
  private:
         int a, b;
  public:
        explicit girlscript( int x )   // explicit constructor
        {
           a = x + 5;
           b = x + 6;
        }
        void display()
        {
           cout << "a = " << a << endl;
           cout << "b = " << b << endl;
        }
};
int main()
{
   int k = 8;
   girlscript g(k)
   g.display();
   return 0;
}

```

### Output:

> a = 13  
> b = 14  

- While using "explicit constructors", statements like `girlscript g(k);` is perfectly valid, but statements like `girlscript g = k; // automatic conversion type` is invalid.


