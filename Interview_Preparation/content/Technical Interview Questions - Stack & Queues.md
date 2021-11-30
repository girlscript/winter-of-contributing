# Stacks and Queues

**Stack** is a linear data structure which follows a particular order in which the operations are performed. The order may be LIFO(Last In First Out) or FILO(First In Last Out).

### **Top questions on Stacks** 

- **Balanced parenthesis**

  Given an expression string exp, write a program to examine whether the pairs and the orders of “{“, “}”, “(“, “)”, “[“, “]” are correct in exp.


```cpp
#include<bits/stdc++.h>
using namespace std;
#define ll long long int 

bool isValid(string s)
{
	ll n=s.size();
	stack<char> st;
	bool ans=true;
	for(ll i=0;i<n;i++)
	{
		if(s[i]=='{' || s[i]=='[' || s[i]=='(')
			st.push(s[i]);      
		else if(s[i]==')')
		{
			if(!st.empty() && st.top()=='(')
				st.pop();
			else
			{
				ans=false;
				break;
			}
		}
		else if(s[i]==']')
		{
			if(!st.empty() && st.top()=='[')
				st.pop();
			else
			{
				ans=false;
				break;
			}
		}
		else if(s[i]=='}')
		{
			if(!st.empty() && st.top()=='{')
				st.pop();
			else
			{
				ans=false;
				break;
			}
		}

	}
	if(!st.empty())
		return false;
	return ans;
}

int main()
{
	string s="{([])}";
	if(isValid(s))
		cout<<"valid string\n";
	else cout<<"invalid string\n";
	return 0;
}
```

- **Next greater element**

	Given an array, print the Next Greater Element (NGE) for every element. The Next greater Element for an element x is the first greater element on the right side of x in array. Elements for which no greater element exist, consider next greater element as -1. 

```cpp
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	vector<ll> v;
	stack<ll> s;
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
		cin>>a[i];
	for(ll i=n-1;i>=0;i--)
	{
		if(s.size()==0)
			v.push_back(-1);
		else if(s.size()>0 && s.top()>a[i])
			v.push_back(s.top());
		else if(s.size()>0 && s.top()<=a[i])
		{
			while(s.size()>0 && s.top()<=a[i])
				s.pop();
			if(s.size()==0)
				v.push_back(-1);
			else
				v.push_back(s.top());
		}
		s.push(a[i]);
	}

	for(ll i=n-1;i>=0;i--)
	{
		cout<<v[i]<<"\n";
	}
	return 0;
}
```

- **Stock Span Problem**

	The stock span problem is a financial problem where we have a series of n daily price quotes for a stock and we need to calculate span of stock’s price for all n days.
	The span Si of the stock’s price on a given day i is defined as the maximum number of consecutive days just before the given day, for which the price of the stock on the current day is less than or equal to its price on the given day.
	For example, if an array of 7 days prices is given as {100, 80, 60, 70, 60, 75, 85}, then the span values for corresponding 7 days are {1, 1, 1, 2, 1, 4, 6}

```cpp
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
int main()
{
	vector<ll> v;
	stack<pair<ll,ll>> s;
	ll n;
	cin>>n;
	ll a[n];
	for(ll i=0;i<n;i++)
		cin>>a[i];
	for(ll i=0;i<n;i++)
	{
		if(s.size()==0)
			v.push_back(-1);
		else if(s.size()>0 && s.top().first>a[i])
			v.push_back(s.top().second);
		else if(s.size()>0 && s.top().first<=a[i])
		{
			while(s.size()>0 && s.top().first<=a[i])
				s.pop();
			if(s.size()==0)
				v.push_back(-1);
			else
				v.push_back(s.top().second);
		}
		s.push({a[i],i});
	}

	for(ll i=0;i<n;i++)
	{
		cout<<i-v[i]<<"\n";
	}
	return 0;
}
```

- **Maximum area of Histogram**

	Find the largest rectangular area possible in a given histogram where the largest rectangle can be made of a number of contiguous bars. For simplicity, assume that all bars have same width and the width is 1 unit.

