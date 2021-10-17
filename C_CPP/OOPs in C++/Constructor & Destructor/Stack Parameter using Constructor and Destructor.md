
CONSTRUCTORS: 
===============
The member functions of a class,used to initialise objects of the same class. With no return type, it has the same name as of class and should be placed inside public section of same.

DESTRUCTORS: 
===============   
These are used for memory deallocation and cleanup for class objects and its members , when the object is deleted at first place.A destructor is a member function with the same name as its class prefixed by a ~ (tilde).
```
//SYNTAX:
class AB{
   public:
   AB(); //CONSTRUCTOR
   ~AB(); // DESTRUCTOR
}
```
IMPLEMENTATION OF STACK USING CONSTRUCTORS (PARAMETRISED CONSTRUCTORS) AND DESTRUCTORS: 
---------------
```c++
#include <iostream>
using namespace std;

//Define the default allocated_size of the stack
#define SIZE 10
//A class to represent a stack
class stack
{   int *array;
    int top;
    int allocated_size;
public:
//FIRST WE DEFINE METHOD FUNCTIONS : CONSTRUCTORS AND DESTRUCTORS

//Constructor to initialize the stack

stack(int size)  //CONSTRUCTOR
{
    array = new int[size];
    allocated_size = size;
    top = -1;
}
 
Destructor to free memory allocated to the stack
~stack() {        //DESTRUCTOR
    delete[] array;
}
 
//SECOND WE LAY OUT ALL UTILITY FUNCTIONS INSIDE CLASS
Utility function to add an element `x` to the stack
 void push(int x)
{
    if (isFull())
    {
        cout << "STACK OVERFLOW";
        exit(EXIT_FAILURE);
    }
 
    cout << "Element to be inserted: " << x << endl;
    array[++top] = x;
}
 
// Utility function to pop a top element from the stack
int pop()
{
    // check for stack underflow
    if (isEmpty())
    {
        cout << "STACK UNDERFLOW";
        exit(EXIT_FAILURE);
    }
 
    cout << "Element to be removed: " << peek() << endl;
 
    // decrease stack size by 1 and return the popped element
    return array[top--];
}
 
// Utility function to return the top most element of the stack
int peek()
{
    if (!isEmpty()) {
        return array[top];
    }
    else {
        exit(EXIT_FAILURE);
    }
}
 
// Utility function to check if the stack is empty or not
bool isEmpty() {
    return top == -1;               
}
 
// Utility function to check if the stack is full or not
bool isFull() {
    return top == allocated_size - 1;   
}  
};

int main()
{   
    cout<<"STACK IMPLEMENTATION"<<endl;
    stack obj(5);
 
    obj.push(6);
    obj.push(7);
    obj.push(10);
    obj.push(13);
    obj.push(20);
    obj.pop();
    obj.pop();
    obj.push(56);
 
    cout << "The top most element is " << obj.peek() << endl;
   
    if (obj.isEmpty()) {
        cout << "The stack is empty\n";
    }
    else {
        cout << "The stack is not empty\n";
    }
    return 0;
}
```
C_CPP/OOPs in C++/Constructor & Destructor/Stack Parameter using Constructor and Destructor.md









