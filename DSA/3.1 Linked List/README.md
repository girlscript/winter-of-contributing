
# Linked Lists in DSA

This readme file summarizes the significance of Linked Lists in Data Structure and Algorithms.
This file consists of various sections including a brief description of algorithms mentioned below which can be implemented by using Linked Lists.
* Introduction to Linked Lists
* Benefits of Linked Lists over arrays
* Self-Referential structures in C
* Creation and Traversal of a Linked list.
* Operations on a Linked list
* Length of a Linked List (Recursive and Iterative)
* nth end from Front and End in a Singly Linked List
* Pairwise Swap of elements in a Linked List
* Check Palindrome
* Floyd Cycle detection Algorithm
* Josephus Circle
* Doubly Linked Lists
* Doubly Linked lists from Ternary Trees
* Sort Biotonic Doubly Linked List
* Length of a Doubly Linked List
* Reverse a Doubly Linked List
* Circular Linked list
* Miscellaneous Problems




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
One of the stepping stones in Data Structures is creation and traversal of a linked list.

* An element in a linked list is a **struct Node**. It is made to hold integer data and a pointer of data type struct Node *, as it has to point to another struct Node. 
* One of the initial steps is to create individual nodes and link them to the next node using the arrow operator ‘→’.

# Operation on Linked Lists:
Several operations like **insertion**,**deletion**,**searching** and **sorting** can be performed in a linked list.

## Insertion of a Node in various cases
We would first create a new node for insertion in any of the 4 cases given below.In the next step,we overwrite the current connection and make new connections. And that is how we insert a new node at our desired place.


There are 4 possibilities which can take place while insertion of a node:
* **Insertion in the beginning**: In order to insert the new node at the beginning, we would need to have the head pointer pointing to this new node and the new node’s pointer to the current head.
* **Insertion in between**: Assuming index starts from 0, we can insert an element at index i>0.Bring a temporary pointer p pointing to the node before the element you want to insert in the linked list.

   
* **Insertion at the end**: In order to insert an element at the end of the linked list, we bring a temporary pointer to the last element.
* **Insertion after a given node**: Similar to the other cases, ptr can be inserted after a given node.




## Deletion of a Node in various cases
The deletion process in the process draws some similarities to the insertion process.

Deletion in a Linked List can have the following 4 possibilities:
* **Deletion in the beginning**:In order to delete the node at the beginning, we would need to have the head pointer pointing to the node second to the head node, that is, head-> next. And we would simply free(deallocate the memory) the node that’s left.
* **Deletion of node at an index**:Assuming index starts from 0, we can delete an element from index i>0.
* **Deletion at the end**:In order to delete an element at the end of the linked list, we bring a temporary pointer ptr to the last element. And a pointer p to the second last. We make the second last element to point at NULL. And we free the pointer ptr.
* **Deletion the first node at a given value**:Similar to the other cases, ptr can be deleted for a given value.

**Syntax for freeing a node:**  
``` free(ptr); ```

## Searching Operation in a singly linked list
In order to search an element in a singly linked list ; we write a function that searches a given key 'x' in a singly linked list. If x is present in linked list; the function returns true otherwise false.

We can use both recursive and iterative approach for implementing searching operation.

## Sorting Operation in a Linked List
We can sort the nodes of a linked list in ascending order using the following 4 methods.
- Bubble Sort
- Insertion Sort
- Quick Sort
- Merge Sort

# Length of a Linked List (Recursive and Iterative)
- In order if to find the length of linked List we will write a function which will count the number of nodes in a given singly linked list.

- We can use recursive and iterative approach for this. 
- While using the iterative approach, we initialize count as 0 and a node pointer.
  Then we use a while loop and increment the count.
- While implementing the recursive approach, we use ```int getCount(head) ```

# nth node from Front and End in a Singly Linked List
Consider that we are given 'n' and a linked list. In order to find 'n'th node; we will write a function that will return the value at 'n'th 
node from the end. 
![image](https://drive.google.com/uc?id=1F8j8BwMI_fFF527iYetUmpMwqhfM0QYa)
If input below listed is n = 3 ; output is B.

# Pairwise swap of elements in a Linked List
Consider a linked list is given, in order to implement pairwise swap ; the elements of the linked lists are paired and are swapped pairwise.

Input: 1→2→3→4→5→6→NULL 

Output: 2→1→4→3→6→5→NULL 

The two methods which can be used here are **Iterative** and **Recursive**.

- While using the iterative approach, we start from head node and traverse,through the list. We swap data of each node with its next node's data while traversing.

- While implementing the recursive approach, If in a Linked list; there are 2 or more than 2 nodes ; we swap the first two nodes and call the rest of list recursively.

# Checking Palindrome
- We need to implement a function here which returns true if the given list is a palindrome.  
- This can be implemented by using two approaches:

    i) Stack

    ii) Reversing the linked list 
- In order to use the stack method,we make a stack of list nodes. We traverse the list and push each visited node to stack. Once again we traverse the node and we pop the elements from stack for each node visited and compare
  the node. If they match we return true.
