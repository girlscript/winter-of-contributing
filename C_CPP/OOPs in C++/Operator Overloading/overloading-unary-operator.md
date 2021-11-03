# Overloading Unary Operators Using 'friend' Functions

Here, the operator function is not the member function of any class. Hence, in this scenario if an operator has to be overloaded to make it work on a class object, the operator function has to be declared as a **friend** to that class.  

In other words, when operator function is *friend* to a class, then we can call that function as a "friend operation function."  

The syntax for defining a friend operator function to overload a unary operator is as follows:  

```C++
class < class_name >
{
   public:
         friend < return_type > operator opr (< argument >);
};
< return_type > operator opr (< argument >)
{
   //function definition
}
```  
where  

- *friend* -> keyword to make a non-member function as a friend to a class  
- *return_type* -> type of the value returned by the friend operator function  
- *operator* -> keyword to create an operator function  
- *opr* -> unary operator that is to be overloaded  
- *argument* -> is the formal argument referring to the class object on which the operator overloading is being done.  

Here's a program to overload a unary minus '-' operator using friend functions.  

```C++
#include<iostream>
using namespace std;
class girlscript
{
   private:
          int a;
          int b;
   public:
         friend void operator - (girlscript &) ;   //prototype
         void display();
         girlscript()   //constructor
         {
            a = 6;
            b = 7;
         }
};
void operator - (girlscript &x)   //operator function definition
{
   x.a = -x.a;
   x.b = -x.b;
}
void girlscript :: display()
{
   cout << "a = " << a << endl;
   cout << "b = " << b << endl;
}
int main()
{
   girlscript g;
   g.display();
   -g;    //overloading unary '-' operator
   g.display();
   return 0;
}
```  

### *Output*  
> a = 6  
> b = 7  
> a = -6  
> b = -7  

In the above program, operator function is a non-member function of class girlscript. Hence, the operator function is declared as a friend to the class girlscript using the statement:  
```C++
friend void operator - (girlscript &);  
```
In the 'main()' function, the statement  
```C++
-g;  
```
is interpreted by the compiler as:  
```C++
operator - (g);    
```
and calls the operator function definition. In the operator function definition, the object passed as argument is received as a reference and its value is changed, which will be reflected in the original copy also. In our example the operator function definition is as shown below:  
```C++
void operator (girlscript &x)
{
   x.a = -x.a;
   x.b = -x.b;
}
```  

The output of the program is now quite self-explanatory.
