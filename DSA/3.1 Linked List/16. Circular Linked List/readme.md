# Circular Linked List
- In the circular linked list the previous element stores the address of the next element and the last element stores the address of the starting element.
- The elements points to each other in a circular way which forms a circular chain.
- The circular linked list has a dynamic size which means the memory can be allocated when it is required.

## Types :-
## 1) Circular Singly Linked List 

- singly linked list, the next pointer of the last node points to the first node.


## 2) Circular Doubly Linked List 
- In doubly linked list, the next pointer of the last node points to the first node and the previous pointer of the first node points to the last node making the circular in both directions.

## Implementing Circular Singly Linked List:-
- Implementing Circular Linked List almost similar to linear linked list implementation, with the only difference is that, in circular linked list the last Node will have it's next point to the Head of the List.

## Node class :-
- As the node is a combination of multiple information, hence we will be defining a class for Node which will have a variable to store data and another variable to store the pointer.
```
class Node {
  public:
  int data;
  //pointer to the next node
  node* next;
  
  node() {
    data = 0;
    next = NULL;
  }
  
  node(int x) {
    data = x;
    next = NULL;
  }
} 
```
## Circular Linked List
- As we are following the complete OOPS methodology, hence we will create a separate class for Linked List, which will have all the methods like insertion, search, deletion etc. Also, the linked list class will have a pointer called head to store the location of the first node which will be added to the linked list.

```
class CircularLinkedList {
  public:
  node *head;
  //declaring the functions
  
  //function to add Node at front
  int addAtFront(node *n);
  //function to check whether Linked list is empty
  int isEmpty();
  //function to add Node at the End of list
  int addAtEnd(node *n);
  //function to search a value
  node* search(int k);
  //function to delete any Node
  node* deleteNode(int x);
  
  CircularLinkedList() {
    head = NULL;
  }
}
```

## Insertion at the Beginning
### Steps to insert a Node at beginning :-

- 1)The first Node is the Head for any Linked List.
- 2)When a new Linked List is instantiated, it just has the Head, which is Null.
- 3)Else, the Head holds the pointer to the fisrt Node of the List.
- 4)When we want to add any Node at the front, we must make the head point to it.
- 5)And the Next pointer of the newly added Node, must point to the previous Head, whether it be NULL(in case of new List) or the pointer to the first Node of the List.
- 6)The previous Head Node is now the second Node of Linked List, because the new Node is added at the front.

```
int CircularLinkedList :: addAtFront(node *n) {
  int i = 0;
  /* If the list is empty */
  if(head == NULL) {
    n->next = head;
    //making the new Node as Head
    head = n;
    i++;
  }
  else {
    n->next = head;
    //get the Last Node and make its next point to new Node
    Node* last = getLastNode();
    last->next = n;
    //also make the head point to the new first Node
    head = n;
    i++;
  }
  //returning the position where Node is added
  return i;
}
```
## Insertion at the End
### Steps to insert a Node at the end :-

- 1)If the Linked List is empty then we simply, add the new Node as the Head of the Linked List.
- 2)If the Linked List is not empty then we find the last node, and make it' next to the new Node, and make the next of the Newly added Node point to the Head of the List.


```
int CircularLinkedList :: addAtEnd(node *n) {
  //If list is empty
  if(head == NULL) {
    //making the new Node as Head
    head = n;
    //making the next pointer of the new Node as Null
    n->next = NULL;
  }
  else {
    //getting the last node
    node *last = getLastNode();
    last->next = n;
    //making the next pointer of new node point to head
    n->next = head;
  } 
}
```

## Searching for an Element in the List
### Steps to insert a Node at the end :-
- 1)traverse like we did while getting the last node, in this case we will also compare the data of the Node. 
- 2)If we get the Node with the same data, we will return it, otherwise we will make our pointer point the next Node, and so on.

```
node* CircularLinkedList :: search(int x) {
  node *ptr = head;
  while(ptr != NULL && ptr->data != x) {
    //until we reach the end or we find a Node with data x, we keep moving
    ptr = ptr->next;
  }
  return ptr;
}
```
## Deleting a Node from the List
### Steps to insert a Node at the end :-
- 1)If the Node to be deleted is the first node, then simply set the Next pointer of the Head to point to the next element from the Node to be deleted. And update the next pointer of the Last Node as well.
- 2)If the Node is in the middle somewhere, then find the Node before it, and make the Node before it point to the Node next to it.
- 3)If the Node is at the end, then remove it and make the new last node point to the head.

```

node* CircularLinkedList :: deleteNode(int x) {
  //searching the Node with data x
  node *n = search(x);
  node *ptr = head;
  if(ptr == NULL) {
    cout << "List is empty";
    return NULL;
  }
  else if(ptr == n) {
    ptr->next = n->next;
    return n;
  }
  else {
    while(ptr->next != n) {
      ptr = ptr->next;
    }
    ptr->next = n->next;
    return n;
  }
}
```

## Advantage of circular linked list :-
- 1)Entire list can be traversed from any node of the list.
- 2)It saves time when we have to go to the first node from the last node.
- 3)Its is used for the implementation of queue.
- 4)Reference to previous node can easily be found.
- 5)When we want a list to be accessed in a circle or loop then circular linked list are used.

## Disadvantage of circular linked list :-
- 1)Circular list are complex as compared to singly linked lists.
- 2)Reversing of circular list is a complex as compared to singly or doubly lists.
- 3)If not traversed carefully, then we could end up in an infinite loop.
- 4)Like singly and doubly lists circular linked lists also doesn’t support direct accessing of elements.


## Applications of Circular Linked List :-
- 1)Circular lists are used in applications where the entire list is accessed one-by-one in a loop.
- 2)It is also used by the Operating system to share time for different users, generally uses a Round-Robin time-sharing mechanism.
- 3)Multiplayer games use a circular list to swap between players in a loop.
- 4)Implementation of Advanced data structures like Fibonacci Heap
- 5)The browser cache which allows you to hit the BACK button
Undo functionality in Photoshop or Word
- 6)Circular linked lists are used in Round Robin Scheduling
- 7)Circular linked list used Most recent list (MRU LIST)

## References
- https://www.tutorialspoint.com/data_structures_algorithms/circular_linked_list_algorithm.htm
- https://www.geeksforgeeks.org/circular-linked-list/
