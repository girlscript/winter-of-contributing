<hr>

# Polymorphism 

 * allows us to reuse code by creating one function that’s usable for multiple uses, This saves our time and allows streamlined program.

### Example Code Snippet

```C++
//C++ Language Program

int main() {
    int num = 4 + 5;  // + operator used for addition
    cout << num << endl;
    string str1 = "We can add them ";
    string str2 = "by using Addition operator";
    string str = str1 + str2; // + operator used for combining two strings
    cout << str << endl;
    return 0;
}

```

### Output

```
9
We can add them by using Addition operator

```
<hr>

## Types of Polymorphism
 
There are Two Types of Polymorphism :
 
 ### Compile Time Polymorphism 

 1. When All methods / Function get call or invoked at compile time, this is known as Compile time or static/early binding Polymorphism.
 2. it has faster Execution Rate since all method executed during compile time 
 3. Implementation of Compile time polymorphism 

 * Function overloading
 * Operator overloading

### Example Code Snippet
```C
 
// CPP program to illustrate
// Operator Overloading
#include<iostream>
using namespace std;
   
class Complex {
private:
    int convex, concave;
public:
    Complex(int cx = 0, int cv =0)  {convex = cx;   concave = cv;}
       
    // This is automatically called when '+' is used with
    // between two Complex objects
    Complex operator + (Complex const &obj) {
         Complex res;
         res.convex = convex + obj.convex;
         res.concave = concave + obj.concave;
         return res;
    }
    void print() { cout << convex << " + cv" << concave << endl; }
};
   
int main()
{
    Complex c1(10, 5), c2(2, 4);
    Complex c3 = c1 + c2; // An example call to "operator+"
    c3.print();
}

```

### Output
```
12 + cv9
```

### Run Time Polymorphism

1. When All methods of Runtime polymorphism get invoked during run time, this is known as Runtime or Dynamic/late binding Polymorphism.
2. this executes through Virtual function and Function overriding.
3. it is known to be better for dealing with complex problems since all the methods and details turn up during the runtime itself.

### Example Code Snippet
```C
 C++ program for function overriding
  
#include <bits/stdc++.h>
using namespace std;
  
class base
{
public:
    virtual void print ()
    { cout<< "print base class" <<endl; }
   
    void show ()
    { cout<< "show base class" <<endl; }
};
   
class derived:public base
{
public:
    void print () //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly
    { cout<< "print derived class" <<endl; }
   
    void show ()
    { cout<< "show derived class" <<endl; }
};
  
//main function
int main() 
{
    base *bptr;
    derived d;
    bptr = &d;
       
    //virtual function, binded at runtime (Runtime polymorphism)
    bptr->print(); 
       
    // Non-virtual function, binded at compile time
    bptr->show(); 
  
    return 0;
} 

```

### Output
```
print derived class
show base class
```