```cpp
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int largestRectangleArea(vector<int> &arr)
{       
    int n=arr.size();
    vector<int> left(n), right(n);
    stack<int> s; 
    //nsl
    
    for(int i=0;i<n;i++)
    {
        if(s.empty())
            left[i] = -1;
        else
        {
            while(!s.empty() && arr[s.top()] >= arr[i])
                s.pop();
            if(s.empty())
                left[i] = -1;
            else
                left[i] = s.top();            
        }
        s.push(i);
    }
    
    //empty stack 
    while(!s.empty())
        s.pop();
     
    int j = 0 ; 
    for(int i=n-1;i>=0;i--)
    {
        if(s.empty())
            right[j++] = n;
        else
        {
            while(!s.empty() && arr[s.top()] >= arr[i])
                s.pop();
            
            if(s.empty())
                right[j++] = n;
            else
                right[j++] = s.top();
        }
        s.push(i);
    }
    
    reverse(right.begin(),right.end());
     
    for(int i=0;i<n;i++)
        left[i] = right[i] - left[i] -1;
    
    int ans = INT_MIN;
    
    for(int i=0;i<n;i++)
    	ans=max(ans,left[i]*arr[i]);
            
     return ans;
}

int main()
{
	int n; cin>>n;
	vector<int> a(n);
	int ans;
	for(int i=0;i<n;i++)
		cin>>a[i];
	ans=largestRectangleArea(a);
	cout<<ans;

	return 0;
}
```

- **Maximum area rectangle in Binary matrix**

	Given a binary matrix, find the maximum size rectangle binary-sub-matrix with all 1’s.
	Example:

	Input : 0 1 1 0
          	1 1 1 1
          	1 1 1 1
          	1 1 0 0

	Output : 1 1 1 1
          	 1 1 1 1

```cpp
#include<bits/stdc++.h>
using namespace std;
#define ll long long int
#define pb push_back

int largestRectangleArea(vector<int> arr)
{       
    int n=arr.size();
    vector<int> left(n), right(n);
    stack<int> s; 
    //nsl
    
    for(int i=0;i<n;i++)
    {
        if(s.empty())
            left[i] = -1;
        else
        {
            while(!s.empty() && arr[s.top()] >= arr[i])
                s.pop();
            if(s.empty())
                left[i] = -1;
            else
                left[i] = s.top();            
        }
        s.push(i);
    }
    
    //empty stack 
    while(!s.empty())
        s.pop();
    
    //nsr 
    int j = 0 ; 
    for(int i=n-1;i>=0;i--)
    {
        if(s.empty())
            right[j++] = n;
        else
        {
            while(!s.empty() && arr[s.top()] >= arr[i])
                s.pop();
            
            if(s.empty())
                right[j++] = n;
            else
                right[j++] = s.top();
        }
        s.push(i);
    }
    
    reverse(right.begin(),right.end());
     
    for(int i=0;i<n;i++)
        left[i] = right[i] - left[i] -1;
    
    int ans = INT_MIN;
    
    for(int i=0;i<n;i++)
    	ans=max(ans,left[i]*arr[i]);
            
     return ans;
}

int main()
{
	int n,m; cin>>n>>m;
	ll a[m][n];
    vector<int> v;
	int ans;
	for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
		cin>>a[i][j];
	
    for(int j=0;j<m;j++)
        v.pb(a[0][j]);
    ans=largestRectangleArea(v);
    for(int i=1;i<n;i++)
    {
        for(int j=0;j<m;j++)
        {
            if(a[i][j]==0)
                v[j]=0;
            else
                v[j]+=a[i][j];
        }
        ans=max(ans,largestRectangleArea(v));
    }

    cout<<ans;
	
    return 0;
}
```

- **Rainwater trapping**

	Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.
	Input: arr[]   = {2, 0, 2}
	Output: 2
	Structure is like below
	| |
	|_|
	We can trap 2 units of water in the middle gap.

