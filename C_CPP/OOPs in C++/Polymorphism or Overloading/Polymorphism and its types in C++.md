# **Polymorphism in C++**

Polymorphism in C++ means, the same entity (function or object) behaves differently in different scenarios or we can define it as the ability of a message to be displayed in more than one form.

**A real life example :**- A lady behaves like a teacher in a classroom, mother or daughter in a home and customer in a market. Here, a single person is behaving differently according to the situations.

 ### **Types of Polymorphism**

  * **Compile Time Polymorphism**
    * Function Overloading
    * Operator Overloading
  * **Run Time Polymorphism**
    * Function Overriding
    * Virtual Functions

## ***Compile Time Polymorphism***
The overloaded functions are invoked by matching the type and number of arguments. This information is available at the compile time and, therefore, compiler selects the appropriate function at the compile time.

  * **Function Overloading**
  When there are multiple functions with same name but different parameters then these functions are said to be overloaded.

    ***Example*** :-
    
```cpp
    #include <bits/stdc++.h>
using namespace std;
class Test
{
    public:
    // function with 1 int parameter
    void funct(int x)
    {
        cout << "value of x is " << x << endl;
    }
    // function with same name but 1 double parameter
    void funct(double x)
    {
        cout << "value of x is " << x << endl;
    }
    // function with same name and 2 int parameters
    void funct(int x, int y)
    {
        cout << "value of x and y is " << x << ", " << y << endl;
    }
  };
  int main()
   {
        Test t1;
    // Which function is called will depend on the parameters passed
    // The first 'func' is called
    t1.func(9);
    // The second 'func' is called
    t1.func(8.562);
    // The third 'func' is called
    t1.func(76,12);
    return 0;
}
```
**Output**

  value of x is 9  

  value of x is 8.562

  value of x and y is 76, 12

  * **Operator Overloading**
  Operator overloading means defining additional tasks to operators without changing its actual meaning. We do this by using operator function.

    ***Example*** :-
    
  ```cpp
  #include <iostream>  
using namespace std;  
class A  
{  
     
    string x;  
      public:  
      A(){}  
    A(string i)  
    {  
       x=i;  
    }  
    void operator+(A);  
    void display();  
};  
void A:: operator+(A a)  
{  
      
    string m = x+a.x;  
    cout<<"The result of the addition of two objects is : "<<m;  
}  
int main()  
{  
    A a1("Welcome");  
    A a2("back");  
    a1+a2;  
    return 0;  
}
```
**Output**

  The result of the addition of two objects is: Welcomeback

## ***Run Time Polymorphism***
In a Runtime polymorphism, functions are called at the time the program execution. Hence, it is known as late binding or dynamic binding.

  * **Function Overriding**
  In Function Overriding, we give the new definition to base class function in the derived class. At that time, we can say the base function has been overridden. It can be only possible in the ‘derived class’.The decision about which function definition requires calling happens at runtime.

  ***Example*** :-

  ```cpp
    #include <iostream>  
  using namespace std;  
  class Animal 
  {  
      public:  
        void function()
        {    
           cout<<"Eating..."<<endl;    
        }      
  };   
  class Man: public Animal    
  {    
        public:  
            void function()    
            {  
            cout<<"Walking ..."<<endl;    
           }    
  };  
  int main(void)
  {  
    Animal A =Animal();
    A.function();   //parent class object 
    Man m = Man();    
    m.function();   // child class object
   return 0;  
  }
```
  **Output**

  Eating …..

  Walking……

  * **Virtual Function** A virtual function is a member function in the base class. We can redefine it in a derived class. It is part of run time polymorphism. The declaration of the virtual function must be in the base class by using the keyword virtual. A virtual function is not static. 

  ***Example***

  ```cpp
    #include<iostream>
    using namespace std; 
    class Add
    { 
        public: 
            virtual void print () 
            {
                int a=20, b=30;
                cout<< " base class Action is:"<<a+b <<endl;
            }
            void show () 
           {
                 cout<< "show base class" <<endl; 
            } 
    }; 
    class Sub: public Add 
    { 
          public: 
          void print () //print () is already virtual function in derived class, we could also declared as virtual void print () explicitly 
    { 
      int x=20,y=10;
    cout<< " derived class Action:"<<x-y <<endl; 
    } 
        void show () 
    { 
          cout<< "show derived class" <<endl;
    } 
    }; 
    //main function 
    int main() 
    { 
        Add *aptr; 
        Sub s; 
        aptr = &s; 
    //virtual function, binded at runtime (Runtime polymorphism) 
    aptr->print(); 
    // Non-virtual function, binded at compile time 
    aptr->show();
    return 0; 
} 
```
**Output**

 derived class Action:10
****************************************************************************
