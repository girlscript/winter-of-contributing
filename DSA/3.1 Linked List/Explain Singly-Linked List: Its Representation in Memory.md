# Linked List
A linked list is a linear data structure. Instead of storing data at some location, its elements are linked using pointers. Each item in a linked list is represented by a node.
A node consists of data and points (or references) tothe next node.
### Terminology
 
* **linked list**
a list consisting of items in which each item knows the location of the next item.
* **node**
  * an item in a linked list. Each node contains a piece of list data and the location of the next node (item).
* **link**
  * (of a node) the location of the next node.
* **head node**
  * first node in a linked list
* **head pointer**
  * points to the head node
  
![LLdefs](https://user-images.githubusercontent.com/66662965/137860493-58fa1de8-17ac-4227-ad3a-aa76c615ed61.gif)
# Its Representation in Memory
* There are two ways to represent a linked list in memory:

   * 1. Static representation using array
   * 2. Dynamic representation using free pool of storage
# Static representation
In static representation of a single linked list, two arrays are maintained: one array for data and the other for links. The static representation of the linked list in 
Two parallel arrays of equal size are allocated which should be sufficient to store the entire linked list. Nevertheless this contradicts the idea of the linked list 
(that is non-contagious location of elements). But in some programming languages, for example, ALGOL, FORTRAN, BASIC, etc. such a representation is the only representation
to manage a linked list.
# Dynamic representation
The efficient way of representing a linked list is using the free pool of storage. In this method, there is a memory bank (which is nothing but a collection of free memory 
spaces) and a memory manager (a program, in fact). During the creation of a linked list, whenever a node is required the request is placed to the memory manager; the memory
manager will then search the memory bank for the block requested and, if found, grants the desired block to the caller. Again, there is also another program called the garbage
collector; it plays whenever a node is no more in use; it returns the unused node to the memory bank. It may be noted that memory bank is basically a list of memory spaces 
which is available to a programmer. Such a memory management is known as dynamic memory management. The dynamic representation of linked list uses the dynamic memory management
policy.

The mechanism of dynamic representation of single linked list is illustrated in Figures 3.4(a) and 3.4(b). A list of available memory spaces is there whose pointer is stored in
AVAIL. For a request of a node, the list AVAIL is searched for the block of right size. If AVAIL is null or if the block of desired size is not found, the memory manager will
return a message accordingly. Suppose the block is found and let it be XY. Then the memory manager will return the pointer of XY to the caller in a temporary buffer, say NEW.
The newly availed node XY then can be inserted at any position in the linked list by changing the pointers of the concerned nodes. In Figure 3.4(a), the node XY is inserted at
the end and change of pointers is shown by the dotted arrows. Figure 3.4(b) explains the mechanism of how a node can be returned from a linked list to the memory bank.



## There are three types of linked lists:
**1.Singly linked list <br>
2.Doubly linked list <br>
3.Circular-linked list** 

# Singly Linked List
![linkedlist](https://user-images.githubusercontent.com/66662965/137857122-1464f96a-9163-4bf1-add4-db236b992b34.png)

### In this file, we will cover singly linked list algorithms, such as: <br>
* Append <br>
* Insertion <br>
* Deletion <br>
* Printing <br>
Let’s start by creating a node class as generic type.
```Code
public class Node<T> {
var value: T
var next: Node<T>?
init(value: T) {
self.value = value
}
}
```
Now create a `SingleLinkedList<T>` class, in which we will append, insert, or delete items.
```
class SingleLinkedList<T>{
var head: Node<T>
public var isLinkedListEmpty:Bool {
   return head == nil
}
public var firstItem: Node<T>? 
{         
   return head     
}
}
```
`isLinkedListEmpty` is a property that checks if the `LinkedList` is empty or not. If the head is nil, the `LinkedList` is empty.
# Appending Item/Node in a Singly Linked List
Append functions will add a new node at the end of a singly linked list, and for that, we have to traverse the linked list using a temporary node reference of the head 
called `temp`. If we found the `temp` reference to be nil, that means we have reached the end of the singly linked list. At that reference, we can add our new node.
```
public func append(value: T) {
let newNode = Node(value: value)
if var temp = head {
while temp.next != nil {
temp = temp.next!
}
temp.next = newNode
} else {
head = newNode
}
}
```
# Insertion of Item/Node at Some Position in Singly Linked List
To insert an item at a particular position, first we need to set the previous node’s `next` reference to a new item and set the `next` of the new item to the current item
present at that position. Add the following insert function to the above singly linked list class. 
```
func insert(data : T, at position : Int) {
let newNode = Node(value: data)
if (position == 0) {
newNode.next = head
head = newNode
}
else {
var previous = head
var current = head
for _ in 0..<position {
previous = current
current = current?.next
}
newNode.next = previous?.next
previous?.next = newNode
}
}
```
# Deleting a Node at a Position From the Singly Linked List
To delete a node, we need to set the reference of the previous node to the next of the node to be deleted.
Add the following delete function to above singly linked list class.
```
func deleteNode(at position: Int)
{
if head == nil{
return
}
var temp = head
if (position == 0)
{
head = temp?.next
return
}
for _ in 0..<position-1 where temp != nil {
temp = temp?.next
}
if temp == nil || temp?.next == nil{
return
}
let nextToNextNode = temp?.next?.next
temp?.next = nextToNextNode
}
```
# Printing Singly Linked List Items
```
func printList() {
var current: Node? = head
while (current != nil) {
print("SLL item is: \(current?.value as? String ?? "")")
current = current?.next
}
}
```
## Combining all the above functions in our singly linked list class:
```
class SingleLinkedList<T> {
var head: Node<T>? 
public var isEmpty: Bool {
return head == nil
}
public var first: Node<T>? {
return head
}
public func append(value: T) {
let newNode = Node(value: value)
if var temp = head {
while temp.next != nil {
temp = temp.next!
}
temp.next = newNode
} else {
head = newNode
}
}
func insert(data : T, at position : Int) {
let newNode = Node(value: data)
if (position == 0) {
newNode.next = head
head = newNode
}
else {
var previous = head
var current = head
for _ in 0..<position {
previous = current
current = current?.next
}
newNode.next = previous?.next
previous?.next = newNode
}
}
func deleteNode(at position: Int)
{
if head == nil{
return
}
var temp = head
if (position == 0)
{
head = temp?.next
return
}
for _ in 0..<position-1 where temp != nil {
temp = temp?.next
}
if temp == nil || temp?.next == nil{
return
}
let nextToNextNode = temp?.next?.next
temp?.next = nextToNextNode
}
func printList() {
var current: Node? = head
//assign the next instance
while (current != nil) {
print("SLL item is: \(current?.value as? String ?? "")")
current = current?.next
}
}
}
```
## Now execute the above functions:
```
let sll = SingleLinkedList<String>()
sll.append(value:"Kim" )
sll.append(value: "Nik")
sll.append(value: "Ishu")
sll.printList() // First Print 
sll.insert(data:"Vijay" , at: 1)
sll.printList() .  // Second Print
sll.deleteNode(at: 2)
sll.printList() . // Third Print
```
## Output will be:
**// First Print** <br>
`SLL item is: Kim` <br>
`SLL item is: Nik` <br>
`SLL item is: Ishu` <br>
**//Second Print (Inserting string "Vijay" at position 1)** <br>
`SLL item is: Kim` <br>
`SLL item is: Vijay` <br>
`SLL item is: Nik` <br>
`SLL item is: Ishu` <br>

**// Third Print (Deleting Node at Position 2)** <br>
`SLL item is: Kim` <br>
`SLL item is: Vijay` <br>
`SLL item is: Ishu`  <br>

# Which algorithm is used in Singly LinkedList for Binary Search:
To perform a Binary search based on `Divide and Conquer` Algorithm, determination of the middle element is important. `Binary Search` is usually fast and efficient for arrays
because accessing the middle index between two given indices is easy and fast(`Time Complexity O(1)`). But memory allocation for the singly linked list is `dynamic` and 
`non-contiguous`, which makes finding the middle element difficult. One approach could be of using skip list, one could be traversing the linked list using `one pointer`.

**Note: The approach and implementation provided below are to show how Binary Search can be implemented on a linked list. The implementation takes O(n) time. <br>
Approach :**
- Here, start node(set to Head of list), and the last node(set to NULL initially) are given.
- Middle is calculated using two pointers approach.
- If middle’s data matches the required value of search, return it.
- Else if middle’s data < value, move to upper half(setting start to middle’s next).
- Else go to lower half(setting last to middle).
- The condition to come out is, either element found or entire list is traversed. When entire list is traversed, last points to start i.e. `last -> next == start`.

### In main function, function `InsertAtHead` inserts value at the beginning of linked list. Inserting such values(for sake of simplicity) so that the list created is sorted. 
Examples : 
 
`Input : Enter value to search : 7` <br>
`Output : Found` <br>
`Input : Enter value to search : 12` <br>
`Output : Not Found`
## Code Example C++:
```C++
// CPP code to implement binary search
// on Singly Linked List
#include<stdio.h>
#include<stdlib.h>

struct Node
{
	int data;
	struct Node* next;
};

Node *newNode(int x)
{
	struct Node* temp = new Node;
	temp->data = x;
	temp->next = NULL;
	return temp;
}

// function to find out middle element
struct Node* middle(Node* start, Node* last)
{
	if (start == NULL)
		return NULL;

	struct Node* slow = start;
	struct Node* fast = start -> next;

	while (fast != last)
	{
		fast = fast -> next;
		if (fast != last)
		{
			slow = slow -> next;
			fast = fast -> next;
		}
	}

	return slow;
}

// Function for implementing the Binary
// Search on linked list
struct Node* binarySearch(Node *head, int value)
{
	struct Node* start = head;
	struct Node* last = NULL;

	do
	{
		// Find middle
		Node* mid = middle(start, last);

		// If middle is empty
		if (mid == NULL)
			return NULL;

		// If value is present at middle
		if (mid -> data == value)
			return mid;

		// If value is more than mid
		else if (mid -> data < value)
			start = mid -> next;

		// If the value is less than mid.
		else
			last = mid;

	} while (last == NULL ||
			last != start);

	// value not present
	return NULL;
}

// Driver Code
int main()
{
	Node *head = newNode(1);
	head->next = newNode(4);
	head->next->next = newNode(7);
	head->next->next->next = newNode(8);
	head->next->next->next->next = newNode(9);
	head->next->next->next->next->next = newNode(10);
	int value = 7;
	if (binarySearch(head, value) == NULL)
		printf("Value not present\n");
	else
		printf("Present");
	return 0;
}
```
## Code Example Java:
```Java
// Java code to implement binary search
// on Singly Linked List

// Node Class
class Node
{
	int data;
	Node next;

	// Constructor to create a new node
	Node(int d)
	{
		data = d;
		next = null;
	}
}

class BinarySearch
{
	// function to insert a node at the beginning
	// of the Singaly Linked List
	static Node push(Node head, int data)
	{
		Node newNode = new Node(data);
		newNode.next = head;
		head = newNode;
		return head;
	}

	// Function to find middle element
	// using Fast and Slow pointers
	static Node middleNode(Node start, Node last)
	{
		if (start == null)
			return null;

		Node slow = start;
		Node fast = start.next;

		while (fast != last)
		{
			fast = fast.next;
			if (fast != last)
			{
				slow = slow.next;
				fast = fast.next;
			}
		}
		return slow;
	}

	// function to insert a node at the beginning
	// of the Singly Linked List
	static Node binarySearch(Node head, int value)
	{
		Node start = head;
		Node last = null;

		do
		{
			// Find Middle
			Node mid = middleNode(start, last);

			// If middle is empty
			if (mid == null)
				return null;

			// If value is present at middle
			if (mid.data == value)
				return mid;

			// If value is less than mid
			else if (mid.data > value)
			{
				start = mid.next;
			}

			// If the value is more than mid.
			else
				last = mid;
		} while (last == null || last != start);

		// value not present
		return null;
	}

	// Driver Code
	public static void main(String[] args)
	{
		Node head = null;

		// Using push() function to
		// convert singly linked list
		// 10 -> 9 -> 8 -> 7 -> 4 -> 1
		head = push(head, 1);
		head = push(head, 4);
		head = push(head, 7);
		head = push(head, 8);
		head = push(head, 9);
		head = push(head, 10);
		int value = 7;

		if (binarySearch(head, value) == null)
		{
			System.out.println("Value not present");
		}
		else
		{
			System.out.println("Present");
		}
	}
}
```
