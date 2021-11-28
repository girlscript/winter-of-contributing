**Singly Linked List**

- A linked list is a linear data structure.
- A node can contain data of any type (including other structs) and a pointer to the next node.
- A singly linked list is unidirectional (it can be traversed in only one direction ).
- The head is a pointer that points to the first node of the linked list.

**Basic operations that can be performed on a single linked list :**

- InsertFirst − add an element at the beginning of the list.
- DeleteFirst − delete an element at the beginning of the list.
- InsertLast - add an element at the end of the list.
- DeleteLast − delete an element from the end of the list.
- A linked list is a collection of self-referential structures(nodes).
- InsertAfter − add an element after an item of the list.
- Traverse − Traverse and display the complete list in a forwarding manner.
- Search − search an element using a given key or data item.
- Delete − delete an element using a given key, data item, or position.
- Sort - to arrange nodes in a particular order

**Advantages:**

- They are dynamic in nature.
- Linked List reduces the access time.
- Insertion and deletion of nodes can be implemented easily. Insertion and deletion of elements don’t require the shifting of all the elements when compared to an array.
- Use to implement stacks, queues, etc.

**Disadvantages:**

- Pointers require extra memory for storage.
- Nodes can be accessed sequentially(elements cannot be accessed randomly).

**Code for insertion, deletion, and Traversal of nodes in a singly linked list :**

```c
#include <stdio.h> //preprocessor directive
#include <stdlib.h> //preprocessor directive

struct node
{
	    int data; //variable to store current's node data
	    struct node *next; //variable to store the address of the next node
};
void insert(struct node **h, int pos, int data); //insertion of nodes
void deletion(struct node **h, int pos);         //Deletion of nodes
void display(struct node *h);                    //Traversal of the list
int main()
{
    struct node *head = NULL;
    int choice = 0;
    int position;
    int data;

    while (choice != 4) //while loop begins
    {

        puts("Enter choice");
        puts("1 - Insertion\n2 - Display\n3 - Deletion\n4 - exit"); //Displaying the options
        scanf("%d", &choice);
        switch (choice)
        {
        case 1: //insertion of nodes
            puts("Enter the position for insertion of node :");
            scanf("%d", &position);
            puts("Enter the data to be stored in the node :");
            scanf("%d", &data);
            insert(&head, position, data); //call to insert function 
            break;
        case 2: //Traversal of the list
            puts("Displaying the entire list");
            display(head); //call to display function
            break;
        case 3: //Deletion of nodes
            puts("Enter the position for deletion of node :");
            scanf("%d", &position);
            deletion(&head, position); //call to deletion function
            break;
        case 4: //termination of the program
            puts("_____________________________ Program terminated ___________________________________");
            break;
        default:
            puts("Invalid choice");
            break;
        }
    } //while loop ends
    return 0;
}
void insert(struct node **h, int pos, int data) //insertion of nodes
{
    struct node *cur, *tmp;
    cur = (struct node *)malloc(sizeof(struct node)); //creation of the current node
    cur->data = data;
    cur->next = NULL; //the address for the next node is set to NULL initially

    if (*h == NULL) //if no nodes are present
    {
        *h = cur;
    }
    else if (pos == 0) //to insert node in the beginning
    {
        cur->next = *h; //The current node stores the address of head
        *h = cur; //now we make head point to current
    }
    else //To insert node at any given position
    {
        int i = 0;
        tmp = *h;
        while ((i < pos - 1) && (tmp->next != NULL))
        {
            ++i;
            tmp = tmp->next; //jumping on the next nodes until desired node is reached
        }
        cur->next = tmp->next;
        tmp->next = cur;
    }
}
void deletion(struct node **h, int pos) //Deletion of nodes
{
    if (*h == NULL) //if no nodes are present
    {
        puts("The list is empty"); //output
    }
    else
    {
        struct node *prv, *ptr;
        ptr = *h; 
        prv = *h;
        int i = 0;
        while ((i < pos) && (ptr->next != NULL))
        {
            ++i;
            prv = ptr;
            ptr = ptr->next; //jumping on the next nodes until desired node is reached
        }
        if ((*h)->next == NULL) //when only one node is present
        {
            free(ptr); //delete that one node
            *h = NULL; //set head to NULL
        }
        else if (pos == 0) //delete first node
        {
            *h = ptr->next; //head points to the next node
            free(ptr); //delete the first node
        }
        else //delete node at a given index
        {
            prv->next = ptr->next;
            free(ptr); //delete node
        }
    }
}
void display(struct node *h) //Traversal of the list
{
    struct node *tmp = h;
    int i = 0;
    if (h == NULL) //if no nodes are present
    {
        puts("The list is empty");
    }
    else
    {
        while (tmp != NULL)
        {
            printf("Data at node%d = %d\n", i + 1, tmp->data); //displaying the data of the current node
            tmp = tmp->next;                                   //moving to the next node
            ++i;
        }
    }
}
```