```cpp
#include<bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
	ll n; cin>>n;
	ll a[n+1];
	for(ll i=0;i<n;i++)
		cin>>a[i];
	ll mxl[n+1],mxr[n+1];
	mxl[0]=a[0];
	mxr[n-1]=a[n-1];
	for(ll i=1;i<n;i++)
		mxl[i]=max(mxl[i-1],a[i]);
	for(ll i=n-2;i>=0;i--)
		mxr[i]=max(mxr[i+1],a[i]);
	ll water[n+1];
	ll sum=0;
	for(ll i=0;i<n;i++)
		water[i]=min(mxl[i],mxr[i])-a[i];
	for(ll i=0;i<n;i++)
		sum+=water[i];
	cout<<sum;
	return 0;
}
```

- **Minimum element in stack in O(1) space**

	Design a Data Structure SpecialStack that supports all the stack operations like push(), pop(), isEmpty(), isFull() and an additional operation getMin() which should return minimum element from the SpecialStack. All these operations of SpecialStack must be O(1). To implement SpecialStack, you should only use standard Stack data structure and no other data structure like arrays, list, .. etc.

```cpp
// C++ program to implement a stack that supports
// getMinimum() in O(1) time and O(1) extra space.
#include <bits/stdc++.h>
using namespace std;

// A user defined stack that supports getMin() in
// addition to push() and pop()
struct MyStack
{
	stack<int> s;
	int minEle;

	// Prints minimum element of MyStack
	void getMin()
	{
		if (s.empty())
			cout << "Stack is empty\n";

		// variable minEle stores the minimum element
		// in the stack.
		else
			cout <<"Minimum Element in the stack is: "
				<< minEle << "\n";
	}

	// Prints top element of MyStack
	void peek()
	{
		if (s.empty())
		{
			cout << "Stack is empty ";
			return;
		}

		int t = s.top(); // Top element.

		cout << "Top Most Element is: ";

		// If t < minEle means minEle stores
		// value of t.
		(t < minEle)? cout << minEle: cout << t;
	}

	// Remove the top element from MyStack
	void pop()
	{
		if (s.empty())
		{
			cout << "Stack is empty\n";
			return;
		}

		cout << "Top Most Element Removed: ";
		int t = s.top();
		s.pop();

		// Minimum will change as the minimum element
		// of the stack is being removed.
		if (t < minEle)
		{
			cout << minEle << "\n";
			minEle = 2*minEle - t;
		}

		else
			cout << t << "\n";
	}

	// Removes top element from MyStack
	void push(int x)
	{
		// Insert new number into the stack
		if (s.empty())
		{
			minEle = x;
			s.push(x);
			cout << "Number Inserted: " << x << "\n";
			return;
		}

		// If new number is less than minEle
		else if (x < minEle)
		{
			s.push(2*x - minEle);
			minEle = x;
		}

		else
		s.push(x);

		cout << "Number Inserted: " << x << "\n";
	}
};

// Driver Code
int main()
{
	MyStack s;
	s.push(3);
	s.push(5);
	s.getMin();
	s.push(2);
	s.push(1);
	s.getMin();
	s.pop();
	s.getMin();
	s.pop();
	s.peek();

	return 0;
}
```

### **Top questions on Queues** 

**Queue** is a linear structure which follows a particular order in which the operations are performed. The order is First In First Out (FIFO).

- **Queue using Stacks**

	We are given a stack data structure with push and pop operations, the task is to implement a queue using instances of stack data structure and operations on them.

```cpp
// CPP program to implement Queue using
// two stacks with costly enQueue()
#include <bits/stdc++.h>
using namespace std;

struct Queue {
	stack<int> s1, s2;

	void enQueue(int x)
	{
		// Move all elements from s1 to s2
		while (!s1.empty()) {
			s2.push(s1.top());
			s1.pop();
		}

		// Push item into s1
		s1.push(x);

		// Push everything back to s1
		while (!s2.empty()) {
			s1.push(s2.top());
			s2.pop();
		}
	}

	// Dequeue an item from the queue
	int deQueue()
	{
		// if first stack is empty
		if (s1.empty()) {
			cout << "Q is Empty";
			exit(0);
		}

		// Return top of s1
		int x = s1.top();
		s1.pop();
		return x;
	}
};

// Driver code
int main()
{
	Queue q;
	q.enQueue(1);
	q.enQueue(2);
	q.enQueue(3);

	cout << q.deQueue() << '\n';
	cout << q.deQueue() << '\n';
	cout << q.deQueue() << '\n';

	return 0;
}
```

