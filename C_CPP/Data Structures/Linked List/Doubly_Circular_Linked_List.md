# Doubly Circular Linked List
It is list which have properties of both doubly linked list and circular linked list within which two consecutive elements are linked by previous ( prev ) and next pointer and therefore the last node points to first node by next pointer and also the first node points to last node by the previous pointer and in this way the condition of circular linked list fullfill .
### Important Points :
-  In Circular doubly linked list any node doesn't contain NULL value and last node contains the address of the first node of the list .
-  Traversing in forward and backward is very easy.
-  It is the combination of circular linked list and doubly linked linked list .

Code For Insertion :
```cpp
#include <iostream>
using namespace std;
// constructing the node
struct Node
{
	int data;
	struct Node *next;
	struct Node *prev;
} ;

// Function to insert Node at the beginning
// of the List.

void insertAtHead(struct Node** head, int val)
{
	// Pointer points to last Node
	struct Node *last = (*head)->prev;

	struct Node* n = new Node;
	n->data = val; // Inserting the data

	// setting up previous and next of new node
	n->next = *head;
	n->prev = last;

	// Update next and previous pointers of head
	// and last.
	last->next = (*head)->prev = n;

	// Update head pointer
	*head = n;
}

void insertAfter(struct Node** head , int val , int pos)
{
	struct Node* new_node = new Node;
	new_node->data = val; // Inserting the data

	// Find node having same pos as given
	struct Node *temp = *head;
	while (temp->data != pos){
		temp = temp->next;
    }
	struct Node *next = temp->next;

	// insert new_node between temp and next.
	temp->next = new_node;
	new_node->prev = temp;
	new_node->next = next;
	next->prev = new_node;
}

void insertAtEnd(struct Node** head, int val)
{
	if (*head == NULL)
	{
		struct Node* n = new Node;
		n->data = val;
		n->next = n->prev = n;
		*head = n;
		return;
	}
  // Pointing the head previous to last node
	Node *last = (*head)->prev;

	struct Node* n = new Node;
	n->data = val;

	n->next = *head;

	// Make new node previous of head
	(*head)->prev = n;

	// Make last previous of new node
	n->prev = last;

	// Make new node next of old last
	last->next = n;
}

void display(struct Node* head)
{
	struct Node *temp = head;

	cout<<"traversing from head node \n");
	while (temp->next != head)
	{
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<temp->data<<" ";

	cout<<"traversing from last node \n");
	Node *last = head->prev;
	temp = last;
	while (temp->prev != last)
	{
		cout<<temp->data<<" ";
		temp = temp->prev;
	}
	cout<<temp->data<<" ";
}


int main()
{
	struct Node* head = NULL;

	insertAtEnd(&head, 2);

	insertAtHead(&head, 1);

	insertAtEnd(&head, 4);

	insertAtEnd(&head, 5);

	insertAfter(&head, 3, 2);

	cout<<" circular doubly linked list is : ");
	display(head);

	return 0;
}
```
Output :
```
Created circular doubly linked list is: 
Traversing from head node 
1 2 3 4 5
Traversing from last node 
5 4 3 2 1
```
Code For Deletion :
```cpp
#include <iostream>
using namespace std;

struct Node {
	int data;
	struct Node* next;
	struct Node* prev;
};

void insert(struct Node** head , int val)
{
	if (*head == NULL) {
		struct Node* n = new Node;
		n->data = val;
		n->next = n->prev = n;
		*head = n;
		return;
	}

    // Finding the last node by taking prev pointer of head node
	Node* end = (*head)->prev;

	struct Node* n = new Node;
	n->data = val;

	n->next = *head;

	// Make new node previous of head
	(*head)->prev = n;

	// Make end as previous of new node that we made
	n->prev = end;

	// Make new node as the next of old last node
	end->next = n;
}

void delete_Node(struct Node** head, int key)
{
	if (*head == NULL)
		return;

	struct Node *curr = *head, *prev_1 = NULL;
	while (curr->data != key) {
		// when node is not present in the list
		if (curr->next == *head) {
			cout<<"\nList doesn't have node with value = "<<key;
			return;
		}

		prev_1 = curr;
		curr = curr->next;
	}

	// Check if node is the only node in list
	if (curr->next == *head && prev_1 == NULL) {
		(*head) = NULL;
		free(curr);
		return;
	}

	// check if it is the first node
	if (curr == *head) {
		// Move prev_1 to last node
		prev_1 = (*head)->prev;

		// Move head ahead
		*head = (*head)->next;

		// Adjust the pointers of prev_1 and head node
		prev_1->next = *head;
		(*head)->prev = prev_1;
		free(curr);
	}

	// check if it is the last node
	else if (curr->next == *head) {
		prev_1->next = *head;
		(*head)->prev = prev_1;
		free(curr);
	}
	else {
		// create new pointer, points to next of curr node
		struct Node* temp = curr->next;

		prev_1->next = temp;
		temp->prev = prev_1;
		free(curr);
	}
}

void display(struct Node* head)
{
	struct Node* temp = head;

	while (temp->next != head) {
		cout<<temp->data<<" ";
		temp = temp->next;
	}
	cout<<temp->data<<" ";
}

int main()
{
	struct Node* head = NULL;

	insert(&head, 1);
	insert(&head, 2);
	insert(&head, 3);
	insert(&head, 4);
	insert(&head, 5);

	cout<<"Before Deletion: ";
	display(head);
    
	deleteNode(&head, 5);
	cout<< "After Deleting 5 list is: ";
	display(head);

	deleteNode(&head, 3);
	cout<< "After Deleting 3 list is: ";
	display(head);

	deleteNode(&head, 1);
	cout<<"After Deleting 1 list is: ";
	display(head);
	
	deleteNode(&head, 2);
	cout<<"After Deleting 2 list is: ";
	display(head);

	return 0;
}
```
Output :
```
Before Deletion: 1 2 3 4 5 
After Deleting 5: 1 2 3 4
After Deleting 3: 1 2 4
After Deleting 1: 2 4 
After Deleting 2: 4 
```

## Applications 
- Can be used for managing the songs playlists .
- Can be used for managing the shopping cart on e-commerce websites .
- Used in multi-player games like jitter-butter .
- Useful in implementation of queue .
- Can be used when list of objects in a 3D game/video needs to be rendered for displaying it to the screen.

## Advantages
1. List can be traversed in both directions as we can see in above code output .
2. Going from head to tail and tail to head can be done in constant time complexity .
3. The important one that it is used to implement advance data structure Fabonacci Heap .

## Disadvantages 
1. Data should be handled carefully beacuse of involment of many pointers so there is chance of getting data lost , so be aware .
2. It takes slightly more space for accomodation of previous pointer .
