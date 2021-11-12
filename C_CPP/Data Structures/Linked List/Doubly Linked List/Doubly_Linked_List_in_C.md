# Doubly Linked List

- A Linear Data Structure similar to singly Linked List or normal linked list.
- It contains an extra previous pointer which keeps record of previous node.
- It is bidirectional means it can be traversed in both directions either forward or backward.

### Advantages
- Dynamic nature means they can expand or shrink their size accordingly.
- Deletion is easier as compared to singly Linked List in case when a given pointer points to the node itself (node to be deleted).
- insertion before a node is also easier as compared to Singly Linked List.

### Disadvantages
- Previous pointer requires extra space for storing address of previous node.
- Nodes cannot be accessed directly iteration is the only method to access.
- Complex operations as compared to Singly Linked List because in any operation previous pointer also needed to be taken care.

### Insertion
- **When List is Empty**<br>
***Algorithm***
```c
Create a new node
Store data in that new node
Make next and prev pointers as NULL
Make this new node as head node
```

- **When List is not Empty**<br>
***Algorithm***
```c
Create a new node
Store data in that new node
As we are inserting in beginning make prev pointer as NULL
Create Link from newNode to head node
Create backward Link from head pointer to newNode
Make this newNode as head node
```

### Deletion
- **When only one node is present**<br>
***Algorithm***
```c
Free the space of head node
Make head pointer NULL
```

- **When node is present in middle of the List**<br>
***Algorithm***
```c
Create two pointers one is rear and another is forward
Make the Forward and Backward Link between rear and forward nodes
Free the space of that node
```

- **When first node is to be deleted**<br>
***Algorithm***
```c
Make head = pointer to second node
Make prev pointer of new head NULL
Free the space of earlier head node
```

- **When Last node is to be deleted**<br>
***Algorithm***
```c
Make next pointer of its previous node as NULL
Free the space of the node
```

### Code for inserting, deleting and printing (traversing) a Doubly Linked List
```c
#include <stdio.h>
#include <stdlib.h>

// structure of Doubly Linked List (DLL)
typedef struct node
{
    int data;
    struct node *prev;
    struct node *next;
} DLL;

// initialising head pointer
DLL *head;

void insert(int val)
{
    // Allocating space and storing val top new Node
    DLL *newNode = (DLL*)malloc(sizeof(DLL*));
    newNode->data = val;

    // first node case
    if(head == NULL)
    {
        newNode->next = NULL;
        newNode->prev = NULL;
        head = newNode;
    }
    // inserting in the beginning
    else
    {
        newNode->prev = NULL;
        newNode->next = head;
        
        // creating Link between earlier first node and new node (new first node)
        head->prev = newNode;
        
        // making newNode as head node
        head = newNode;
    }
}

void deleteNode(int val)
{
    DLL *temp = head;
    // iterating through the List
    while(temp != NULL)
    {
        // Finding the element
        if(temp->data == val)
        {
            // only one node is present
            if(temp->prev == NULL && temp->next == NULL)
            {
                head = NULL;
                free(temp);
                return;
            }
            // node is present in middle of the List
            if(temp->prev != NULL && temp->next != NULL)
            {
                DLL *rear = temp->prev;
                DLL *forward = temp->next;
                rear->next = forward;
                forward->prev = rear;
                free(temp);
                return;
            }
            // First node
            if(temp->prev == NULL)
            {
                head = temp->next;
                head->prev = NULL;
                free(temp);
                return;
            }
            // Last node
            if(temp->next == NULL)
            {
                temp->prev->next = NULL;
                free(temp);
                return;
            }
        }
        temp = temp->next;
    }
}

// printing List
void printList()
{
    DLL *temp = head;
    while(temp->next != NULL)
    {
        printf("%d->",temp->data);
        temp = temp->next;
    }
    printf("%d\n",temp->data);
}


int main()
{
    // creating List
    insert(10);
    insert(9);
    insert(8);
    insert(7);
    insert(6);
    insert(5);
    insert(4);
    insert(3);
    insert(2);
    insert(1);

    printf("Original List\n");
    printList();

    // case when node to be deleted is in the middle
    deleteNode(5);
    printf("\nList after deleting 5\n");
    printList();

    // case when first node is to be deleted
    deleteNode(1);
    printf("\nList after deleting 1\n");
    printList();
    
    // case when last ndoe is to be deleted
    deleteNode(10);
    printf("\nList after deleting 10\n");
    printList();
    return 0;
}
```
### Output from the above C Code
```
Original List
1->2->3->4->5->6->7->8->9->10

List after deleting 5
1->2->3->4->6->7->8->9->10

List after deleting 1
2->3->4->6->7->8->9->10

List after deleting 10
2->3->4->6->7->8->9
```