- **Implement Stack using Queues**

	We are given a Queue data structure that supports standard operations like enqueue() and dequeue(). We need to implement a Stack data structure using only instances of Queue and queue operations allowed on the instances.

```cpp
/* Program to implement a stack using
two queue */
#include <bits/stdc++.h>

using namespace std;

class Stack {
	// Two inbuilt queues
	queue<int> q1, q2;

	// To maintain current number of
	// elements
	int curr_size;

public:
	Stack()
	{
		curr_size = 0;
	}

	void push(int x)
	{
		curr_size++;

		// Push x first in empty q2
		q2.push(x);

		// Push all the remaining
		// elements in q1 to q2.
		while (!q1.empty()) {
			q2.push(q1.front());
			q1.pop();
		}

		// swap the names of two queues
		queue<int> q = q1;
		q1 = q2;
		q2 = q;
	}

	void pop()
	{

		// if no elements are there in q1
		if (q1.empty())
			return;
		q1.pop();
		curr_size--;
	}

	int top()
	{
		if (q1.empty())
			return -1;
		return q1.front();
	}

	int size()
	{
		return curr_size;
	}
};

// Driver code
int main()
{
	Stack s;
	s.push(1);
	s.push(2);
	s.push(3);

	cout << "current size: " << s.size()
		<< endl;
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;
	s.pop();
	cout << s.top() << endl;

	cout << "current size: " << s.size()
		<< endl;
	return 0;
}
```

- **Queue – Linked List Implementation**

	In a Queue data structure, we maintain two pointers, front and rear. The front points the first item of queue and rear points to last item.
	enQueue() This operation adds a new node after rear and moves rear to the next node.
	deQueue() This operation removes the front node and moves front to the next node.

```cpp
#include <bits/stdc++.h>
using namespace std;

struct QNode {
	int data;
	QNode* next;
	QNode(int d)
	{
		data = d;
		next = NULL;
	}
};

struct Queue {
	QNode *front, *rear;
	Queue()
	{
		front = rear = NULL;
	}

	void enQueue(int x)
	{

		// Create a new LL node
		QNode* temp = new QNode(x);

		// If queue is empty, then
		// new node is front and rear both
		if (rear == NULL) {
			front = rear = temp;
			return;
		}

		// Add the new node at
		// the end of queue and change rear
		rear->next = temp;
		rear = temp;
	}

	// Function to remove
	// a key from given queue q
	void deQueue()
	{
		// If queue is empty, return NULL.
		if (front == NULL)
			return;

		// Store previous front and
		// move front one node ahead
		QNode* temp = front;
		front = front->next;

		// If front becomes NULL, then
		// change rear also as NULL
		if (front == NULL)
			rear = NULL;

		delete (temp);
	}
};

// Driven Program
int main()
{

	Queue q;
	q.enQueue(10);
	q.enQueue(20);
	q.deQueue();
	q.deQueue();
	q.enQueue(30);
	q.enQueue(40);
	q.enQueue(50);
	q.deQueue();
	cout << "Queue Front : " << (q.front)->data << endl;
	cout << "Queue Rear : " << (q.rear)->data;
}
```

- **Implement Stack and Queue using Deque**

	Deque also known as double eneded queue, as name suggests is a special kind of queue in which insertions and deletions can be done at the last as well as at the beginning.

	A link-list representation of deque is such that each node points to the next node as well as the previous node. So that insertion and deletions take constant time at both the beginning and the last.

