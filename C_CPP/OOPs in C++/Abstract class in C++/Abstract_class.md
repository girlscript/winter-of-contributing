# Abstract Class in C++
- Abstract class is a class whose instantiation is restricted. 

- We can't create object of an abstract class.

- Class that contains atleast one pure virtual function becomes abstract class.  

- **Note :**
  - A pure virtual function is a do nothing function in which virtual keyword is added.
  - It's declaration is provided in parent / base class but defined in child / derived class otherwise child class becomes abstract.
  - Syntax-
  ```c++
   virtual void f1()=0;
  ```
   - Here in place of body we add assignment operator then zero and a semicolon, since it's an empty body function.

- In Java, Abstract class is made by adding abstract keyword. Like C++,there's no virtual keyword in Java.  
## Syntax of Abstract class in c++
```c++
class classname //abstract class

{

  //data members                                      
  public:
  ------------
  //pure virtual function
};
```
## Example of Abstract class in C++
```c++
#include<iostream>
using namespace std;
class sound
{
    public:
    virtual void show_data() = 0;    // Pure Virtual Function
};

class chirp:public sound
{
public:
    void show_data()//override
    {
        cout << "Bird-chirps\n";
    }
};
class bark:public sound
{
public:
    void show_data()//override
    {
        cout<<"Dog-barks\n";
    }
};

int main()
{
    sound *a;
    chirp b;
    bark c;
    a= &b;
    a->show_data();
    a=&c;
    a->show_data();
}
```

Output :
```c++
Bird-chirps
Dog-barks
```

