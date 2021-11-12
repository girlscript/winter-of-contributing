# Detect Loop in Singly Linked List
## Method - 1 Using Floyd Algorithm
```c
Algorithm
1. Create two pointers slow and fast initialised from Head
2. Iterate both pointers over the Linked List until any of them reaches NULL
3. Slow will move slowly (slow->next) and fast will move fastly (fast->next->next) means fast will skip one node in between
4. if at any point fast and slow pointer bacomes equal then Loop is present otherwise not present
```

### Code for Floyd Algorithm in C
```c
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
} SLL;

// initialised head pointer
SLL *head = NULL;

// functions declaration
SLL *createList();
int floydAlgorithm(SLL *head);

// main function
int main()
{
    // creating list
	head = createList();

    // head->next->next->next->next = head;     // creating loop for testing

	if(floydAlgorithm(head)) printf("Loop Found in the List\n");
	else printf("Loop Not Found in the List\n");

	return 0;
}

int floydAlgorithm(SLL *head)
{
    // creating two pointers slow and fast innitialised with head
	SLL *slow = head;
	SLL *fast = head;

    // iterating slow and fast pointers over the list until fast, slow or fast->next reaches NULL
	while(slow != NULL && fast != NULL && fast->next != NULL)
	{
        // incrementing slow and fast pointers
		slow = slow->next;
		fast = fast->next->next;

        // if slow and fast becomes equal then return true means loop is present
		if(slow == fast)
			return 1;
	}
	return 0;
}

SLL *createList()
{
	int n = 15;
	for(int i=0; i<n; i++)
	{
		if(head == NULL)
		{
			head = (SLL*) malloc(sizeof(SLL*));
			head->data = i+1;
			head->next = NULL;
		}
		else
		{
			SLL *node = (SLL*) malloc(sizeof(SLL*));
			node->data = i+1;
			node->next = head;
			head = node;
		}
	}
	return head;
}
```

## Method - 2 Using a variable in structure of List
```c
Algorithm
1. Add a 'visited' variable in the struct of List with initial value 0 (states that node is neither visited)
2. Iterate through the list and check visited variable
3. If that is 1 means Loop is present otherwise make visited variable = 1 and continue iterating
```

### Code for Loop detection in C
```c
#include <stdio.h>
#include <stdlib.h>

typedef struct node{
	int data;
	struct node *next;
    int visited;
} SLL;

// initialised head pointer
SLL *head = NULL;

// functions declaration
SLL *createList();
int checkForCycles(SLL *head);

// main function
int main()
{
    // creating list
	head = createList();

    // head->next->next->next->next = head;     // creating loop for testing

	if(checkForCycles(head)) printf("Loop Found in the List\n");
	else printf("Loop Not Found in the List\n");

	return 0;
}

int checkForCycles(SLL *head)
{
	SLL *temp = head;

    // iterating through list
	while(temp != NULL)
	{
        // if visited = 1 then return 1 stating that loop is present
		if(temp->visited == 1)
		{
			return 1;
		}

        // making visited variable 1 after iterating through the node
		temp->visited = 1;
		temp = temp->next;
	}
	return 0;
}

SLL *createList()
{
	int n = 15;
	for(int i=0; i<n; i++)
	{
		if(head == NULL)
		{
			head = (SLL*) malloc(sizeof(SLL*));
			head->data = i+1;
			head->next = NULL;
            head->visited = 0;
		}
		else
		{
			SLL *node = (SLL*) malloc(sizeof(SLL*));
			node->data = i+1;
			node->next = head;
            node->visited = 0;
			head = node;
		}
	}
	return head;
}
```