```cpp
// C++ Program to implement stack and queue using Deque
#include <bits/stdc++.h>
using namespace std;

// structure for a node of deque
struct DQueNode {
	int value;
	DQueNode* next;
	DQueNode* prev;
};

// Implementation of deque class
class Deque {
private:

	// pointers to head and tail of deque
	DQueNode* head;
	DQueNode* tail;

public:
	// constructor
	Deque()
	{
		head = tail = NULL;
	}

	// if list is empty
	bool isEmpty()
	{
		if (head == NULL)
			return true;
		return false;
	}

	// count the number of nodes in list
	int size()
	{
		// if list is not empty
		if (!isEmpty()) {
			DQueNode* temp = head;
			int len = 0;
			while (temp != NULL) {
				len++;
				temp = temp->next;
			}
			return len;
		}
		return 0;
	}

	// insert at the first position
	void insert_first(int element)
	{
		// allocating node of DQueNode type
		DQueNode* temp = new DQueNode[sizeof(DQueNode)];
		temp->value = element;

		// if the element is first element
		if (head == NULL) {
			head = tail = temp;
			temp->next = temp->prev = NULL;
		}
		else {
			head->prev = temp;
			temp->next = head;
			temp->prev = NULL;
			head = temp;
		}
	}

	// insert at last position of deque
	void insert_last(int element)
	{
		// allocating node of DQueNode type
		DQueNode* temp = new DQueNode[sizeof(DQueNode)];
		temp->value = element;

		// if element is the first element
		if (head == NULL) {
			head = tail = temp;
			temp->next = temp->prev = NULL;
		}
		else {
			tail->next = temp;
			temp->next = NULL;
			temp->prev = tail;
			tail = temp;
		}
	}

	// remove element at the first position
	void remove_first()
	{
		// if list is not empty
		if (!isEmpty()) {
			DQueNode* temp = head;
			head = head->next;
			if(head) head->prev = NULL;
			delete temp;
			if(head == NULL) tail = NULL;
			return;
		}
		cout << "List is Empty" << endl;
	}

	// remove element at the last position
	void remove_last()
	{
		// if list is not empty
		if (!isEmpty()) {
			DQueNode* temp = tail;
			tail = tail->prev;
			if(tail) tail->next = NULL;
			delete temp;
			if(tail == NULL) head = NULL;
			return;
		}
		cout << "List is Empty" << endl;
	}

	// displays the elements in deque
	void display()
	{
		// if list is not empty
		if (!isEmpty()) {
			DQueNode* temp = head;
			while (temp != NULL) {
				cout << temp->value << " ";
				temp = temp->next;
			}
			cout << endl;
			return;
		}
		cout << "List is Empty" << endl;
	}
};

// Class to implement stack using Deque
class Stack : public Deque {
public:
	// push to push element at top of stack
	// using insert at last function of deque
	void push(int element)
	{
		insert_last(element);
	}

	// pop to remove element at top of stack
	// using remove at last function of deque
	void pop()
	{
		remove_last();
	}
};

// class to implement queue using deque
class Queue : public Deque {
public:
	// enqueue to insert element at last
	// using insert at last function of deque
	void enqueue(int element)
	{
		insert_last(element);
	}

	// dequeue to remove element from first
	// using remove at first function of deque
	void dequeue()
	{
		remove_first();
	}
};

// Driver Code
int main()
{
	// object of Stack
	Stack stk;

	// push 7 and 8 at top of stack
	stk.push(7);
	stk.push(8);
	cout << "Stack: ";
	stk.display();

	// pop an element
	stk.pop();
	cout << "Stack: ";
	stk.display();

	// object of Queue
	Queue que;

	// insert 12 and 13 in queue
	que.enqueue(12);
	que.enqueue(13);
	cout << "Queue: ";
	que.display();

	// delete an element from queue
	que.dequeue();
	cout << "Queue: ";
	que.display();

	cout << "Size of Stack is " << stk.size() << endl;
	cout << "Size of Queue is " << que.size() << endl;
	return 0;
}
```

### **References**

- https://www.geeksforgeeks.org/stack-data-structure/
- https://www.geeksforgeeks.org/design-a-stack-that-supports-getmin-in-o1-time-and-o1-extra-space/
- https://www.geeksforgeeks.org/queue-data-structure/

## Author

- [Tanushree](https://github.com/Tanushree-coder)
