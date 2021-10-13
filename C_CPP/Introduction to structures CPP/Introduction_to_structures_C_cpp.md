---
jupyter:
  colab:
    name:  Introduction to structures/C cpp.ipynb
  kernelspec:
    display_name: Python 3
    name: python3
  language_info:
    name: python
  nbformat: 4
  nbformat_minor: 0
---

::: {.cell .markdown id="HxQXfByApkVk"}
**Introduction to structures Cpp**

A structure is a user-defined data type in C/C++. A structure creates a
data type that can be used to group items of possibly different types
into a single type.

In C++, classes and structs are blueprints that are used to create the
instance of a class. Structs are used for lightweight objects .

Unlike class, structs in C++ are value type than reference type. It is
useful if you have data that is not intended to be modified after
creation of struct.
:::

::: {.cell .markdown id="tUtcsxN_qV2i"}
**How to create a structure**

The 'struct' keyword is used to create a structure. The general syntax
is:

        struct structure_name  
        {  
         member1;
         member2;
         member3;
        .
        memberN; 
        }   

In the above declaration, a structure is declared by preceding the
struct keyword followed by the identifier(structure name). Inside the
curly braces, we can declare the member variables of different types.

**Structures in C++ can contain two types of members**:

-   **Data Membe**r: These members are normal C++ variables. We can
    create a structure with variables of different data types in C++.

-   **Member Functions**: These members are normal C++ functions. Along
    with variables, we can also include functions inside a structure
    declaration. Example:

          // Data Members
          int roll;
          int age;
          int marks;

          // Member Functions
          void printDetails()
          {
              cout<<"Roll = "<<roll<<"\n";
              cout<<"Age = "<<age<<"\n";
              cout<<"Marks = "<<marks;
          }

In the above structure, the data members are three integer variables to
store roll number, age and marks of any student and the member function
is printDetails() which is printing all of the above details of any
student.

        struct Student  
        {  
            char name[20];  
            int id;  
            int age;  
        }  

In the above case, Student is a structure contains three variables name,
id, and age. When the structure is declared, no memory is allocated.
When the variable of a structure is created, then the memory is
allocated.
:::

::: {.cell .markdown id="Vb_JInMorB4j"}
:::

::: {.cell .markdown id="AZqPYoMjswJS"}
**How to declare structure variables**

A structure variable can either be declared with structure declaration
or as a separate declaration like basic types.

     // A variable declaration with structure declaration.
        struct Point
        {
         int x, y;
        } p1;  
    // The variable p1 is declared with 'Point' 

    // A variable declaration like basic data types
        struct Point
        {
        int x, y;
        };

        int main()
        {
             struct Point p1;  // The variable p1 is declared like a normal variable
        }
:::

::: {.cell .markdown id="TJ6hJrbvtV_t"}
**Note:** In C++, the struct keyword is optional before in declaration
of a variable. In C, it is mandatory.
:::

::: {.cell .markdown id="o0pDxHTQtYqs"}
**Initializing structure members**

Structure members cannot be initialized with declaration. For example
the following C program fails in compilation. But is considered correct
in C++11 and above

     struct Point
    {
        int x = 0; // COMPILER ERROR: cannot initialize members here
        int y = 0; // COMPILER ERROR: cannot initialize members here
    };

The reason for above error is simple, when a datatype is declared, no
memory is allocated for it. Memory is allocated only when variables are
created.
:::

::: {.cell .markdown id="HKTD-4CTtonu"}
**Structure members can be initialized with declaration in C++**.

For Example the following C++ program Executes Successfully without
throwing any Error.

        // In C++ We can Initialize the Variables with Declaration in Structure.

    #include <iostream>
    using namespace std;

    struct Point {
    int x = 0; // It is Considered as Default Arguments and no Error is Raised
    int y = 1;
    };

    int main()
    {
    struct Point p1;

    // Accessing members of point p1
    // No value is Initialized then the default value is considered.
     ie x=0 and y=1;
        cout << "x = " << p1.x << ", y = " << p1.y<<endl;

    // Initializing the value of y = 20;
        p1.y = 20;
        cout << "x = " << p1.x << ", y = " << p1.y;
        return 0;
    }
    // This code is contributed by Samyak Jain

**output**

    x=0, y=1
    x=0, y=20
:::