- While using reversing the second half of list approach , firstly we reverse the second half of the list and then we check whether the first half and second half are identical.

# Floyd Cycle detection Algorithm
- The main purpose here is to find whether the linked list has cycle or not.
- Firstly,we initialize two pointers at the head node. The pointers are moved at different speeds.These pointers are referred to as 'tortoise' and 'hare'.One of the following two cases occur:
  
  **A.**'Hare' will reach the tail of the list;implying that there is no cycle present in the linked list.

  **B.**'Hare' will meet the  'tortoise',indicating that a cycle is present within the linked list.

# Josephus Circle
**The main idea here is to choose the place in circle originally such that we can win the game.**

Consider 'n' people forming a circle,who are waiting to be eliminated one by one.
- The counting begins at some random point and moves around the circle in a fixed direction.
- In each step,a certain number of people are skipped and the next person in eliminated.
- The circle becomes smaller and smaller as the elimination takes place. The last person to remain wins the game.
- Consider the total number of people as 'n' and assume a number 'k' which implies that k-1 are skipped and the 'k'th person is eliminated.

# Doubly Linked Lists 
In a Doubly Linked List, each node contains a data part and two pointers in a doubly-linked list, one for the previous node and the other for the next node.
![image](https://drive.google.com/uc?id=1KHuKl4OgXRKTlewqzNNR6ZE9Mov9iH0U)

*Difference between a Doubly Linked List and Singly Linked List*
* A doubly linked list allows traversal in both directions. We have the addresses of both the next node and the previous node. So, at any node, we’ll have the freedom to choose between going right or left.
* A node comprises three parts, the data, a pointer to the next node, and a pointer to the previous node.
* Head node has the pointer to the previous node pointing to NULL.

## Operations on a Doubly Linked List
**Insertion in a Doubly Linked List:**
* Insertion at the end
* Insertion at end
* Insertion after a specified node
**Deletion in a Doubly Linked List:**
* Deletion at the end
* Deletion at end
* Deletion of node which is present just after node containing the given data
**Searching in a Doubly Linked List:**
Comparison of the data which is to be searched with each node data takes place.Location of the item is returned if it is found else NULL is returned.

**Sorting in a Doubly Linked List:**
* Merge Sort
* Bubble Sort

# Doubly Linked lists from Ternary Trees
Ternary Tree is a hierarchical data structure where it has three nodes i.e. left, middle, right.
1) The ternary tree's left pointer acts as the previous pointer of the doubly linked list.

2) The middle pointer doesn't point to anything 
3) The right pointer acts as the next pointer of a doubly linked list. 

4) For a given node, the left child is inserted into the doubly linked list first, followed by mid and right child.

The approach followed here is to traverse the tree in preorder method similar to preorder traversal. After visiting into particular node; it is inserted the doubly linked list using tail pointer.

# Sort Biotonic Doubly Linked List
A biotonic doubly linked list is defined as a list where the elements are first in increasing order and then in decreasing order.

The approach which is to be followed here is to find the first node here which is smaller than its previous node. Consider this node
as present. 

Otherwise split the lists into two.
- The first list starts from  head node till present's previous node. 
- The second list starts from present till end of the list.
- Then we reverse the second doubly linked list.
- Later we merge both these lists; the obtained list is the final sorted doubly linked list.

# Length of a Doubly Linked List
In a Doubly Linked list,each node consists of two fields;which are called links which point to the previous node and the next node.

In a doubly linked list,the traversal is possible in both directions.

# Reverse a Doubly Linked List
- One of the most simple methods for  reversing a doubly linked list is to swap prev and next pointers for all the nodes in the doubly linked list. The next step is to change prev of the head/start and change head pointer in the end.

# Circular Linked Lists
Circular Linked List is a list where all nodes are connected to form a circle. In this list
list,the last element points to the first element(head) therefore forming a circular chain.
There is no node pointing to NULL,which shows the absence of end of the node. We have a head pointer here but no starting of the list.

![image](https://drive.google.com/uc?id=19aUE7roij0OLXrDui-bd_nmAWSsZGAW6)

## Operations which we can perform on a circular Linked List:
Similar operations which are performed on single linked list can be performed on a circular Linked list.
Like Insertion,Deletion,Searching and Sorting.

# Miscellaneous Problems:
- Finding Loop in Linked List
- Reversing Linked List Recursively
- Removing Duplicates from Sorted/Unsorted Linked Lists


## Acknowledgements

 - [Data Structure and Algorithms in C](https://www.youtube.com/playlist?list=PLu0W_9lII9ahIappRPN0MCAgtOu3lQjQi)
 - [GFG Doubly Linked Lists](https://www.geeksforgeeks.org/doubly-linked-list/)
 - [GFG Linked Lists Reference](https://www.geeksforgeeks.org/data-structures/linked-list/#:~:text=A%20linked%20list%20is%20a,stored%20at%20contiguous%20memory%20locations.&text=In%20simple%20words%2C%20a%20linked,Singly%20Linked%20List)

  
