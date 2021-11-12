# C++ Templates
Templates are the foundation of generic programming (a method of programming that involves writing code in a way that it is independent of any particular data type, so that the same piece of code can be used as a blue-print for a family of classes and/or functions that provide for same functionality.)
## How do templates work?
Templates are expanded at compiler time like macros. The only difference between both is, the compiler does type checking before template expansion.
## Type of Templates
Templates can be grouped into two ways:  
1. <a href = "#function-template">Function templates</a>  
2. <a href = "#class-template">Class templates</a> 

## [Function Template](#function-template)  
Function templates are generic functions that can be used for different data types. The syntax of a function template is:  
```c++ 
template <class type> return-type function-name(parameter) {
    //body of the function
}
```  


Where, **type** is a placeholder name for a desired data type to be used by the function, **class** is a keyword used to specify a generic type in a function template declaration.
Example:  
```c++
#include <iostream>
using namespace std;

//The below single function will work for all data types. 
template <typename T>
T myAdd(T& a, T& b)
{
    return (a + b);
}

int main()
{
    cout << myAdd<int>(2,18) << endl; //Calling myAdd for int
    cout << myAdd<double>(21.2,18.9) << endl; //Calling myAdd for double
    cout << myAdd<char>('G','S') << endl; //Calling myAdd for char

    return 0;
}
```  
Output :  
```
20
40
GS
```    
Explanation :
Every time we used myAdd() with a given pair of types, the compiler will go to the above function definition and will create yet another "template function" as an instantiation of the above. The compiler can determine the parameter, that is to be instantiated, automatically. 

<u>We can also overload a function template</u>:
```c++
#include<iostream>
using namespace std;

template<class X> void func(X a)
{
    cout << "A has value: " << a << endl;
}

template<class X, class Y> void func(X b, Y c) 
{
    cout << "B has value: " << b << endl;
    cout << "C has value: " << c << endl;
}

int main() 
{
    func(100);
    func(50,3);
    return 0;
}
```  
Output:
```
A has value: 100
B has value: 50
C has value: 3
```  
## [Class Template](#class-template)
Just like function templates, class templates are used to define classes independent of the data type. Such can be used to define classes for LinkedList, Stack, Queue, etc. The syntax of a class template is:
```c++ 
template <class type> class class-name
{
    .
    .
    .
}
```  
Where, type is a placeholder name which will be determined when the class is instantiated. Example:
```c++
#include <iostream>
using namespace std;

template<class T>
class X
{
    public:
    T num1 = 15;
    T num2 = 35;
    void multiply() 
    {
        cout << "The multiplication of  num1 and num2 is : " << num1 * num2 << endl;
    }
};

int main() 
{
    X<int> ob;
    ob.multiply();
    return 0;
}

```  
Output:
```
The multiplication of num1 and num2 is : 525
```  

## FAQ :
1. Can we use more than one argument to templates?  
**Ans.** Yes, we can, just like normal parameters we can use more than one data type as an argument to the template. 
Example:
```c++
#include<iostream>
using namespace std;

template<class T, class V>
class B {
    T x;
    V z;

    public:
    B() {
        cout << "Hi there, Welcome to GWOC!" << endl;
    }
};

int main() 
{
    B<char, char> b;
    B<int, double> b;
    return 0;
}
```  
Output:
```
Hi there, Welcome to GWOC!
Hi there, Welcome to GWOC!
```

2. Difference between function overloading and templates.  
**Ans.** Both of the cases are examples of polymorphism feature of OOP. In case of function overloading, multiple functions do similar operations. Whereas, in case of function template, multiple functions do identical operations.

