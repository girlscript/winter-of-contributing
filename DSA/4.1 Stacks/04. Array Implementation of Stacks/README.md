# **Array Implementation Of Stacks**

## **Overview**

We will be implementing a generic stack class using vector (Dynamic Array), in this class we will implement some basic stack functions like:
- push()
- pop()
- top()
- get_size()
- is_empty()
- print_stack()

<br>

## **Approach**

The key property of a stack is : LIFO (Last In First Out)
- Basically a stack is a form of a vector but with limited access and features
- In a vector we have the random access property but in stack we are limited to the topmost element
- In a vector we can add elements and remove elements in any order, however in stack we can only change the current topmost element

To implement a stack class using a vector we will make it a private member of the class, which means that only class members and member functions will be having the access to the vector.

## **PseudoCode**

<br>

```C++
class Stack:
private:
    vector v
    size
    
public:
    stack():
        size = 0

    push(element):
        v.push_back(element)
        size <-- size + 1

    pop():
        v.pop();
        size <-- size - 1

    top() const:
        return v[size - 1]
    
    int get_size() const:
        return size

    bool is_empty() const:
        return size == 0
    
    print_stack() const:
        cout << "Top --> " << endl
        for(i = size - 1; i >= 0; i <-- i - 1)
            cout << v[i] << endl
        cout << endl
```

<br>

## **Time And Space Complexity Analysis**

<br>

### **Time Complexity**
- push() : push is O(1) operation, worst case complexity of a vector push operation is O(N), however the amortized (overall) cost of insertion of elements in a vector is O(1)
- pop() : pop() is O(1) operation, since we just need to remove one element from the end, and decrease the size of the stack
- top() : it is a constant time operation since we are just returning the topmost element of the stack using the already known size variable
- get_size() : get_size is O(1) as well, since we are just return the size of the vector
- is_empty() : it is also O(1) operation, we are just comparing the size varibale with 0
- print_stack() : it is O(N) operation since we are visiting all the elements of the stack

<br>

### **Space Complexity**
The space complexity for all the operations is O(1) since we are not using any extra space to perform any task


## **Code**

<br>

```C++
#include <iostream>
#include <vector>

using namespace std;

template <typename T>
class Stack
{
private:
    vector <T> v;
    int size;

public:
    Stack()
    {
        size = 0;
    }

    void push(T element)
    {
        v.push_back(element);
        size ++;
    }

    void pop()
    {
        v.pop_back();
        size --;
    }

    T top() const
    {
        return v[size - 1];
    }

    int get_size() const
    {
        return size;
    }

    bool is_empty() const
    {
        return size == 0;
    }

    void print_stack() const
    {
        cout << "*************************" << endl;
        cout << "Stack Top --> " << endl;
        for(int i = size - 1; i >= 0; i--)
            cout << v[i] << endl;
        cout << endl << "*************************" << endl;
    }
};

int main()
{
    Stack <string> s;

    cout << "Enter the number of elements you want to enter" << endl;
    int n;
    cin >> n;

    cout << "Enter the elements" << endl;

    while(n--)
    {
        string str;
        cin >> str;

        s.push(str);
    }

    s.print_stack();
    
    return 0;
}
```

<br>

## **Output**

<br>

![image](https://user-images.githubusercontent.com/34866732/143683996-3b0605d1-0735-4dfb-9a81-5c0bd1e8a564.png)