# Overloading Unary Operators Using Member Functions  

Unary Operators are operators which operate on one operand. For example: +10, -10, ++i, i++ etc. In this file, we are going to overload minus '-' operator. For every operator to be overloaded, a separate function called **"operator function"** has to be defined. Operator function is a function defined when an operator is to be overloaded. The keyword **'operator'** is used to create operator functions.  

If the operator function is a member function of a class, then the general syntax for declaring a operator function to overload unary operator is as follows:  
```C++
class <class_name>
{
   public:
         <return_type> operator opr ();   //prototype
};
<return_type> <class_name> :: operator opr ()
{
  //operator function definition
}
```  

Where,  

***return_type*** -> type of the value returned by the operator function  
***class_name*** -> name of the class to which the operator function is the member function  
***operator*** -> keyword used to create an operator function, operator function is used only to overload operators  
***opr*** -> opr is the unary operator that is being overloaded.  
***()*** -> empty parentheses list indicates the operator function is the member function of a class used to overload unary operators  

This syntax for overloading the unary operators changes slightly if operator function is a friend to a class.  

Here's a program below explaining the same:  
```C++
#include <iostream>
using namespace std;
class girlscript
{
  private:
         int a;
         int b;
  public:
  void operator - ();  //prototype of operator function  
  void display();
  girlscript()    //constructor
  {
    a = 1;
    b = 2;
  }
};
void girlscript :: operator - () //member operator function definition
{
  a = -a;
  b = -b;
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
  -g;  // trying to use '-' on object
  g.display();
}
```  

### *Output*  

> a = 1  
> b = 2  
> a = -1  
> b = -2  

In the above program, in 'main()' function, the statement,  
```C++
girlscript g;  
```
creates an object 's' of type 'class girlscript'. As soon as this object is created, the class constructor is invoked and the data members of this class are initialized to 1 and 2 repectively. The values initialized to data members 'a' and 'b' are displayed by calling te member function 'display()' using the statement.  
```C++
g.display();  
```
The output obtained for this is,  

> a = 1  
> b = 2  

Now, notice the statement,  
```C++
-g;
```  
Here, we are trying to overload the unary '-' operator. That is, we are trying to use the operator on a class object. When this statement is encountered by the compiler, it first checks whether the unary '-' operator is operating on a built-in data type. If yes, the normal operation is carried on. If not, i.e, if the compiler finds that the unary '-' operator is operating on a class object, then, it interprets the statement,  
```C++
-g;   as  
g.operator - ();  
```  

and calls the member operator function definition. This type of interpretation happend only if the operator function is a class member function. For friend member functions, the type of interpretation is different.  
```C++
void girlscript :: operator - ()
{
  a = -a;
  b = -b;
}
```  

As explained before, 'operator -' together becomes the operator function name. In the function definition, the data members are negated. It is to be noted that, the operator function is a member function of class 'girlscript', which eventually gives us the output as,  

> a = -1  
> b = -2  
