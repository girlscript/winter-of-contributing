# Implement a stack using single queue

## Overview 
### Stack
- Stack A stack is a linear data structure in which elements can be inserted and deleted only from one side of the list, called the top. 
- A stack follows the LIFO (Last In First Out) principle, i.e., the element inserted at the last is the first element to come out. 
- The insertion of an element into stack is called push operation, and deletion of an element from the stack is called pop operation. 
- In stack we always keep track of the last element present in the list with a pointer called top.

### Queue 
- A queue is a linear data structure in which elements can be inserted only from one side of the list called rear, and the elements can be deleted only from the other side called the front. 
- The queue data structure follows the FIFO (First In First Out) principle, i.e. the element inserted at first in the list, is the first element to be removed from the list. 
- The insertion of an element in a queue is called an enqueue operation and the deletion of an element is called a dequeue operation. 
- In queue we always maintain two pointers, one pointing to the element which was inserted at the first and still present in the list with the front pointer and the second pointer pointing to the element inserted at the last with the rear pointer.

## Algorithm

1) Initialize a class stack with a queue data structure of integer type as a private member. We also define push, pop, top, and empty as it’s public member functions.
2) Create the function empty(). Return true if the queue is empty else return false.
3) push() accepts an integer value. Create an integer variable and store the size of the queue in the variable and push/insert the integer variable in the queue.
4) Traverse from 0 to the previous size of the queue. Keep on inserting the current front of the queue to itself and removing it.
5) Create the function pop() which checks if there is no element in the queue then print “No elements” and return -1. Else pop/remove the top/front element.
6) We create function top() which returns -1 if there is no element in the queue else return the front of the queue.


## Code
```
// single queue
#include<bits/stdc++.h>
using namespace std;
 
// User defined stack that uses a queue
class Stack
{
    queue<int>q;
public:
    void push(int val);
    void pop();
    int top();
    bool empty();
};
 
// Push operation
void Stack::push(int val){
    //  Get previous size of queue
    int s = q.size();
 
    // Push current element
    q.push(val);
 
    // Pop (or Dequeue) all previous
    // elements and put them after current
    // element
    for (int i=0; i<s; i++)
    {
        // this will add front element into
        // rear of queue
        q.push(q.front());
 
        // this will delete front element
        q.pop();
    }
}
// Removes the top element
void Stack::pop()
{
    if (q.empty())
        cout << "No elements\n";
    else
        q.pop();
}
 
// Returns top of stack
int  Stack::top()
{
    return (q.empty())? -1 : q.front();
}
 
// Returns true if Stack is empty else false
bool Stack::empty()
{
    return (q.empty());
}
int main()
{
    Stack s;
    s.push(10);
    s.push(20);
    cout << s.top() << endl;
    s.pop();
    s.push(30);
    s.pop();
    cout << s.top() << endl;
    return 0;
}
```

## OUTPUT
```
20
10
```



## Complexity Analysis
Time Complexity
- push() function is taking O(n) time while pop() and top() functions require constant time only i.e. O(1). Because for pushing an element we remove and add the number of elements which were already present in it. This makes the operation to run in polynomial time.

Space Complexity
- O(n) because we are using space to store n number of elements.

## References
- https://www.tutorialcup.com/interview/stack/implement-a-stack-using-single-queue.htm
- https://www.youtube.com/watch?v=hC1UplBFEj0