::: {.cell .markdown id="UBgo_RyxuzO1"}
Structure members can be initialized using curly braces '{}'. For
example,

        struct Point {
    	    int x, y;
            };

        int main()
        {
    	// A valid initialization. member x gets value 0 and y
        // gets value 1. The order of declaration is followed.
    	struct Point p1 = { 0, 1 };
        }
:::

::: {.cell .markdown id="0hACbIVTvErZ"}
**How to access structure elements**

Structure members are accessed using dot (.) operator.

        #include <iostream>
        using namespace std;

        struct Point {
    	int x, y;
        };

        int main()
        {
    	struct Point p1 = { 0, 1 };

    	// Accessing members of point p1
    	p1.x = 20;
    	cout << "x = " << p1.x << ", y = " << p1.y;

    	return 0;
        }

Output

        x = 20, y = 1
:::

::: {.cell .markdown id="KFnHFex3vZYI"}
**What is an array of structures**

Like other primitive data types, we can create an array of structures.

        #include <iostream>
        using namespace std;

        struct Point {
    	int x, y;
        };

        int main()
        {
        	// Create an array of structures
    	struct Point arr[10];

        	// Access array members
    	arr[0].x = 10;
        arr[0].y = 20;

        cout << arr[0].x << " " << arr[0].y;
        return 0;
        }

Output

    10 20
:::

::: {.cell .markdown id="EPOOqN9av_8B"}
**What is a structure pointer**

Like primitive types, we can have pointer to a structure. If we have a
pointer to structure, members are accessed using arrow ( -\> ) operator
instead of the dot (.) operator.

    #include <iostream>
    using namespace std;

    struct Point {
        int x, y;
    };

    int main()
    {
        struct Point p1 = { 1, 2 };

    // p2 is a pointer to structure p1
        struct Point* p2 = &p1;

    // Accessing structure members using
    // structure pointer
        cout << p2->x << " " << p2->y;
        return 0;
    }

Output 1 2
:::

::: {.cell .markdown id="cu8m11GGwgUd"}
**Structure vs class in C++**

In C++, a structure is the same as a class except for a few differences.
The most important of them is security. A Structure is not secure and
cannot hide its implementation details from the end-user while a class
is secure and can hide its programming and designing details.

1\) Members of a class are private by default and members of a structure
are public by default.

For example program 1 fails in compilation and program 2 works fine.

    // Program 1
    #include <stdio.h>

    class Test {
    int x; // x is private
    };
    int main()
    {
      Test t;
      t.x = 20; // compiler error because x is private
      getchar();
      return 0;
    }

    // Program 2
    #include <stdio.h>

    struct Test {
        int x; // x is public
    };
    int main()
    {
      Test t;
      t.x = 20; // works fine because x is public
      getchar();
      return 0;
    }

2\) When deriving a struct from a class/struct, the default
access-specifier for a base class/struct is public. And when deriving a
class, the default access specifier is private.

For example program 3 fails in compilation and program 4 works fine.

    // Program 3
    #include <stdio.h>

    class Base {
    public:
        int x;
    };

    class Derived : Base { }; // is equivalent to class Derived : private Base {}

    int main()
    {
      Derived d;
      d.x = 20; // compiler error because inheritance is private
      getchar();
      return 0;
    }

    // Program 4
    #include <stdio.h>

    class Base {
    public:
        int x;
    };

    struct Derived : Base { }; // is equivalent to struct Derived : public Base {}

    int main()
    {
      Derived d;
      d.x = 20; // works fine because inheritance is public
      getchar();
      return 0;
    }
:::

::: {.cell .markdown id="zyNdah36bLYY"}
**Class vs Structure**

**Class**

-   Class is a group of comman object that share common properties and
    relationships.
-   Class members are privately by default.
-   Classes are reference type i.e they are stored on heap.
-   Class can be inherited.
-   Class is better choice for complex data structure.
-   Class elements can be declared as protected.
-   Classes are terminated i.e GC does call finalize method for them
-   Class does require constructor.

Structure

-   Structure is a collection of different types of data type.
-   Structure member are public by default.
-   Structure are value type i.e tyhey are stored on stack
-   Structure can not be inherited.
-   Structure should be used when you want to use a amall data
    structure.
-   Structure elements can not be declared as protected
-   Structure are not terminated i.e GC does not call finalize method
    for them
-   Structure does not require constructor
:::
