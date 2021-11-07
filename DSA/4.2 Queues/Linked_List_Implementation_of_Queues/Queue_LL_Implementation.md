
# Queue-Linked List Implementation




## Introduction:

In a Queue, we maintain two pointers, front and rear. The front points to the first element of queue and rear points to last element.

* While implementing queues using arrays:
      
      1. We cannot increase the size of array, if we have more elements to insert than the capacity of array.
      2. If we create a very large array, we will be wasting a lot of memory space.
* Therefore if we implement Queue using Linked list we can solve these problems, as in Linked list Nodes are created dynamically as an when required.


**enQueue() -** Insert an element at rear or tail of the Queue.

**deQueue() -** Remove an element from the head of the Queue.

**front() -** Returns the front element of the Queue. 

## Implementation:

 _C++ Program to Implement Queue using Linked List_


```cpp
#include<iostream>
using namespace std;
class Node {
	public:
		int data;
		Node* next;
};

Node* front = NULL;
Node* rear = NULL;

//To Enqueue an integer
 void Enqueue(int x) {
	Node* temp = new Node();
	temp->data = x;
	temp->next = NULL;
	
	if(front == NULL && rear == NULL) {
		front = rear = temp;
		return;
	}
	rear->next = temp;
	rear = temp;
}

//To Dequeue an integer
 void Dequeue() {
	Node* temp = front;
	if(front == NULL) {
		cout << "Queue is empty.\n";
		return;
	}
	else if(front == rear) {
		front = rear = NULL;
	}
	else {
		front = front->next;
	}
	delete temp;
}

//To return front element 
 int Front() {
	if(front == NULL) {
		cout << "Queue is empty.\n";
		return -1;
	}
	
	return front->data;
}

//Function to print the elements
 void Print() {
	Node* temp = front;
	while(temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	
	cout << endl;
	
}

int main() {
	/* Driver Code*/
	//Printing elements in Queue after each Enqueue or Dequeue
	Enqueue(1); Print();
	Enqueue(2); Print();
	Enqueue(3); Print();
	Dequeue(); Print();
	Enqueue(8); Print();
	cout << Front() << endl;
	Dequeue(); Print();
	Dequeue(); Print();
	Dequeue(); 
	Dequeue(); 
	
	return 0;
}
```

**Output:**

    1
    1 2
    1 2 3
    2 3
    2 3 8
    2
    3 8
    8
    Queue is empty.

**Time Complexity:**

Time Complexity of both operations Enqueue() and Dequeue() is O(1). 
