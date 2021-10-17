# The "this" Pointer

'this' is a keyword which is used to store the address of the object that calls a member function. There is no need to declare the 'this' pointer. It is internally defined. When an object is used to call a class member funciton, then the address of that object is automatically assigned to the 'this' pointer.
<br />
<br />
Here's an example below explaining the same:

```C++

#include<iostream>
using namespace std;
class girlscript
{
  int a;
  public:
        void set_data(int x)
        {
          this->a = x;
        }
        void display(void)
        {
          cout << "The value of a = " << this->a << endl;
          cout << "The address of object g = " <<this << endl;
        }
};
int main()
{
  girlscript g;
  g.set_data(5);
  g.display();
  return 0;
}

```

### Output:

> The value of a = 5  
> The address of object g = 0x7ffdb83ca0b4  

In this program, to assign a value to the data member 'a'. We do it through
> this-> = x;  

Because, 'this' is an inbuilt pointer which always points or contains the address of the objeect with which the member functions is called. As soon as the member function is called, the address of the object with which it is called gets stored in the 'this' pointer.

Here's another example explaining the same:

```C++
#include<iostream>
using namespace std;
class girlscript
{
  int a;
  public:
        void set_data(int x)
        {
          a = x;
        }
        void display(void)
        {
          cout << "The value of a = " << a << endl;
        }
};
int main()
{
  girlscript g;
  g.set_data(5);
  g.display();
  return 0;
}

```

### Output:

> The value of a = 5  

The above program looks like a normal program, without the keyword 'this' anywhere in the program because C++ allows the use of short hand form

> a = x  

We have not used the 'this' pointer. We only use the 'this' pointer when the member functions are called. 
