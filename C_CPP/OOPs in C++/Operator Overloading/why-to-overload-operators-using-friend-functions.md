# Why To Overload Operators Using Friend Functions?  

Here are two statements below:  

```C++
g3 = g1 + 6;
g3 = 6 + g1;
```  

In the above two statements, the binary '+' is being overloaded to operate on a class object 'g1' and a constant '6'. The first statement can be overloaded easily using the member functions. This can be as a result of, the compiler can interpret the statement,
```C++
g3 = g1 + 6;  as  
g3 = g1.operator + (6);
```  

This is because the left side operand of the '+' operator is an object. A member function can be called with respect to a class object.  
```C++
g3 = 6 + g1;   is interpreted by the compiler as
g3 = operator + (6, g1);
```  

Here's a prorgam below explaining the same:  
```C++
#include<iostream>
using namespace std;
class girlscript
{
   private :
          int a , b;
   public :
         friend girlscript operator + (int, girlscript &);
         void display()
         {
            cout << "a = " << a << endl;
            cout << "b = " << b << endl;
         }
         girlscript (int x, int y)   //parameterized constructor
         {
            a = x;
            b = y;
         }
         girlscript()   //zero argument constructor
         {
         }
};
girlscript operator + (int k, girlscript &g1)
{
   girlscript g;
   g.a = k + g1.a;
   g.b = k + g1.b;
   return g;
}
int main()
{
   girlscript g1 ( 3, 4 );
   girlscript g2;
   g2 = 6 + g1;  //overloading binary '+' operator
   g2.display();
   return 0;
}
```  

### _Output:_  
> a = 9  
> b =10  
