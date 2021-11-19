# **This** Pointer in C++

### Definition: This is a keyword which is a pointer that points to the object which invokes the member function.

- It is used to refer caller object in member function.
- This pointer can not be modify.
- As friend function is not a member function, it does not have a this pointer.

### A program to demonstrate the concept of This pointer:

```c++
#include <iostream>
using namespace std;
class  A{
private:     // Private member function
  int number;
  char character;

public:   // Public member function
  void set_Data(int number, char character){     // Member function to set data
    this->number =number;
    this->character=character; // This pointer is used to access the private member function
  }

  void get_Data(){     // Member function to get data
    cout<<number<<"\n"<<character;  // Display data
  }
};
int main(){
  A obj;
  obj.set_Data(500, 'I');
  obj.get_Data();
  return 0;
}
```

Output for above program:

```
500
I
```
### This pointer is also used to return a reference to the invoking object.

- Using this method we may call all the functions for the object in one shift.

- A program to demonstrate it:
```c++
#include <iostream>
using namespace std;

class B{  
    private:   
    int num;
    public:
         B &set_Data(int num){  // Member function to set data
            this->num = num;   
            return *this; // Reference of the object is returned using This pointer
        }

        void get_Data(){
            cout<<num<<"\n"; // Display data
        }
};

int main(){
    B num;
    num.set_Data(10).get_Data();    // here set_Data() is returning an object, so we have used get_Data() with it only.
    return 0;
}
```
Output for above program:
```c++
10
```
