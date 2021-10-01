# **CONSTRUCTORS, DESTRUCTORS AND ASSIGNMENT OPERATORS**

## **CONSTRUCTOR:**


*   A constructor has the same name as that of the class.
*   A constructor is called as soon as an object of that class is created.
*   A constructor is generally used to initialize the variables of the class.
*   Constructors are of 4 types: *Default constructors, Parameterized constructors, Copy constructors and Dynamic constructors.*

Let us now look at these constructors in detail.

### DEFAULT CONSTRUCTORS:

The syntax for a default constructor is:
```CPP
    class A
    {
      public:
        A()
        {
          cout<<"DEFAULT";
        }
    };
    int main()
    {
      A obj;
    }
```
The following code will give the output "DEFAULT".

When object obj is created the constructor A is called and the statement inside it is printed. 

Every class has an in-built default constructor. If the user writes a default constructor then the in-built default constructor is overwritten.

### PARAMETERIZED CONSTRUCTORS:

Here is the code for a parameterized constructor,

```CPP
    class A
    {
      public:
        A(int x)
        {
          cout<<"PARAMETERIZED";
          cout<<" "<<x;
        }
    };
    int main()
    {
      A obj(10);
    }
```
The following code will give the output "PARAMETERIZED 10".

On creating the object obj and passing the value 10 the parameterized constructor is called.

A program code can contain both default as well as a parameterized constructor.

**NOTE**: An important point to be noted is that the constructors should always be declared within a *public* access specifier.

### COPY CONSTRUCTORS:

Copy constructors are of 2 types:


1.   Default
2.   User Defined

This is the syntax of the user-defined copy constructor,

```CPP
      class A
      {
        public:
          A
          {
            cout<<"DEFAULT  ";
          }
          A(A &ob)
          {
            cout<<"COPY";
          }
      };
      int main()
      {
        A obj1;
        A obj2(obj1);
      }
```
The output of this code will be "DEFAULT  COPY".

A copy constructor is called when,

*   An object is initialized by another object of the same class.
*   An object is passed by value as an argument.
*   Function returns an object by value.

### DYNAMIC CONSTRUCTORS:

As the name suggests, dynamic constructor is used to allocate memory during run time. It uses the new operator in c++. These constructors are not widely used.

The sample code for this type of constructor is:

```CPP
class A
{
  const int *arr;
    public:
      A()
      {
        arr= new int[5];
      }
};
int main()
{
  A obj= new A();
}
```

## **DESTRUCTORS:**

*   Destructor has the same name as that of the constructor and is defined by '~'. Syntax:

  ```  
          ~constructorName  
  ```
*   Destructor doesnot have any argument or return type.
*   Destructor should be declared under the public access specifier.
*   Destructor is called when an object goes out of scope.

Let us look at the sample code,

```CPP

    class A()
    {
      public:
        A()
        {
          cout<<"Constructor";
        }
        ~A();
    };
    int main()
    {
      A obj;
    }
```
`Code describing the working of the constructors and destructors:`

## MULTIPLE CONSTRUCTORS:

Multiple constructors are known as constructor overloading. In the sample code below there are 
3 constructor having the same argument but different parameter list i.e there is a default constructor,
a parameterized constructor and a copy constructor. Hence, it is an example of multiple constructors.
The concept is quite similar to function overloading.

```CPP
#include<iostream>
using namespace std;

class A
{
    public:
        A()
        {
            cout<<"DEFAULT CONSTRUCTOR"<<endl;
        }
        A(int x)
        {
            cout<<"PARAMETERIZED CONSTRUCTOR"<<endl;
        }
        A(A &ob)
        {
            cout<<"COPY CONSTRUCTOR"<<endl;
        }
        ~A()
        {
            cout<<"DESTRUCTOR"<<endl;
        }
};
int main()
{
    A obj, obj1(28), obj2(obj);
}
```

OUTPUT:
```
DEFAULT CONSTRUCTOR      
PARAMETERIZED CONSTRUCTOR
COPY CONSTRUCTOR
DESTRUCTOR
DESTRUCTOR
DESTRUCTOR
```

The destructor is called 3 times due to the presence of 3 constructors i.e once for each constructor.

**POINTS TO BE NOTED:**

*   One class can have only one destructor.
*   If we donot create a destructor then the compiler creates a default destructor for us.


# **ASSIGNMENT OPERATORS:**

Assignment operators are used to assign values to a variable or a constant. 

Some samples are:
```
a = 10;
a += 10; // This means a= a + 10;
```

There are several operators like:
`=, +=, -=, *=, /=, %=, >>=, <<=, |=, &=, ^=`

In case of a class too, the assignment operators are used for assigning a value.

```
A obj1, obj2;
obj1= obj2;
```

Here, there is a class A which has 2 objects, obj1 and obj2. Now, the assignment operator `=` is used to assigned the values of obj2 to obj1.

Let us understand the concepts with more clarity with the help of a video,

[Video on Constructor and Destructor](https://drive.google.com/file/d/15bq7ltmc7QIpRmBUtRmRSo15lXi7e2VX/view?usp=sharing)
