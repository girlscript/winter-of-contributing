# Reversing the Queue 

**QUEUE** - A linear data structure which stores and retrieves data in the **First In First out(FIFO)** order.
        
	
*Queue Operations:*
1. *Enqueue* - To add elements in the queue.
2. *Dequeue* - To delete elements from the queue.
3. *Queue Front* - Gives the front element of the queue.
4. *Empty* - To check whether the queue is empty or not.

To perform the reversing of a queue ,we first stored it in a stack and then re-inserted it in the queue.


**The code for this is given below :**
```
// Header Files


#include<bits/stdc++.h>
using namespace std;


// Function for reversing the Queue

void reverseQueue(queue<int>& q)
{
	stack<int> s;
	while (!q.empty()) {
		s.push(q.front());
		q.pop();
	}
	while (!s.empty()) {
		q.push(s.top());
		s.pop();
	}
}


// Printing the Queue

void printQueue(queue<int>& q)
{
	while (!q.empty()) {
		cout << q.front() << " ";
		q.pop();
	}
}


// Main Function

int main()
{
	queue<int> q;
	q.push(11);
	q.push(12);
	q.push(13);
	q.push(14);
	q.push(15);

	reverseQueue(q);
	printQueue(q);
}
```

### OUTPUT 
```
15 14 13 12 11

```
