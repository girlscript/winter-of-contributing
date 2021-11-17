# Reverse a Linked List using Recursion

A linked list is a data structure that will give us dynamic list and use the memory more efficiently.

## Algorithm

* We will recursively traverse the whole list until we reach the last node.

* The last node will become the new head of the list.

* On the return path, reverse the links of each node.

![alt text](https://favtutor.com/resources/images/uploads/mceu_39104816011623079568907.png)

![alt text](https://favtutor.com/resources/images/uploads/mceu_15051479421623079589999.png)


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

Node* head;            //pointer to head node - global variable

// Function to reverse the Linked List
void Reverse(Node** p) {
	Node* temp = *p;
	//Change the head pointer when temp points to last node
	if(temp->next == NULL) {
		head = temp;
		return  ;
	} 
	//Make a recursive call till last node
	Reverse(&temp->next);
	//Reverse the links and put the first element at the last
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
