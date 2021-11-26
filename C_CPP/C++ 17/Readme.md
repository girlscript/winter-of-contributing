# __Polymorphism__ 
```polymorphism``` word itself means ```poly - many``` and ```morphs means forms``` combining ```poly + morphs means many forms```.
in simple words, polymorphism is defined as anything which has one or more forms.
Considering a real life situation, a human plays different roles in a life cycle , an animal plays different roles in the life cycle.


# __Types of Polymorphism__

Polymorphism is divided into 2 parts :
- Compile time polymorphism      ```Static polymorphism```
- Runtime polymorphism      ```Dynamic polymorphism```



![cpp-polymorphism](https://user-images.githubusercontent.com/69431618/143543056-a1697d9c-f3e8-45c7-ade2-aa8a04d68d16.png)








 
```Compile time polymorphism```  : polymorphism which is resolved during the compile time is called compile time polymorphism.
It is achieved by function overloading and operator overloading which is also known as static binding or early binding.
Now, let's consider the case where function name and prototype is same.



```class Ram                                                           //  base class declaration.  
  {  
       int a;  
       public:  
       void display()  
       {   
             cout<< "Class Ram ";  
        }   
  };  
class Shyam : public Ram                                             //  derived class declaration.  
{  
    int b;  
    public:  
   void display()  
  {  
        cout<<"Class Shyam";  
  }  
};
```

As prototype of the function ```display()``` is in both base and derived class, 
so the static binding will not be applied rather than go for dynamic binding runtime.

**Compile time polymorphism is divided into 2 types**
- Function Overloading
- Operator Overloading

***Function Overloading***
In C++ , functions with same name but different parameters are called overloaded functions
```
Different Types of function overloading

int add(int, int);
int add(int, int, int);    //number of parameters different
double add(double, double);    //type of parameters different

example code :
#include <iostream>
using namespace std;
int add(int a, int b) {
    return a+b;
}
int add(int a, int b, int c) {
    return a+b+c;
}
double add(double a, double b) {
    return a+b;
}
int main() {
  int x = 3, y = 7, z = 12;
  double n1 = 4.56, n2 = 13.479;
  
  cout<<"x+y = "<<add(x,y)<<endl;
  cout<<"x+y+z = "<<add(x,y,z)<<endl;
  cout<<"n1+n2 = "<<add(n1,n2);
  
  return 0;
}
```
***Operator overloading***
Operator overloading is a compile-time polymorphism in which the operator is overloaded to provide the special 
meaning to the user-defined data type. Operator overloading is used to overload or redefines most of the operators available in C++.
It is used to perform the operation on the user-defined data type. 
For example, C++ provides the ability to add the variables of the user-defined data type that is applied to the built-in data types.

```
#include <iostream>    
using namespace std;    
class Test    
{    
   private:    
      int num;    
   public:    
       Test(): num(8){}    
       void operator ++()         {     
          num = num+2;     
       }    
       void Print() {     
           cout<<"The Count is: "<<num;     
       }    
};    
int main()    
{    
    Test tt;    
    ++tt;  // calling of a function "void operator ++()"    
    tt.Print();    
    return 0;    
}    
```

```Runtime polymorphism``` : 
Polymorphism in which functions are imposed in the runtime , it is called as runtime polymorphism.
   
   
```class Animal {    
    public:    
void eat(){      
cout<<"Eating...";      
    }        
};     
class Dog: public Animal      
{      
 public:    
 void eat()      
    {           cout<<"Eating bread...";      
    }      
};    
int main(void) {    
   Dog d = Dog();      
   d.eat();    
   return 0;    
} 
```

***Runtime polymorphism is divided into :

***virtual function*** A virtual function is a member function which is declared in the base class using the keyword virtual and is re-defined (Overriden) by the derived class.
Virtual functions ensure that the correct function is called for an object, regardless of the type of reference (or pointer) used for function call.
















![1](https://user-images.githubusercontent.com/69431618/143554709-1131264d-2d65-4c7c-8a49-d0a62919cab9.png)
```



#include<iostream>
using namespace std;
class base {
    public:
    void display() {
        cout<<"Function of base class"<<endl;
    }
};
class derived : public base {
    public:
    void display() {
        cout<<"Function of derived class"<<endl;
    }
};
int main() {
  derived d;
  base *b = &d;   //base class pointer
  b->display();   //base class function executes
  return 0;
}
```

# __Conclusion__

contributed by : [Kashika Parmar] (https://github.com/Kashika02)

