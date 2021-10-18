# Encapsulation
It means hiding data from outside world providing protective shield to members inside the class same as a  capsule provides.<br>
* Classes provide access specifiers for members (data as well as
function) to enforce data hiding that separates
implementation from interface
  * private - accessible inside the definition of the class
member functions of the same class
  * public - accessible everywhere
member functions of the same class
member function of a different class
global functions
* The keywords public and private are the Access Specifiers
* Unless specified, the access of the members of a class is
considered private
* A class may have multiple access specifier. The effect of one
continues till the next is encountered.
* The private part of a class (attributes and methods)
forms its implementation because the class alone should
be concerned with it and have the right to change it
* The public part of a class (attributes and methods)
constitutes its interface which is available to all others for
using the class.

Now lets some implementation of it:

Example
```c++
#include<iostream>
#include<vector>
using namespace std;

class stack{
  private:
   vector<int>st;
   int top;
  public:
    stack():top(-1){st.resize(100);}
    ~stack(){};
    void push(int x){
        st[++top]=x;  //saves the value in stack
    }
    int pop(){
        return st[top--]; //pops the value from stack
    }
    int check_top(){
        return st[top]; //returns the top value
    }  
};
int main(){
    stack s;
    //s.top=2; //error: private member cannot be accessed
    //pushing values in stack
    for(int i=1;i<=6;i++){
        s.push(i);
    }
    //checking the topmost value
    cout<< "topmost value is" << s.check_top()<<endl;
    //popping the value
    cout<<"values are"<< s.pop()<<endl;
    cout<<"values are"<< s.pop()<<endl;
    cout<<"values are"<< s.pop()<<endl;
    cout<<"values are"<< s.pop()<<endl;
    return 0;
}
```
**Output**
```
topmost value is6
values are6
values are5
values are4
values are3
```
 From the above example we can see that array st and top was private which provide us security that this data cannot be altered by any other means from outside of class. we put all attributes in private and the methods in public. This restricts the access to data completely. To fine-grain the access to data we provide selective public member functions to read (get) and / or write (set) data.

### Advantage of Encapsulation
* Data hiding
* Increased flexiblity
* Reusability


