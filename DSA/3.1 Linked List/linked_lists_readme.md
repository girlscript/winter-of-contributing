
# Linked Lists in DSA

This readme file summarizes the significance of Linked Lists in Data Structure and Algorithms.
This file consists of various sections including tutorials in form of codes and snippets.

* Introduction to Linked Lists
* Benefits of Linked Lists over arrays
* Self-Referential structures in C
* Creation and Traversal of a linked list in C
* Insertion of a node in various scenarios
* Deletion of a node in various cases
* Insertion and Traversal in Circular Linked Lists
* Doubly Linked Lists


# Introduction to Linked Lists
A Linked List is a linear data structure,in which non-contiguous memory allocation takes place.
Each element in a linked list is known as a node. These elements or **nodes** are linked using pointers as shown below:
 
 ![image](https://drive.google.com/uc?id=1C5X9QXPL6zchl4t79L-Ox1hHGv40duzb)

A node has atleast 2 data fields present. The first field which is called as **'data'** consists of the value which we wish to store and the second field ; also known as **'next'** consists of address of the next node.

# Benefits of Linked Lists over Arrays
In a Linked List,there are no indices(index) like Arrays.
* Memory is allocated dynamically in a Linked List unlike Arrays. We can allocate memory while programming and this ensure use of memory with precision.
* Insertion and Deletion of elements is easy in linked lists.
* Non-Contigous allocation of memory.

However,we cannot access any node in a Linked List randomly ; we have to start from first and then traverse to the next nodes.

# Self-Referential structures in C
In order to define our own data type (a *node* in this case)
we can use the concept of **"structures"**.

A **structure** is a user defined data type , which is formed using the keyword **'struct'**.

Here is a code snippet to demonstrate how a node can be formed using structure:
```
struct Node{
    int data;
    struct Node * next; //self-referencing structure 
};
```
## Review on Pointers:
Pointers are special variables which stores the address of variable. A pointer points to a particular address.

**Syntax:** ``` datatype * ptr_name;```

# Creation and Traversal of a linked list in C 
We will now move on to creation of a Linked list in C and how to traverse through the linked list.
Refer the following points before going through the snippet of code.

* An element in a linked list is a **struct Node**. It is made to hold integer data and a pointer of data type struct Node *, as it has to point to another struct Node. 
* We’ll create the below illustrated linked list.
![image](https://drive.google.com/uc?id=1o5YzVb-_fpEfR4Vr0catQFlhLLUVgr21)
* Firstly,we will create individual nodes and link them to the next node using the arrow operator ‘→’.
* Then, we’ll define a structure Node and create two of its members, an int variable data, to store the current node's value and a struct node * pointer variable next. 
* Now, we can move on to our main() and start creating these nodes. We’ll name the first node, head. Define a pointer to head node by struct node* head. And similarly for the other nodes. Request the memory location for each of these nodes from heap via malloc using the below snippet.
  
  ```struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));```
* Link these nodes using the arrow operator and call the traversal function.
* Create a void function LinkedListTraversal and pass into it the pointer to the head node.
* Run a while loop while the pointer doesn’t point to a NULL. And keep changing the pointer next each time you are done printing the data of the current node.
 *Refer the code snippet below to understand things better*
 ```
#include<stdio.h>
#include<stdlib.h>

struct Node{  //defining  a structure
    int data;
    struct Node * next;
}; //semicolon is important

void LinkedListTraversal(struct Node * ptr){
    while (ptr !=NULL)
    {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
}
int main(){
   struct Node * head;  //Creating a Head node
   struct Node * second; //Creating second node
   struct Node * third; //creating a third node
   struct Node * fourth; //creating a fourth node
   head = (struct Node *) malloc(sizeof(struct Node)); //allocating memory dynamically in heap
   second = (struct Node *) malloc(sizeof(struct Node));
   third = (struct Node *) malloc(sizeof(struct Node));
   fourth = (struct Node *) malloc(sizeof(struct Node));

   //Linking the first and second nodes
   head ->data = 7;
   head ->next = second;

   //Linking the second and third node
   second ->data = 11;
   second ->next = third;

   //Linking the third and fourth node
   third ->data =  41;
   third ->next = fourth;
   
   //Terminate the linked list at third node
   fourth ->data = 66;
   fourth ->next = NULL;
   
   LinkedListTraversal(head);
   return 0;
}
```
**The output comes out as:**
```
Element: 7
Element: 11
Element: 41
Element: 66
```
# Insertion of a Node in various cases

Following points have to be kept in mind while inserting a node:
* A void has to be made to insert an element.
* Creating a void causes the rest of the elements to shift to their adjacent right.
* Time complexity: O(no. of elements shifted)
  
  Time complexity should also be considered while inserting a node.

There are 4 possibilities which can take place while insertion of a node:
* Insertion in the beginning
* Insertion in between 
* Insertion at the end
* Insertion after a given node

We would first create a new node for insertion in any of the above 4 cases. In the next step,we overwrite the current connection and make new connections. And that is how we insert a new node at our desired place.

## Case 1: Insertion at the beginning

In order to insert the new node at the beginning, we would need to have the head pointer pointing to this new node and the new node’s pointer to the current head.
![image](https://drive.google.com/uc?id=1mZy5WFvZzNrULlGIIon4hMELXZSLypDB)
 **Steps for Insertion at the beginning:**
* Create a struct Node* function InsertAtFirst which will return the pointer to the new head.
* We’ll pass the current head pointer and the data to insert at the beginning, in the function.
* Create a new struct Node* pointer ptr, and assign it a new memory location in the heap.
* Assign head to the next member of the ptr structure using ptr-> next = head, and the given data to its data member.
* Return this pointer ptr.
*Refer the tutorial below:*
```
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next; //self-referencing structure 
};

void LinkedListTraversal(struct Node * ptr){
    while (ptr !=NULL)
    {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
} 

//function to insert at the beginning
struct Node * InsertAtFirst(struct Node * head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr ->next = head; 
    ptr ->data = data;
    return ptr;
}
    
int main(){
    struct Node * head;  //Creating a Head node
   struct Node * second; //Creating second node
   struct Node * third; //creating a third node
   struct Node * fourth; //creating a fourth node
   head = (struct Node *) malloc(sizeof(struct Node)); //allocating memory dynamically in heap
   second = (struct Node *) malloc(sizeof(struct Node));
   third = (struct Node *) malloc(sizeof(struct Node));
   fourth = (struct Node *) malloc(sizeof(struct Node));

   //Linking the first and second nodes
   head ->data = 7;
   head ->next = second;

   //Linking the second and third node
   second ->data = 11;
   second ->next = third;

   //Linking the third and fourth node
   third ->data =  41;
   third ->next = fourth;
   
   //Terminate the linked list at fourth node
   fourth ->data = 66;
   fourth ->next = NULL;
   
   printf("Linked List before insertion at the beginning\n");
   LinkedListTraversal(head);
   head = InsertAtFirst(head, 98);
   
   printf("\nLinked List after insertion at the beginning\n");
   LinkedListTraversal(head);
    return 0;
}

```
*The output comes as*
```
Linked List before insertion at the beginning
Element: 7
Element: 11
Element: 41
Element: 66

Linked List after insertion at the beginning
Element: 98
Element: 7
Element: 11
Element: 41
Element: 66
```
## Case 2: Insertion in between

Assuming index starts from 0, we can insert an element at index i>0 as follows:

Bring a temporary pointer p pointing to the node before the element you want to insert in the linked list.
![image](https://drive.google.com/uc?id=1iSjjEO9_sTueBdqy7Da8eCvcAaMqzB07)
**Steps for Insertion in between:**
* Create a struct Node* function insertAtIndex which will return the pointer to the head.
* We’ll pass the current head pointer and the data to insert and the index where it will get inserted, in the function.
* Create a new struct Node* pointer ptr, and assign it a new memory location in the heap.
* Create a new struct Node* pointer pointing to head, and run a loop until this pointer reaches the index, where we are inserting a new node.
* Assign p->next to the next member of the ptr structure using ptr-> next = p->next, and the given data to its data member.
* Break the connection between p and p->next by assigning p->next the new pointer. That is, p->next = ptr.
* Return head.

*Refer the tutorial below:*
```
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next; //self-referencing structure 
};

void LinkedListTraversal(struct Node * ptr){
    while (ptr !=NULL)
    {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
} 

//function to insert at a particular index
struct Node * InsertAtIndex(struct Node * head, int data, int index){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node)); //allocating memory dynamically
    struct Node * p = head; //initialising a pointer p from head
    int i = 0;
    
    while(i != index-1)
    {
        p = p ->next;
        i++;
    }
    ptr ->data = data;
    ptr ->next = p ->next;
    p ->next = ptr;
    return head;
}
    
int main(){
    struct Node * head;  //Creating a Head node
   struct Node * second; //Creating second node
   struct Node * third; //creating a third node
   struct Node * fourth; //creating a fourth node
   head = (struct Node *) malloc(sizeof(struct Node)); //allocating memory dynamically in heap
   second = (struct Node *) malloc(sizeof(struct Node));
   third = (struct Node *) malloc(sizeof(struct Node));
   fourth = (struct Node *) malloc(sizeof(struct Node));

   //Linking the first and second nodes
   head ->data = 7;
   head ->next = second;

   //Linking the second and third node
   second ->data = 11;
   second ->next = third;

   //Linking the third and fourth node
   third ->data =  64;
   third ->next = fourth;
   
   //Terminate the linked list at fourth node
   fourth ->data = 57;
   fourth ->next = NULL;
   
   printf("Linked List before insertion at an Index\n");
   LinkedListTraversal(head);
   head = InsertAtIndex(head, 54, 1);
   
   printf("\nLinked List after insertion at an Index\n");
   LinkedListTraversal(head);
    return 0;
}
```
*The output comes as:*
```
Linked List before insertion at an Index
Element: 7
Element: 11
Element: 64
Element: 57

Linked List after insertion at an Index
Element: 7
Element: 54
Element: 11
Element: 64
Element: 57
```
## Case 3: Insertion at the end

In order to insert an element at the end of the linked list, we bring a temporary pointer to the last element.
![image](https://drive.google.com/uc?id=1LtQnGO04EYpli-b0gxooe_9p4BJCJIJ5)
**Steps for Insertion at end:**
* Inserting at the end is very similar to inserting at any index. The difference holds in the limit of the while loop. Here we run a loop until the pointer reaches the end and points to NULL.
* Assign NULL to the next member of the new ptr structure using ptr-> next = NULL, and the given data to its data member.
* Break the connection between p and NULL by assigning p->next the new pointer. That is, p->next = ptr.
* Return head.

*Refer the tutorial below:*
```
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next; //self-referencing structure 
};

void LinkedListTraversal(struct Node * ptr){
    while (ptr !=NULL)
    {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
} 

//function to insert at the end
struct Node * InsertAtEnd(struct Node * head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node)); //allocating memory dynamically
    ptr ->data = data;
    struct Node * p = head;
    
    while(p ->next != NULL){
        p = p ->next;
    }
    p ->next=ptr;
    ptr ->next = NULL;
    return head;
}   
    
int main(){
    struct Node * head;  //Creating a Head node
   struct Node * second; //Creating second node
   struct Node * third; //creating a third node
   struct Node * fourth; //creating a fourth node
   head = (struct Node *) malloc(sizeof(struct Node)); //allocating memory dynamically in heap
   second = (struct Node *) malloc(sizeof(struct Node));
   third = (struct Node *) malloc(sizeof(struct Node));
   fourth = (struct Node *) malloc(sizeof(struct Node));

   //Linking the first and second nodes
   head ->data = 7;
   head ->next = second;

   //Linking the second and third node
   second ->data = 11;
   second ->next = third;

   //Linking the third and fourth node
   third ->data =  64;
   third ->next = fourth;
   
   //Terminate the linked list at fourth node
   fourth ->data = 57;
   fourth ->next = NULL;
   
   printf("Linked List before insertion at the end\n");
   LinkedListTraversal(head);
   head = InsertAtEnd(head, 76);
   
   printf("\nLinked List after insertion at the end\n");
   LinkedListTraversal(head);
   return 0;
}

```
*The output comes as:*
```
Linked List before insertion at the end
Element: 7
Element: 11
Element: 64
Element: 57

Linked List after insertion at the end
Element: 7
Element: 11
Element: 64
Element: 57
Element: 76
```

## Case 4: Insertion after a given node

Similar to the other cases, ptr can be inserted after a node as follows:
```
ptr->next = prevNode-> next;

prevNode-> next = ptr;
```
![image](https://drive.google.com/uc?id=1fxHeZbqmKn9HJuPNFyVIK8YSA00OACoW)

**Steps for Insertion after a given node:**
* Here, we already have a struct Node* pointer to insert the new node just next to it.
* Create a struct Node* function insertAfterNode which will return the pointer to the head.
* Pass into this function, the head node, the previous node, and the data.
* Create a new struct Node* pointer ptr, and assign it a new memory location in the heap.
* Since we already have a struct Node* prevNode given as a parameter, use it as p we had in the previous functions.
* Assign prevNode->next to the next member of the ptr structure using ptr-> next = prevNode->next, and the given data to its data member.
* Break the connection between prevNode and prevNode->next by assigning prevNode->next the new pointer. That is, prevNode->next = ptr.
* Return head.

*Refer the tutorial below:*
```
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int data;
    struct Node * next; //self-referencing structure 
};

void LinkedListTraversal(struct Node * ptr){
    while (ptr !=NULL)
    {
    printf("Element: %d\n", ptr->data);
    ptr = ptr->next;
    }
} 

//function to insert after a Node
struct Node * InsertAfterNode(struct Node * head, struct Node * prevNode, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr ->data = data;
    ptr ->next = prevNode ->next;
    prevNode ->next = ptr;
    return head;
}
    
int main(){
    struct Node * head;  //Creating a Head node
   struct Node * second; //Creating second node
   struct Node * third; //creating a third node
   struct Node * fourth; //creating a fourth node
   head = (struct Node *) malloc(sizeof(struct Node)); //allocating memory dynamically in heap
   second = (struct Node *) malloc(sizeof(struct Node));
   third = (struct Node *) malloc(sizeof(struct Node));
   fourth = (struct Node *) malloc(sizeof(struct Node));

   //Linking the first and second nodes
   head ->data = 7;
   head ->next = second;

   //Linking the second and third node
   second ->data = 11;
   second ->next = third;

   //Linking the third and fourth node
   third ->data =  64;
   third ->next = fourth;
   
   //Terminate the linked list at fourth node
   fourth ->data = 57;
   fourth ->next = NULL;
   
   printf("Linked List before insertion after a given node\n");
   LinkedListTraversal(head);
   
   head = InsertAfterNode(head, third, 46);
   
   printf("\nLinked List after insertion after a given node\n");
   LinkedListTraversal(head);
    return 0;
}
```
*The output comes as:*
```
Linked List before insertion after a given node
Element: 7
Element: 11
Element: 64
Element: 57

Linked List after insertion after a given node
Element: 7
Element: 11
Element: 64
Element: 46
Element: 57
```

# Deletion of a Node in various cases
The deletion process in the process draws some similarities to the insertion process.

Consider the Linked List given below:
![image](https://drive.google.com/uc?id=1MnafzVci7bS4JZcDCXSiasuhBwJRGBi6)

Deletion in a Linked List can have the following 4 possibilities:
* Deletion in the beginning
* Deletion of node at an index 
* Deletion at the end
* Deletion the first node at a given value

Following steps are to be followed while deleting a node from a Linked List for any of the given cases:
* Find the previous node of the node to be deleted. 
* Change the next of the previous node. 
* Free memory for the node to be deleted.

**Syntax for freeing a node:**  
``` free(ptr); ```

## Case 1: Deletion at the beginning
In order to delete the node at the beginning, we would need to have the head pointer pointing to the node second to the head node, that is, head-> next. And we would simply free(deallocate the memory) the node that’s left.

*Refer the picture below*
![image](https://drive.google.com/uc?id=1L0Q1IPAVdWbAcd3GXWcF_utkF7cn6P9W)

**Steps For Deletion at the beginning:**
* Create a struct Node* function deleteFirst which will return the pointer to the new head after deleting the current head.
* We’ll pass the current head pointer in the function.
* Create a new struct Node* pointer ptr, and make it point to the current head.
* Assign head to the next member of the list, by head = head->next, because this is going to be the new head of the linked list.
* Free the pointer ptr. And return the head.
 *Refer the code snippet given below:*
 ```
 // Case 1: Deleting the first element from the linked list
struct Node * deleteFirst(struct Node * head){
    struct Node * ptr = head;
    head = head->next;
    free(ptr);
    return head;
}
```
## Case 2: Deletion of node at an index 

Assuming index starts from 0, we can delete an element from index i>0 as follows:

* Bring a temporary pointer p pointing to the node before the element you want to delete in the linked list.
* Since we want to delete between 2 and 8, we bring pointer p to 2.
* Assuming ptr points at the element we want to delete.
* We make pointer p point to the next node after pointer ptr skipping ptr.
* We can now free the pointer skipped.

Refer the image below for a better understanding:
![image](https://drive.google.com/uc?id=14xzVXUmhe-19KXm6keVjd_acXaO9vyLn)

**Steps for Deletion of node at an Index:**
* Create a struct Node* function deleteAtIndex which will return the pointer to the head.
* In the function, we'll pass the current head pointer and the index where the node is to be deleted.
* Create a new struct Node* pointer p pointing to head.
* Create a new struct Node* pointer q pointing to head->next, and run a loop until this pointer reaches the index, from where we are deleting the node.
* Assign q->next to the next member of the p structure using p-> next = q->next.
* Free the pointer q, because it has zero connections with the list now.
* Return head.
*Refer the code snippet below:*
```
// Case 2: Deleting the element at a given index from the linked list
struct Node * deleteAtIndex(struct Node * head, int index){
    struct Node *p = head;
    struct Node *q = head->next;
    for (int i = 0; i < index-1; i++)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = q->next;
    free(q);
    return head;
}
```

## Case 3 : Deletion at the end
In order to delete an element at the end of the linked list, we bring a temporary pointer ptr to the last element. And a pointer p  to the second last. We make the second last element to point at NULL. And we free the pointer ptr.

Refer the image below:
![image](https://drive.google.com/uc?id=1EWG57FOvTLsMk8raLafGEfMcniiwDs2n)
**Steps for Deletion of Node at the end:**
* Deleting the last node is quite similar to deleting from any other index. The difference holds in the limit of the while loop. Here we run a loop until the pointer reaches the end and points to NULL.
* Assign NULL to the next member of the p structure using p-> next = NULL.
* Break the connection between q and NULL by freeing the ptr q.
* Return head.

*Refer the code snippet given below:*
```
// Case 3: Deleting the last element
struct Node * deleteAtLast(struct Node * head){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->next !=NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    p->next = NULL;
    free(q);
    return head;
}

```

## Case 4: Deletion the first node at a given value
Similar to the other cases, ptr can be deleted for a given value as well by following few steps:

* p->next = givenVal-> next;
* free(givenVal);
Since, the value 8 comes twice in the list, this function will be made to delete only the first occurrence.
 
Refer the image below for a clear understanding:
![image](https://drive.google.com/uc?id=16OrOSVH5N-YGTtu_HyvmtdYZV8UaqWQ7)

**Steps for deletion of first node at a given value:**
* Here, we already have a value that needs to be deleted from the list. The main thing is that we’ll delete only the first occurrence.
* Create a struct Node* function deleteByValue which will return the pointer to the head.
* Pass into this function the head node, the value which needs to be deleted.
* Create a new struct Node* pointer p pointing to the head.
* Create another struct Node* pointer q pointing to the next of head.
* Run a while loop until the pointer q encounters the given value or the list finishes.
* If it encounters the value, delete that node by making p point the next node, skipping the node q. And free q from memory.
* And if the list just finishes, it means there was no such value in the list. Continue without doing anything.
* Return head.
```
// Case 4: Deleting the element with a given value from the linked list
struct Node * deleteByValue(struct Node * head, int value){
    struct Node *p = head;
    struct Node *q = head->next;
    while(q->data!=value && q->next!= NULL)
    {
        p = p->next;
        q = q->next;
    }
    
    if(q->data == value){
        p->next = q->next;
        free(q);
    }
    return head;
}
```
# Circular Linked Lists
Circular Linked List is a list where all nodes are connected to form a circle. In this list
list,the last element points to the first element(head) therefore forming a circular chain.
There is no node pointing to NULL,which shows the absence of end of the node. We have a head pointer here but no starting of the lsit.

![image](https://drive.google.com/uc?id=19aUE7roij0OLXrDui-bd_nmAWSsZGAW6)

## Operations which we can perform on a circular Linked List:
Similar operations which are performed on single linked list can be performed on a circular Linked list.

## Creation of a Circular Linked List:
* Creation of a Circular Linked List is quite similar to creation of a Singly Linked List.
The only difference is that we have to do is that instead of pointing the last element to NULL,point it to head.

*Refer the code given below:*
```
struct Node
{
    int data;
    struct Node *next;
};
int main(){
    
    struct Node *head;
    struct Node *second;
    struct Node *third;
    struct Node *fourth;
 
    // Allocate memory for nodes in the linked list in Heap
    head = (struct Node *)malloc(sizeof(struct Node));
    second = (struct Node *)malloc(sizeof(struct Node));
    third = (struct Node *)malloc(sizeof(struct Node));
    fourth = (struct Node *)malloc(sizeof(struct Node));
 
    // Link first and second nodes
    head->data = 4;
    head->next = second;
 
    // Link second and third nodes
    second->data = 3;
    second->next = third;
 
    // Link third and fourth nodes
    third->data = 6;
    third->next = fourth;
 
    // Terminate the list at the third node
    fourth->data = 1;
    fourth->next = head;
 
    return 0;
}
```
## Traversing through a Circular Linked List: 
* Firstly,we create a void function linkedListTraversal and pass the head pointer of the linked list to the function.
* In the function, we create a pointer ptr pointing to the head.
* Then we run a do-while loop until ptr reaches the last node, and ptr-> next becomes head, i.e. ptr->next = head. And keep printing the data of each node.
* In this way we traverse through a circular linked list. And do-while was the key to make it possible.
 
*Refer the code snippet below:*
```
void linkedListTraversal(struct Node *head){
    struct Node *ptr = head;
    do{
        printf("Element is %d\n", ptr->data);
        ptr = ptr->next;
    }while(ptr!=head);
}

```
## Insertion in a Doubly Linked List:
* Firstly, we will create a struct Node* function insertAtFirst which will return the pointer to the new head.
* Then, we’ll pass the current head pointer and the data to insert at the beginning, in the function.
* Create a new struct Node* pointer ptr, and assign it a new memory location in the heap. This is our new node pointer. Make sure you don't forget to include the header file <stdlib.h>.
* Create another struct node * pointer p pointing to the next of the head. p = head-> next.
* Run a while loop until the p pointer reaches the end element and p-> next becomes the head.
![image](https://drive.google.com/uc?id=1sh9oLEeHm6Kir_YUowCEozg3eyFt9EAs)
* Now, assign ptr to the next of p, i.e.p->next  = ptr. And head to  the next of ptr, i.e. ptr->next = head.
* Now, the new head becomes ptr. head = ptr.
![image](https://drive.google.com/uc?id=1MqYJQGbcm08-eptNotolm4JNP2IiIEr0)
* Return head.
*Refer the code snippet given below:*
```
struct Node * insertAtFirst(struct Node *head, int data){
    struct Node * ptr = (struct Node *) malloc(sizeof(struct Node));
    ptr->data = data;
 
    struct Node * p = head->next;
    while(p->next != head){
        p = p->next;
    }
    // At this point p points to the last node of this circular linked list
 
    p->next = ptr;
    ptr->next = head;
    head = ptr;
    return head;
 
}

```
*In order to see whether our codes works properly or not we will add a few nodes in our Doubly Linked List:*
```
  printf("Circular Linked list before insertion\n");
    linkedListTraversal(head);
    head = insertAtFirst(head, 54);
    head = insertAtFirst(head, 58);
    head = insertAtFirst(head, 59);
    printf("Circular Linked list after insertion\n");
    linkedListTraversal(head);
```
*The following output is given:*
```
Circular Linked list before insertion
Element is 4
Element is 3
Element is 6
Element is 1
Circular Linked list after insertion
Element is 59
Element is 58
Element is 54
Element is 4
Element is 3
Element is 6
Element is 1
```
# Doubly Linked List
In a Doubly Linked List, each node contains a data part and two pointers in a doubly-linked list, one for the previous node and the other for the next node.
![image](https://drive.google.com/uc?id=1KHuKl4OgXRKTlewqzNNR6ZE9Mov9iH0U)

*Difference between a Doubly Linked List and Singly Linked List*
* A doubly linked list allows traversal in both directions. We have the addresses of both the next node and the previous node. So, at any node, we’ll have the freedom to choose between going right or left.
* A node comprises three parts, the data, a pointer to the next node, and a pointer to the previous node.
* Head node has the pointer to the previous node pointing to NULL.

Follow the code snippet below to implement a doubly Linked List:
```
struct Node {
    int data;
    Struct Node* next;
    Struct Node* prev;
};

```






## Acknowledgements

 - [Data Structure and Algorithms in C](https://www.youtube.com/playlist?list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi)
 - [GFG Doubly Linked Lists](https://www.geeksforgeeks.org/doubly-linked-list/)
 - [GFG Linked Lists Reference](https://www.geeksforgeeks.org/data-structures/linked-list/#:~:text=A%20linked%20list%20is%20a,stored%20at%20contiguous%20memory%20locations.&text=In%20simple%20words%2C%20a%20linked,Singly%20Linked%20List)

  