# CONSTRUCTORS: 
They are similar to a member function of the class as they are used to initialise the objects of the same class, but doesn't support a prototype. 
It has the same name as of class and should be placed inside public section of same.

# DESTRUCTORS:   
These are used for memory deallocation and cleanup for class objects and its members , when the object is deleted at first place.
Similar to constructors in its usage, they are prefixed by a "sign" named as tilde (~). 
```cpp
//SYNTAX:
class AB{
   public:
   AB(); //CONSTRUCTOR
   ~AB(); // DESTRUCTOR
}
```
Implementation of stack using Constrctors and Destructors. 
------------------
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
Output:
---------
```
STACK IMPLEMENTATION     
Element to be inserted:6    
Element to be inserted:7   
Element to be inserted:10   
Element to be inserted:13   
Element to be inserted:20  
Element to be removed: 20  
Element to be removed: 13  
Element to be inserted:56  
The top most element is 56  
```
