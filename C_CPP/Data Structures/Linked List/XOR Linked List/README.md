# XOR Linked List

A **Doubly linked list** node requires **three** fields: 1 to store the **data** and other 2 to store the **address for previous and next nodes**. To move forward in the list, we use next pointer and to move backward we use previous pointer. The doubly linked list representation is displayed below:

<p align="center"> <img width="650em" src="https://user-images.githubusercontent.com/74010615/139650169-850231c2-f07a-487b-9667-160a14418312.png" alt="Doubly Linked List Representation" /> </p>  

An **XOR linked list** is the **memory-efficient version** of doubly linked list with 1 field to store **data** and 1 field to store the **XOR of the previous and next node addresses** and not the actual address of the node. To move forward in the list, we need to perform certain calculations to get the next node address. Similarly, some calculations are required to get the previous node address. Below is the representation of XOR linked list:

<p align="center"> <img width="650em" src="https://user-images.githubusercontent.com/74010615/139650807-0a5434b4-430d-4f35-9aad-79cd75853e82.png" alt="XOR Linked List Representation" /> </p>  

```
NOTE: ⊕ and ^ are used to represent XOR.  
      0 in the above image represents NULL value.
```

Link of a node is calculated by XORing the address of previous and next nodes i.e. **link(current) = address(previous) ^ address(next)**

- link(A) = NULL ^ address(B)  
- link(B) = address(A) ^ address(C)
- link(C) = address(B) ^ address(D)
- link(D) = address(C) ^ NULL  

# Insertion in XOR Linked List
While adding a new node in this XOR linked list, the node gets inserted in the beginning of the linked list. The link of the new node will be XOR of NULL(previous) and current head(next). Link of current head will be XOR of new node(previous) and link of head(next). And finally we need to make the new node as our head.
```cpp
newNode->link = XOR(NULL, head);
head->link = XOR(newNode, head->link);
head = newNode;
```
If the node inserted is the first node of the linked list then we can simply add NULL to the link of this new node as previous and next address of this node will be NULL.

# Deletion in XOR Linked List
To delete a particular element from the XOR linked list, we need to traverse the linked list to search for the element to be deleted.  
If the node to be deleted in first node(if previous pointer in NULL), we update the head to the XOR of NULL(previous) and link of current element(next). The link of head will be XOR of address of current(previous) and link of head(next).
```cpp
head = XOR(NULL, current->link);
head->link = XOR(head->link, XOR(current, NULL));
```
If the node to be deleted is the last node(if next pointer is NULL), we update link of previous node by removing the presence of current node. We update the link of previous to XOR of link of previous(previous) and address of current(current).
```cpp
previous->link = XOR(previous->link, XOR(current, NULL));
```
If the node to be deleted is in the middle of the linked list, we simply update the links of previous and next by removing the presence of the node to be deleted.
We update previous->link = previous->link ⊕ current ⊕ next. And update next->link = next->link ⊕ current ⊕ previous
```cpp
previous->link = XOR(previous->link, XOR(current, next));
next->link = XOR(next->link, XOR(current, previous));
```

# Traversal in XOR Linked List
While traversing an XOR linked list, we need to maintain three pointers: previous, current and next. To traverse the list, we need the address of next node every time to access the next node. We can get the address of next node by XORing previous and link of current i.e. **address(next) = address(previous) ^ link(current)**  
We then update the previous to current node and current to next node. So currently we are at the next node and moving forward.
```cpp
next = XOR(previous, current->link);
previous = current;
current = next;
```

# Reversing of XOR Linked List
Reversing of an XOR linked list is easy as we just need to point our **head** to the **last node** of the linked list.  
We simply need to traverse the XOR linked list till the end of the linked list and after our current pointer reaches the last node, we update our head to the current node. Now our head is pointing to the last node. When we traverse this linked list, it will be traversed in reverse order.  

