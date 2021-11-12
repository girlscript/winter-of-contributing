# **Ambiguity in Function Overloading**
When there are two or more functions with same name but different parameters, it is known as *function overloading*.

A disadvantage of function overloading is that there are some cases in which call to an overloaded function will throw an *ambiguity* error.

### **Ambiguity:**
 When the compiler is unable to decide which function is to be invoked first among the overloaded functions, this situation is known as **ambiguity** in function overloading. Once ambiguity error is detected, the compiler does not run the program.

 Causes of ambiguity in function overloading are:  
 * **Type Conversion**
 * **Function with default arguments**
 * **Funtion with a pass by reference**  
 
## **Type Conversion**  

```c++
#include<iostream>  
using namespace std;  
 
void test(float); 
void test(int);  
 
void test(float a)  
{  
   cout << "Value of a is : " <<a<< endl;  
}  
 
void test(int b)  
{  
    cout << "Value of b is : " <<b<< endl;  
}  
 
int main()  
{  
    test(4.4);
    test(44);  
    return 0;  
}
```
**Output**
```
error: call of overloaded 'test(double)' is ambiguous
test(4.4);
        ^
```
In the above c++ program, **test(44)** will call **test(int)**. According to us **test(4.4)** calls **test(float)**. But this is not what happens as in c++ *all floating point constants are treated as double not as float*. If we replace the float variable with a double variable, the code will run. Therefore we call this a type conversion error from float to double.

## **Function with default arguments**  

```c++
#include<iostream>  
using namespace std;  

void test(int);  
void test(int,int);  
 
void test(int a)  
{  
    cout << "Value of a is : " <<a<< endl;  
}  
void test(int a,int b=10)  
{  
    cout << "Value of a is : " <<a<< endl;  
    cout << "Value of b is : " <<b<< endl;  
}  
int main()  
{  
    function(20);  
    
    return 0;  
}
```
**Output**
```
error: call of overloaded 'test(int)' is ambiguous
test(20);
        ^
```       
In the above example test(int a, int b=10) can be called in two ways:  
first test(20) and second with two arguments ,for example: test(4,5).

When we call the function: test(20), test(int a) is invoked with one one arguement and test(int a, int b=10) is invoked with two arguments. Thus, the compiler gets into an ambiguity and shows error.

## **Function with pass by reference**

```c++
#include <iostream>  
using namespace std; 

void test(int);  
void test(int &);   
 
void test(int a)  //takes one int argument
{  
   cout << "Value of a is : " <<a<< endl;  
}  
void test(int &b)  //takes a reference parameter as an argument
{  
   cout << "Value of b is : " <<b<< endl;  
}  
 
int main()  
{  
  int x=10;  
  test(x); //error, which test()?
  return 0;  
}
```
**Output**
```
error: call of overloaded 'test(int &)' is ambiguous
test(x);
        ^
```
The above program gives an error saying “call of overloaded ‘test(int&)’ is ambiguous”. In this case, the compiler is not able to understand which function is to be invoked as there is no syntactical difference between the test(int) and test(int &). Thus it gives an error of ambiguity.        
