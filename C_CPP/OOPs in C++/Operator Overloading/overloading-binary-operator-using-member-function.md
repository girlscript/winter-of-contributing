# Overloading Binary Operator Using Member functions  

Binary operators are operators which operate on two operands. For example, a + b, a * b, a && b etc. where 'a' and 'b' are variables of built-in data types. Overloading binary operator means, making the binary operators work on variables of user-defined types. Those variables are nothing but class objects. For example, if 'g1' and 'g2' are obejects of some class, 'class girlscript', then the statement,  
```C++
g1 + g2;
```  

says that the binary operator '+' is being overloaded, because it is trying to add two class objects.  

If the operator function is a member function of a class, then the general syntax for declaring an operator function for overloading binary operator is as follows:  
```C++
class <class_name>
{
   public:
         <return_type> operator opr (<argument1>);
};
<return_type> <class_name> :: operator opr (<argument1>)
{
  // function definition
}
```  

where,  

***return_type*** -> type of the value returned by the operator function  
***class_name*** -> name of the class, to which the operator function in the member function  
***operator*** -> keyword used to create the operator function  
***opr*** -> binary operator that is being overloaded  
***argument1*** -> formal argument which refers to the object on the right side of the binary operator. For example, in a statement like `g1 + g2;`, `argument1` refers to g2.  

Here's a program below explaining the same:  
```C++
#include<iostream>
using namespace std;
class girlscript
{
  private:
  int a, b;
  public:
  girlscript operator + (girlscript &);  //prototype
  void display()
  {
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
  }
  girlscript ( int x,  int y )  //parameterized constructor
  {
    a = x;
    b = y;
  }
  girlscript()  //zero argument constructor
  {
  }
};
girlscript girlscript :: operator + (girlscript &g)  //operator function definition
{
  girlscript k;
  k.a = a + g.a;
  k.b = b + g.b;
  return k;
}
int main()
{
  girlscript g1 (5, 6);
  girlscript g2 (6, 7);
  girlscript g3;
  g3 = g1 + g2;
  g3.display();
  return 0;
}
```  

### *Output*  

> a = 11  
> b = 13  

In the 'main()' function, three objects of 'class girlscript' i.e. 'g1', 'g2' and 'g3' are created. When 'g1' and 'g2' are created, parameterized constructors are called, and data members of the objects 'g1' and 'g2' are initialized. A default constructor has been defined in the class definition. This is because, when parameterized constructor is defined in the class definition, the implicit default constructor will not be defined in the class definition by the compiler. Hence, when the object 'g3' is created, it embeds a call to a default constructor. To resolve this call, we have explicitly defined an empty default constructor.  

The statement,  
`g3 = g1 + g2;`  

Here, the binary operator '+' is trying to add two objects. Once the compiler encounters this statement, operator overloading function is called. This is because, the compiler understands the binary '+' operator is trying to operate on variable of user-defined variable i.e. class objects.  

The statement,  
`g3 = g1 + g2;`  
interpreted by the compiler as  
`g3 = g1.operator + (g2);`  
Now, the operator overloading function definition is called. In the program, the operator function definition is,  
```C++
girlscript girlscript :: operator + (girlscript &g)
{
  girlscript k;
  k.a = a + g.a;
  k.b = b + g.b;
  return k;
}
```

The statement,  
`k.a = a + g.a;`  
says that 'a' is the data member of the object with which the operator function is called i.e. in our case 'g1'. Hence no need to refer to the data member 'a' with object and dot operator. Implicit 'this' pointer takes care of this, 'g.a' is the data member of the object on the right side of the overloaded operator ('+' in our case in the statement g1 = g1 + g2;). Therefore, 'g.a' refers to the data member of object 'g2', which is passed as reference to the operator function definition. As operator function id not called with respect to 'g2' the data member of 's2' has to be referred using the object and dot operator.  

The statement,  
`g3 = g1 + g2;`  
is interpreted by the compiler as,  
`g3 = g1.operator + (g2);`  
and is then converted to,  
`g3 = operator + (&g1, g2);`  
Therefore the function definition becomes,  
```C++
girlscript girlscript :: operator (girlscript *const this, girlscript &g)
{
   girlscript k;
  k.a = this->a + g.a;
  k.b = this->b + g.b;
  return k;
}
```