# C++ Program to implement XOR Linked List
```cpp
#include <iostream>
using namespace std;

// XOR Linked List Node Structure
struct Node {
    int data;
    Node* link;
};

// Returns XOR of addresses of two nodes
Node* XOR(Node* first, Node* second) {
    return (Node*) ((uintptr_t) first ^ (uintptr_t) second);
}

// Inserts a node at the beginning of the linked list
Node* insertNode(Node* head, int val) {
    Node* newNode = new Node();
    newNode->data = val;
    if(head == NULL) { // If linked list is empty
        newNode->link = NULL;
    } else { // If linked list has at least one element already present
        newNode->link = XOR(NULL, head);
        head->link = XOR(newNode, head->link);
    }
    head = newNode;
    cout << " > " << val << " inserted in the linked list.\n";
    return head;
}

// Deletes the given element from the linked list
Node* deleteNode(Node* head, int val) {
    Node* current = head;
    Node* previous = NULL;
    Node* next = NULL;
    while(current != NULL && current->data != val) { // Traverse the linked list to find the provided element
        next = XOR(previous, current->link);
        previous = current;
        current = next;
    }
    if(current == NULL && previous->data != val) { // If element provided not present in linked list
        cout << " > " << val << " not present for deletion.\n";
        return head;
    }
    next = XOR(previous, current->link);
    if(previous == NULL) { // Node to be deleted is first
        head = XOR(NULL, current->link);
        if(head != NULL) {
            head->link = XOR(head->link, XOR(current, NULL));
        }
    } else if(next == NULL) { // Node to be deleted is last
        if(previous == NULL) {
            head = NULL;
        } else {
            previous->link = XOR(previous->link, XOR(current, NULL));
        }
    } else { // Node to be deleted is in the middle of linked list
        previous->link = XOR(previous->link, XOR(current, next));
        next->link = XOR(next->link, XOR(current, previous));
    }
    free(current);
    current = NULL;
    cout << " > " << val << " deleted from the linked list.\n";
    return head;
}

// Traverse the linked list from start to end
void traverse(Node* head) {
    cout << " > Traversed linked list: ";
    Node* current = head;
    Node* previous = NULL;
    Node* next = NULL;
    while(current != NULL) { // Traverse the linked list node by node
        cout << current->data << " -> ";
        next = XOR(previous, current->link);
        previous = current;
        current = next;
    }
    cout << "NULL\n\n";
}

// Reverse the linked list
Node* reverse(Node* head) {
    Node* current = head;
    if(current == NULL) { // If linked list is empty
        return NULL;
    }
    Node* previous = NULL;
    Node* next = NULL;
    while(XOR(previous, current->link) != NULL) { // Traverse till the end of the linked list
        next = XOR(previous, current->link);
        previous = current;
        current = next;
    }
    head = current; // Update head to the last node of the linked list
    cout << " > Current linked list reversed.\n";
    return head;
}

int main() {
    Node* head = NULL; // Head of the linked list
    traverse(head);
    head = insertNode(head, 10);
    head = insertNode(head, 20);
    head = insertNode(head, 30);
    head = insertNode(head, 40);
    head = insertNode(head, 50);
    traverse(head);
    head = reverse(head);
    traverse(head);
    head = deleteNode(head, 50);
    traverse(head);
    head = deleteNode(head, 20);
    traverse(head);
    head = deleteNode(head, 80);
    traverse(head);
    return 0;
}
```

# Output
```
 > Traversed linked list: NULL

 > 10 inserted in the linked list.
 > 20 inserted in the linked list.
 > 30 inserted in the linked list.
 > 40 inserted in the linked list.
 > 50 inserted in the linked list.
 > Traversed linked list: 50 -> 40 -> 30 -> 20 -> 10 -> NULL

 > Current linked list reversed.
 > Traversed linked list: 10 -> 20 -> 30 -> 40 -> 50 -> NULL

 > 50 deleted from the linked list.
 > Traversed linked list: 10 -> 20 -> 30 -> 40 -> NULL

 > 20 deleted from the linked list.
 > Traversed linked list: 10 -> 30 -> 40 -> NULL

 > 80 not present for deletion.
 > Traversed linked list: 10 -> 30 -> 40 -> NULL
```

# Advantages of XOR Linked List
- **Less** and efficient use of **memory**.
- **Reversing** an XOR linked list is **easy** as we just need to point the HEAD to the last node.

# Disadvantages of XOR Linked List
- Little **increase** in code complexity.
- **Not supported** by many other programming languages like **Java, JavaScript, Python, etc** due to absence of access to memory address of the object.
- Traversal **not possible** if we need to start it from the **middle** of the XOR linked list as we do not have the **necessary information** to start.
