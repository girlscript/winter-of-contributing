
# Reverse a Linked List using Recursion

## Algorithm

* We recursively iterate to each node in the list until we reach the last node and return the new head.

* The last node in this approach will become the new head of the list.

* On the return path, each node is going to append itself to the end of the partially reversed linked list.


## Implementaion

_C++ program to reverse a linked list using Recursion_

```cpp
#include<bits/stdc++.h>
using namespace std;
class Node {
	public:
	int data;
	Node* next;
};

Node* head;

// Function to reverse the Linked List
void Reverse(Node** p) {
	Node* temp = *p;
	if(temp->next == NULL) {
		head = temp;
		return  ;
	} 
	
	Reverse(&temp->next);
	Node* q = temp->next;
    q->next = temp;
    temp->next = NULL;
}

//Function to insert elements in Linked List
void Insert(int data) {
	Node* temp1 = new Node();
	temp1->data = data;
	temp1->next = NULL;
	Node* temp2 = head;
	if(head == NULL) {
		head = temp1;
		return ;
	}
	while(temp2->next != NULL) {
		temp2 = temp2->next;
	}
	temp2->next = temp1;
	
}

//Function to print the elements
void Print() {
	Node* temp = head;
	while(temp != NULL) {
		cout << temp->data << " ";
		temp = temp->next;
	}
	cout << endl;
}

//Driver Code
int main() {
	head = NULL;
	Insert(2);
	Insert(4);
	Insert(6);
	Insert(8);
	Print();
	Reverse(&head);
	Print();
	
	return 0;
}
```

**Output**

      2 4 6 8
      8 6 4 2 


**Time Complexity:** O(n)

**Space  Complexity:** O(1)