**Output:**

```c
Enter choice
1 - Insertion
2 - Display  
3 - Deletion 
4 - exit     
2
Displaying the entire list
The list is empty
Enter choice
1 - Insertion
2 - Display
3 - Deletion
4 - exit
1
Enter the position for insertion of node :
1
Enter the data to be stored in the node :
1
Enter choice
1 - Insertion
2 - Display
3 - Deletion
4 - exit
2
Displaying the entire list
Data at node1 = 1
Enter choice
1 - Insertion
2 - Display
3 - Deletion
4 - exit
1
Enter the position for insertion of node :
5
Enter the data to be stored in the node :
5
Enter choice
1 - Insertion
2 - Display
3 - Deletion
4 - exit
2
Displaying the entire list
Data at node1 = 1
Data at node2 = 5
Enter choice
1 - Insertion
2 - Display
3 - Deletion
4 - exit
1
Enter the position for insertion of node :
1
Enter the data to be stored in the node :
2
Enter choice
1 - Insertion
2 - Display
3 - Deletion
4 - exit
2
Displaying the entire list
Data at node1 = 1
Data at node2 = 2
Data at node3 = 5
Enter choice
1 - Insertion
2 - Display
3 - Deletion
4 - exit
1
Enter the position for insertion of node :
0
Enter the data to be stored in the node :
98
Enter choice
1 - Insertion
2 - Display
3 - Deletion
4 - exit
2
Displaying the entire list
Data at node1 = 98
Data at node2 = 1
Data at node3 = 2
Data at node4 = 5
Enter choice
1 - Insertion
2 - Display
3 - Deletion
4 - exit
3
Enter the position for deletion of node :
7
Enter choice
1 - Insertion
2 - Display
3 - Deletion
4 - exit
2
Displaying the entire list
Data at node1 = 98
Data at node2 = 1
Data at node3 = 2
Enter choice
1 - Insertion
2 - Display
3 - Deletion
4 - exit
3
Enter the position for deletion of node :
0
Enter choice
1 - Insertion
2 - Display
3 - Deletion
4 - exit
2
Displaying the entire list
Data at node1 = 1
Data at node2 = 2
Enter choice
1 - Insertion
2 - Display
3 - Deletion
4 - exit
3
Enter the position for deletion of node :
2
Enter choice
1 - Insertion
2 - Display
3 - Deletion
4 - exit
2
Displaying the entire list
Data at node1 = 1
Enter choice
1 - Insertion
2 - Display
3 - Deletion
4 - exit
3
Enter the position for deletion of node :
0
Enter choice
1 - Insertion
2 - Display
3 - Deletion
4 - exit
2
Displaying the entire list
The list is empty
Enter choice
1 - Insertion
2 - Display
3 - Deletion
4 - exit
4
_____________________________ Program terminated ___________________________________
```
