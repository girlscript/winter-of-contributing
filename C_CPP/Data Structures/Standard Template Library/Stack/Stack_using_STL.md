# Stack using STL

### How to use the STL Stack in C++

The Standard Template Library (STL) in C++ contains the implementation of commonly known data structures such as arrays, lists, stacks, etc.
To use the STL stack, you must first include the stack file:
### `#include <stack>`

<br>
A Stack is a simple data structure for storing data.
<br>

In stack, the order in which the data arrives is important. The Stack allows elements to be added and removed from one end only. Stacks are ideal for enforcing sequential rules of access ie, LIFO (Last In First Out).
<br>

A Bunch of plates are the siples examples of stack.
<br>

Generally, Stacks are used for reversing things. If you push something, say a String onto a Stack one character at a time, and then construct a String from the members popped off the Stack, then the String is reversed.
<br>
### ADVANTAGES OF STACK:-

* Stack is easy to learn and implement for beginners.<br>
* Stacks are used to solving problems that work on recursion.<br>
* It allows you to control how memory is allocated and deallocated.<br>

### DISADVANTAGES OF STACK:-

* Random access of elements is impossible in stacks.<br>
* Stacks are neither flexible nor scalable.<br>
  
### Functions supported by a STACK:-

1. <b>push(e)</b> : Places the element passed as the parameter (e) on top of the stack.

1. <b>pop()</b>  :  Returns the top-most element of the stack and removes it.

1. <b>peek()</b> :  Returns the top-most element of the stack without removing it.

1. <b>size()</b> :  Returns the total number of elements in the stack.

1. <b>empty()</b> : Returns true, if the stack is empty, and false if otherwise.
```c
//Demonstrating C++ Standard Library class template stack

#include<iostream> 
#include<stack<stack>>
using namespace std;

// Display all elements of stack
void display(stack<int> );

int main()
{
    stack<int> st;                  //Initialisation of a stack

    st.push(1);                     //Pushing 1 into the stack
    st.push(2);                     //Pushing 2 into the stack
    st.push(3);                     //Pushing 3 into the stack
    st.push(4);                     //Pushing 4 into the stack
    st.push(5);                     //Pushing 5 into the stack

    cout<<"SIZE OF STACK IS : "<<st.size()<<endl;

    display(st);                     
    cout<<"POPPED "<<st.top()<<endl;
    st.pop();                       //Pop function remove top element of the stack

    display(st);

    cout<<"PEEK ELEMENT OF STACK IS : " << st.top()<<endl;

    cout<<"POPPED "<<st.top()<<endl;
    st.pop();

    display(st);

    cout<<"POPPED "<<st.top()<<endl;
    st.pop();
    cout<<"POPPED "<<st.top()<<endl;
    st.pop();
    cout<<"POPPED "<<st.top()<<endl;
    st.pop();

    if(st.empty())                  //empty function returs 1 if stack is empty
        cout<<"STACK IS EMPTY\n";
    else
        cout<<"STACK IS NOT EMPTY\n";

    return 0;
}
//output stack contents
void display(stack<int> s)
{
    cout<<"YOUR STACK LOOKS LIKE : ";
    while(!s.empty())
    {
        cout<<s.top()<<" ";
        s.pop();
    }
    cout<<endl;
}
```
```c
OUTPUT : 
SIZE OF STACK IS : 5
POPPED 5
YOUR STACK LOOKS LIKE : 4 3 2 1
PEEK ELEMENT OF STACK IS : 4
POPPED 4
YOUR STACK LOOKS LIKE : 3 2 1
POPPED 3
POPPED 2
POPPED 1
STACK IS EMPTY
```
