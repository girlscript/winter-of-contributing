
# Reverse a Linked List using Stack

* In stack we can insert/delete from one end that we call the top of stack.

## Algorithm

* Create an empty stack of type node pointer.

* One by one push all the node addresses to stack.

* One by one pop all the node addresses from stack and rearrange all its link in backward manner.

## Implementation

_C++ program to reverse a linked list using stack_

```cpp
#include<bits/stdc++.h>
using namespace std;
class Node {
	public:
	int data;
	Node* next;
};

//Function to push a new node on the front of the list
void Push(Node** head, int x) {
	Node* newNode = new Node();
	newNode->data = x;
	newNode->next = NULL;
	if(*head == NULL) {
		*head = newNode;
		return;
	}
	Node* temp = (*head);
	while(temp->next != NULL) {
		temp = temp->next;
	}
	temp->next = newNode;

}

//Function to print the elements
void Print(Node* head) {
	Node* temp = head;
	while(temp != NULL) {
		cout << temp->data << " " ;
		temp = temp->next;
	}
	cout << endl;
}

//Function to reverse the Linked List
void Reverse(Node** head) {
	if(*head == NULL) return ;
	stack<Node *> s;
	Node* temp = *head;
	while(temp->next != NULL) {
		s.push(temp);
		temp = temp->next;
	}
	*head = temp;
	while(!s.empty()) {
		temp->next = s.top();
		temp = temp->next;
		s.pop();
	}
	temp->next = NULL;

}

//Driver Code
int main() {
	Node* head = NULL;
	Push(&head, 2);
	Push(&head, 3);
	Push(&head, 4);
	Push(&head, 5);
	Print(head);
	Reverse(&head);
	Print(head);

	return 0;
}

```

 **Output**

      2 3 4 5
      5 4 3 2


## Time Complexity

O(n), as we are only iterating the linked list.
