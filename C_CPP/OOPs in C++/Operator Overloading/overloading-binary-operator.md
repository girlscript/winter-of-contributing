# Overloading Binary Operators Using 'friend' Functions  

Here, the operator function is not the member function of any class. Hence, if an operator has to be overloaded to make it work on class objects, the operator function has to be declared as a friend of that particular class.  

The syntax for defining a friend operator function to overload a binary operator is:  
```C++
class < class_name >
{
   public:
   friend <return_type> operator opr (<argument1>, <argument2>);
};
< return_type > operator opr (<argument1>, <argument2>)
{
   //function defintion
}
```  

where,  

*return_type* -> type of the value returned by the operator function.  
*operator* -> keyword to create a operator function.  
*opr* -> binary operator which is being overloaded.  
*argument1* -> formal argument referring to the object on the left side of the overloading operator.  
*argument2* -> formal argument to the right side of the overloading operator.  

Here's a program below explaining the same:  
```C++
#include<iostream>
using namespace std;
class girlscript
{
   private:
          int a, b;
   public:
          friend girlscript operator + (girlscript &, girlscript &);
          void display()
          {
             cout << "a = " << a << endl;
             cout << "b = " << b << endl;
          }
          girlscript (int x, int y)  //parametrized constructor
          {
             a = x;
             b = y;
          }
          girlscript()    //zero argument constructor
          {
          }
};
girlscript operator + (girlscript &g1, girlscript &g2)
{
   girlscript g;
   g.a = g1.a + g2.a;
   g.b = g1.b + g2.b;
   return g;
}
int main()
{
   girlscript g1(3, 4);
   girlscript g2(5, 6);
   girlscript g3;
   g3 = g1 + g2;   //overloading binary '+' operator
   g3.display();
   return 0;
}
```  

### *Output:*  
> a = 8  
> b = 10  

In the above program, observe the statement,  
```C++
g3 = g1 + g2;
```  

The compiler interprets the statement as,  
```C++
g3 = operator + (g1, g2);  
```  

Notice the difference in the interpretation done by the compiler between member operator functions and friend operator functions. The corresponding function definition for the above function call is,  
```C++
girlscript operator + (girlscript &g1, girlscript &g2)
{
   girlscript g;
   g.a = g1.a + g2.a;
   g.b = g1.b + g2.b;
   return g;
}
```  

Here, the data members of objects 'g1' and data members of objects 'g2' gets added and is assigned to the object 'g3' after returning from this function. The output of the program can be easily understood.
