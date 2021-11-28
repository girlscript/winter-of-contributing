# Circular Linked List

- Circular linked list is a linked list in which all nodes connect to make a circle. 
- NULL does not exist at the end. It can be both, a singly circular or doubly circular linked list. 
- It is used in structures that allow access to nodes in the centre of the list without starting at front of the linked list.

### Applications

- The Circular lists are the applications that can to repetitively move round the list. 
- One of the common examples of circularly linked list is multitasking. When multiple applications are running in a computer, in that case the operating system behaves as the task are in a circular lists and allocates CPU time slice to each one of them. 
- It allocates the CPU time to the task in the list for the time slice period and moves to the next. 
- In this way when the time allocation reaches to the last task, the task that is first in the list can be allocated the time next. This can continue till the tasks are executed completely. 
- The tasks that get executed can be deleted from the circular lists whereas the new task can be inserted in the circular list.

### Implementation

- To insert a node at the beginning, we traverse the whole list. 
- Even when the insertion takes place at the end, the whole list is traversed. 
- If the pointer is taken to the last node instead of the start pointer, there won’t be the need to traverse the whole list in both cases. 
- Therefore, irrespective of the list length, the insertion at the beginning or at the end requires a fixed time.

#### Code

```cpp
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

// Node list
struct node{
    int data;
    struct node *next;
};

// Declaring head and tail pointer
struct node *head = NULL;
struct node *tail = NULL;


void add(int data){
    //Creating new node
    struct node * newNode = (struct node *)malloc(sizeof(struct node));
    newNode->data = data;
    //Checking if the list is empty.
    if(head == NULL){
        head = newNode;
        tail = newNode;
        newNode->next = head;
    }else {
        //tail will point to new node.
        tail->next = newNode;
        //New node will become new tail.
        tail = newNode;
        //tail will point to head.
        tail->next = head;
    }
}

//it will display the nodes of circular linked list
void display(){
    struct node *current = head;
    if(head == NULL){
        printf("List is empty");
    }
    else{
        printf("Nodes of the circular linked list: \n");
         do{
             //showing each node by incrementing pointer.
            printf("%d ", current->data);
            current = current->next;
        }while(current != head);
        printf("\n");
    }
}

int main()
{
   //Adding data to the list
   add(1);
   add(2);
   add(3);
   add(4);
   //Displaying all the nodes in the list
   display();

   return 0;
}
```
#### Output

```
Nodes of the circular linked list: 
1 2 3 4 
```

## Happy Coding !!
