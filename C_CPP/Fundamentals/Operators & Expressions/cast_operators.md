# Topics Covered:

- [Definition](#def)
- [Types](#types)
   
    - [Static Cast](#1)
    - [Constant Cast](#2)
    - [Dynamic Cast](#3)
    - [Reinterpret Cast](#4)

<h1 id="def">Casting Operators</h1>

Casting operators are special operators provided by C++ to cast or convert one data type to another data type explicitly.

<h1 id="types">Types</h1>
There are four types of cast operators. They are:

- Static Cast
- Constant Cast
- Dynamic Cast
- Reinterpret Cast

Let's look into each of them breifly!


<h1 id="1">Static Cast</h1>

- This is used for any standard conversion of data types. 
- It could even convert pointers of derived class to base class and vice versa.
- It helps in converting int,char,float,double pointers to void pointer and vice versa.

**Syntax**

> *static_cast &lt;data_type&gt;(var_name);*

 Now,lets see some examples of how it is used! 

```

#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    int a = 97;                             //int variable 
    float b = static_cast<float>(a);        //conversion of int to float
    char c = static_cast<char>(a);          //conversion of int to char
    double d = static_cast<double>(c);      //conversion of char to double
    int* iptr = &a;                         //pointer to int type variable
    void* vptr = static_cast<void*>(iptr);  //conversion of int* to void*
    int* intptr = static_cast<int*>(vptr);  //conversion of void* to int*
    return 0;
}
```


<h1 id="2">Constant Cast</h1>

- This is helpful in removing constantness of a variable. 

**Syntax**
> *const_cast&lt;data_type&gt;(var_name);*

- Now, lets see how it is used!

```
#include<iostream>
#include<stdlib.h>

using namespace std;

int main(){
    float a = 52.61;
    const float* const_ptr = &a;
    //float* f = const_ptr;                    This gives an error!
    float* f = const_cast<float*>(const_ptr);  
    return 0;
}
```

<h1 id="3">Dynamic Cast</h1>

- It is especially used for converting pointers to objects.
- It does the conversion at **run time**.
- It could safely convert pointers and references to classes up, down, and sideways along the inheritance hierarchy. 
- Downcasting is only possible if base class is **polymorphic**

**Syntax**

> *dynamic_cast < data_type > ( var_name )*

- It tries to convert *var_name* to a type of *data_type* and if conversion is successful, it returns pointer of type *data_type*. Else, it would simply return a null pointer.

- It could always convert a pointer of derived class to base class.
- It could also convert a pointer of base class to derived.

- Let's see how this is done with an example.

```
#include<iostream>
using namespace std;

class Base { virtual void vf(){} };

class Derived : public Base { };

int main() 
{
	Base *ptr_Of_Base_Class_Type_Pointing_DerivedClass = new Derived;          //pointer of Base Class type pointing a Derived class
	Base *ptr_Of_Base_Class_Type_pointing_BaseClass = new Base;                //pointer of Base Class type pointing a Base Class
	Derived *ptr_of_derivedClass_Type;                            //pointer of Derived Class type

	ptr_of_derivedClass_Type = dynamic_cast<Derived*>(ptr_Of_Base_Class_Type_Pointing_DerivedClass);	//1
    if(pd != nullptr)
        cout << "Successfully converted pointer of Base class pointing Derived class object to derived class pointer";
        
	ptr_of_derivedClass_Type = dynamic_cast<Derived*>(ptr_Of_Base_Class_Type_pointing_BaseClass);      //2 
    if(pd != nullptr)
        cout << "Successfully converted pointer of Base class pointing base class object to derived class pointer";

	return 0;
}
```
The output for the above code is:
> *Successfully converted pointer of Base class pointing Derived class object to derived class pointer*

- Out of the 2 casts performed only *1* is successful. The reason for this behaviour is ptr_Of_Base_Class_Type_Pointing_DerivedClass holds a valid Derived class object but ptr_Of_Base_Class_Type_pointing_BaseClass holds just a Base class object.

<h1 id="4">Reinterpret Cast</h1>

- The reinterpret_cast operator converts one type into a fundamentally different type.

- This type of casting can convert pointer type data to basic data types without giving an error.

- The reinterpret_cast operator is how you tell the compiler, “I know you won’t like this, but I want to do it anyway.” It changes the type of a section of memory without caring whether it makes sense, so it’s up to you to use it judiciously

**Syntax**
> *reinterpret_cast<data_type>(var_name);*

Let's understand it with an example:

```
#include <iostream>
using namespace std;
int main()
{
   int i;
   char *p = "This is a string";
   i = reinterpret_cast<int> (p); // cast pointer to integer
   cout << i;
   return 0;
}

```

- The above code shows how one data type(char*) is converted to a fundamentally different type(int).

In this way, each cast operator has its own unique property and helps in making handling compatible data.

