# this Pointer
▶️ **_this_** is a keyword in C++  
▶️ **_this_** is a local object pointer in every instance memeber function which contains address of caller object.  
▶️ **_this_** is used to represent caller object in instance memeber function.  
▶️ There's no **_this_** pointer within main() and friend function.  
▶️ **_this_ pointer points caller object.**  
    - If a member function is called by a caller object (say C1) , then the address of C1 is within **_this_** pointer.  
▶️ Address within **_this_** pointer can't be changed.  
▶️ **_this_ pointer is within instance member function only but not in static member function as it doesn't have caller object.**  

```C++
class sum
{
private:
    int a,b;
public:
    void setData(int a,int b)
    {
        a=a;b=b;     //NAME CONFLICT
    }
    ------------
};
```
In the above program ,there's name conflict since the name of local variable and instance member variable is same.But Local variable is given more preference as it's accessed within a particular function only.   
**In such situation _this_ pointer is used.**  
Example - 

//Program
```C++
#include <iostream>

using namespace std;
class sum
{
private:
    int a,b;
public:
    void setData(int a,int b)
    {
        this->a=a;this->b=b;
    }
    void showData()
    {
        cout<<"Sum of "<<a<<" and "<<b<<" is "<<a+b;
    }
};

int main()
{
    sum s1;
    int a,b;
    cout<<"Enter two numbers : ";
    cin>>a>>b;
    s1.setData(a,b);
    s1.showData();
    
}
```

Output:
```C++
Enter two numbers : 12 10
Sum of 12 and 10 is 22
```  























