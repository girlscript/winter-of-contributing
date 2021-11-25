# Overloaded Constructor

Like normal member-functions, constructors can also be overloaded because they also take arguments. That means, multiple constructor can be defined of same name but their arguments or parameters should be different. Finally, it's the compiler's work to verify whether the parameters passed to overloaded constructors should not be same.


Here's an example below explaining the same:

```C++
#include<iostream>
using namespace std;
class girlscript
{
     private:
        int a,b;
     public:
        girlscript ()         //constructor with no arguments
       {
            a = b = 2;
        }
        girlscript(int i)       //constructor with one argument
       {
             a = b = i;
        }
        girlscript(int i,int j)      //constructor with two argument
        {
              a = i; 
              b = j;
        }
        void print()
        {
              cout << a << " + " << b << " = " << a + b << endl;
        }
};

int main()
{
     girlscript g1;
     girlscript g2(4);
     girlscript g3(6,8); 
     g1.print();
     g2.print();
     g3.print();
     return 0;
 }  
 
 ```
 
 ### Output
 
 > 2 + 2 = 4  
 > 4 + 4 = 8  
 > 6 + 8 = 14
 
 ---
 
