# Templates in C++

---

## Why do we need templates and What actually are templates ?

Suppose we make a function to multiply two integers so will it able to multiply two float and double as well.
**The answer is NO**.For that we would need various versions of that function for different data types.

### Here Template solves our Problem.

Templates enable us to define generic classes. Templates are defined with a parameter that would be replaced by
the specified data type at the time of actual use of the class or function. Therefore templates are sometimes called
_parameterized classes or functions_.

## Templates can be implemented in two ways.

- as a Function Templates
- as a Class Templates

---

# Function Template

```C++
#include<iostream>
using namespace std;

template<class T>
void func_swap(T &x, T &y)
{
    T temp = x;
    x = y;
    y = temp;
}

int main()
{
    int a = 12, b = 100;
    float p = 1.34, q = 18.26;
    func_swap(a,b);                       // swap for integers
    cout<<"a is "<<a<<"\tb is "<<b<<endl;
    func_swap(p,q);                       // swap for float
    cout<<"p is "<<p<<"\tq is "<<q<<endl;

    return 0;
}

```

### OUTPUT

a is 100 b is 12

p is 18.26 q is 1.34

---

# Class Template

```C++
#include<iostream>
using namespace std;

template <class T>
class Demo{
    T a,b;
    public:
        Demo(T first, T second)
        {
            a = first;
            b = second;
        }

        T getMax()
        {
            return(a>b? a : b);
        }
};
int main()
{
    Demo<int> o1(100,70);                      // here arguements are intergers
    cout<<o1.getMax()<<" is greater"<<"\n";
    Demo<char> o2('A','a');                    // here arguements are characters
    cout<<o2.getMax()<<" is greater"<<"\n";

    return 0;
}
```

### OUTPUT

100 is greater

a is greater

---

## Points to Remember

- A class created using class template is called a _template class_
- A function created using function template is called a _template function_
