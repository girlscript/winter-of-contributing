# Introduction to Friend Function in C++

In this, we will see Introduction to friend function in C++

# Overview

- **What is need of friend function**
- **Definition of friend function**
- **Points to be remember about friend function** 
- **Syntax of friend function**
- **Examples of friend function**



# What is need of friend function
Non-member class functions won't have access to another class's private data. We might want two classes to share functions and the data members in situations.
 
 In this case, we can make it a friend of these classes and allow the function to access private and protected class data.

In special cases when a class’s private data needs to be accessed directly without using objects of that class, we need friend functions.
Let us take an example and understand it thoroughly.

Let’s say, two classes ```Boss``` and ```Employee```. We want to calculate their ```gross salary```. In this case, we want access to both ```Boss``` and ```Employee``` class objects, so instead of making two functions in both the classes we can make one function and use the ```friend``` keyword to access its data members which we will study further.


# Definition of Friend Function

A friend function in C++ is defined as a function that can access private, protected and public members of a class. The friend function is declared using the friend keyword inside the body of the class.

# Points to remember about friend function

- A friend function can be declared in private or public part of the class. It means the same.
- A friend function is not only the scope of the class it is defined as friend for, but it is also in the scope of other classes and functions.
- A friend function can be used as a normal function.
- Friend functions are not called using any objects of the class as they are not in the scope of a class.


# Syntax of friend function

To make a function a friend function inside the class. We use the friend keyword for declaration.

```cpp
class Myclass{
	
	friend return_type function_name(argument1, argument 2, ..);
}
```

In this example, the friend function is declared inside the Myclass class.
- ```friend``` is a keyword to denote that this function is a friend function.
- ```return_type``` is the return type of the function
- ```function_name``` is the name of the function that is declared as a friend function.
- ```(argument1, argument 2, ..)``` are the arguments passed to the function.

# Examples of Friend Function

### Example :  Calculation of area of rectangle using friend function

```cpp

#include<iostream>
using namespace std;

class Area{
    int length;
    int breadth;

    public:

        void set_data(int l, int b){
            length = l;
            breadth = b;
        }

        friend int area_of_rectangle(Area a);
};

area_of_rectangle(Area a1){
    return (a1.length*a1.breadth);
}


int main(){

    Area rect;
    rect.set_data(4,5);
    cout<<"Area of rectangle is "<<area_of_rectangle(rect)<<endl;    
    return 0;
}

```

The output of the program is
```cpp
Area of rectangle is 20
```

We have declared a class ```Area``` and friend function ```area_of_rectangle``` which takes class object as argument and return the area of rectangle. As we have passed object as argument that's why we are using *dot* operator to access private data members.


## Example : Calculation of length of a string using friend function

```cpp
#include <iostream>
using namespace std;

class Mystring
{
private:
    string str;

public:
    void set_string(string s)
    {
        str = s;
    }

    friend int find_length(Mystring);
};

int find_length(Mystring b)
{
    return b.str.length();
}
int main()
{
    Mystring b;
    b.set_string("Gwoc21IsBest");
    cout << "Length of string is : " << find_length(b) << endl;
    return 0;
}
```

The output of the program is

```Length of string is : 12```

In this example, we have declared a class ```Mystring``` with ```str``` as data member. The function ```find_length``` is set to be friend which takes class object as argument and return its length.
In main, we have declared an object of a class b then sets the string as ```Gwoc21IsBest``` which is of length 12 and then called the friend function ```find_length``` which returns the same value.