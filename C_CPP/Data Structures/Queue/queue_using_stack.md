# Implementation of Queue Using Stack
A queue is a data structure which follows FIFO operation (which means First In First Out) and if we talk about Stack it is the data structure which follows LIFO (which means Last In First Out) and we can implement queue using the stack , Basically there are three methods that are :
1. By making enQueue operation costly.
2. By making deQueue operation costly.
3. By using function call stack for implementation of method 2.

So by these methods we can implement queue using stack and we can see in each method any one operation enqueue or dequeue become costly.

## 1. Method 1 (Making enQueue operation costly)
```cpp
#include <iostream>
#include<stack>
using namespace std;

class Queue {
	stack<int> s1, s2;
 public:
	void enQueue(int val)
	{
      // Pushing all elements from s1 to s2  
		while (!s1.empty()) {
			s2.push(s1.top());
			s1.pop();
		}

		// Push item into s1
		s1.push(val);

		// Pushing all element of s2 back to s1
		while (!s2.empty()) {
			s1.push(s2.top());
			s2.pop();
		}
	}

	// Deleting the element from the queue
	int deQueue()
	{
		// if s1 is empty means no element present
		if (s1.empty()) {
			cout << "Underflow";
		}

		// Return top of s1 as elemnt that deleted
		int val = s1.top();
		s1.pop();
		return val;
	}
};

int main()
{
	Queue que;
	que.enQueue(30);
	que.enQueue(40);
	que.enQueue(50);

	cout << que.deQueue() << '\n';
	cout << que.deQueue() << '\n';
	cout << que.deQueue() << '\n';

	return 0;
}
```
Output :
```
30
40
50
```
### Time Complexity
1. **enQueue Operation** : *O(N)* Because we have shift all elements of s1 to s2.
2. **deQueue Operation** : *O(1)* same as the pop operation in stack.

### Space Complexity
*O(N)* Because of using stack for storing values.


## 2. Method 2 (Making deQueue operation costly)
```cpp
#include <iostream>
#include<stack>
using namespace std;

class Queue {
  stack<int> s1, s2;
 public:
	void enQueue(int val)
	{
      // Pushing all elements from s1 to s2  
		while (!s1.empty()) {
			s2.push(s1.top());
			s1.pop();
		}

		// Push item into s1
		s1.push(val);

		// Pushing all element of s2 back to s1
		while (!s2.empty()) {
			s1.push(s2.top());
			s2.pop();
		}
	}

	// Deleting the element from the queue
	int deQueue()
    {
        // if s1,s2 are empty that case of no element present
        if (s1.empty() && s2.empty()) {
            cout << "Underflow";
        }
 
        // if s2 is empty, move all elements from s1 to s2
        if (s2.empty()) {
            while (!s1.empty()) {
                s2.push(s1.top());
                s1.pop();
            }
        }
 
        // return the top item from s2
        int ele = s2.top();
        s2.pop();
        return ele;
    }
};

int main()
{
	Queue que;
	que.enQueue(30);
	que.enQueue(40);
	que.enQueue(50);

	cout << que.deQueue() << '\n';
	cout << que.deQueue() << '\n';
	cout << que.deQueue() << '\n';

	return 0;
}
```
Output :
```
30
40
50
```
### Time Complexity
1. **enQueue Operation** : *O(1)* same as the push operation in stack
2. **deQueue Operation** : *O(N)* Because we have shift all elements of s1 to s2.

### Space Complexity
*O(N)* Because of using stack for storing values.


## Method 3 (Implementation of method 2 using call stack)
```cpp
#include<iostream>
#include<stack>
using namespace std;

class Queue{
  stack<int>s1;
  
  public :
   void enQueue(int val){
       s1.push(val);
   }

   int deQueue(){
       if (s1.empty()) {
            cout << "Underflow";
        }
 
        // pop an element from s1
        int ele = s1.top();
        s1.pop();
 
        // if s1 becomes empty, return back the popped item
        if (s1.empty())
            return ele;
 
        // recursive call or we can say using call stack
        int Pop = deQueue();
 
        // push popped item back to the stack
        s1.push(ele);
 
        // return the result of recursive call in deQueue() function
        return Pop;
   }
};

int main()
{
	Queue que;
	que.enQueue(30);
	que.enQueue(40);
	que.enQueue(50);

	cout << que.deQueue() << '\n';
	cout << que.deQueue() << '\n';
	cout << que.deQueue() << '\n';

	return 0;
}
```
Output :
```
30
40
50
```
### Time Complexity
1. **enQueue Operation** : *O(1)* same as the push operation in stack
2. **deQueue Operation** : *O(N)* The diffrence between method 2 and this method is that in this we not using extra stack for shiting the elements in this we using the call stack , That help us to restored all elements in a single call.

### Space Complexity
*O(N)* Because of using stack for storing values.
