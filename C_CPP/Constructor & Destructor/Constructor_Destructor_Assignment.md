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

### MULTIPLE CONSTRUCTORS:

The concept of multiple constructors is similar to the concept of function overloading. In this there
are more than one constructor with the same name but with different parameter list. In the code below,
there are three different constructors with the same name-- default, parameterized and copy, making the
code an example of multiple constructor. 

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
`=, +=, -=, *=, /=, %=, >>=, <<=, |=, &=, ^=, ?:`

Let us look at the working of the assignment operators with the help of the code,
```CPP
    #include<iostream>
    using namespace std;

    int main()
    {
      int a=10; //using the first assignment operator

      a += 2; // a= a+2= 12 second assignment operator

      a -= 3; // a= a-3= 9 third assignment operator

      a /= 3; // a= a/3= 3 forth assignment operator

      a *= 2; // a= a*2= 6 fifth assignment operator

      a %= 2; // % returns the remainder. Therefore a= a%2= 0.

      cout<<a;
    }
```

The output of the code is `0`, after multiple different assignments.

Let us now look at the working of the remaining assignment operators i.e 
`<<= , >>= , |=, &=, ^=, and ?:`

The operators << and >> are known as the left-shift and right-shift operators 
respectively. | is the bitwise OR operator and & is the bitwise and operator.

The left-shift operator will shift the bits towards the left for the given number of times.
```
    int a= 2<<1;
    cout<<a;
```
The output of the code will be: 4

<strong>EXPLANATION:</strong>

The binary representation of 2 is 0010. On using the left-shift operator all 
bits will shift one position toward left and the last bit position will be 0 
making it 0100 which is the binary representation of 4.

Similarly, for the >> operator, bits shift towards the right.

Let us understand the code snipet,
```CPP
int a= 1;
a <<= 2; // 0001 left-shift 2 times gives 0100 which is 4
a >>= 1; // a= a>>1 right shift once which gives 0010 which is 2
cout<<a;
```
The output will be 2.

Let us now look at a different code snipet,
```CPP
int a= 1;
a |= 2; // a= a|2 which is 0001|0010 which gives 0011 which is 3
a &= 1; // a= a&1 which is 0011&0001 which gives 0001 which is 1
cout<<a;
```
The output will be 1. Thus, |= and &= are bitwise OR assignment operator and bitwise AND assignment operator respectively.

`^=` is the XOR assignment operator.
a ^= 2 when a=1 will assign the value of a to 3. 0010 and 0001 so 2 bits are
different which gives 0011 hence 3.

Let us now look at the working of the ternary operator. `?:`
```CPP
      int a=10;
      a= (a>5)?5:6;
```
Here, the final value of a is 5. 

<strong>EXPLANATION:</strong>

If the value of a is greater than 5 then a will be assigned the value 5 else it will be assigned the value 6. In the code, the value of a is initialized to 10 so it is greater than 5. Therefore, a is assigned the value 5.

Let us understand the concepts with more clarity with the help of a video,

[Video on Constructor and Destructor](https://drive.google.com/file/d/15bq7ltmc7QIpRmBUtRmRSo15lXi7e2VX/view?usp=sharing)