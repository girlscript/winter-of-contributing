# Floyd's Cycle Detection Algorithm

## Introduction

There is said to be a cycle in a linked list if there is some node in the list that can be reached again by continuously following the next pointer.

## Problem

Given the head of a linked list, determine if the linked list has a cycle in it.

Return true if there is a cycle in the linked list. Otherwise, return false.

## Example

```
1 -> 2 -> 3 -> 4 -> 5 -> 6
               ^         |
               |         |
               - - - - - - 
```

In this case, `next` of 6 points to 4. Hence, a cycle is present.

## Brute Force : Hashing Approach

1. Traverse the linked list.

2.  Keep storing the node addresses in a Hash Table. 

3. If NULL is reached, return `false`. 

4. If the node->next points to any of the previously stored nodes in Hash then return `true`.

## Optimised Solution : Floyd's Cycle Approach

Floyd’s cycle detection algorithm uses only two pointers, moving through the linked list at different speeds. This method consumes no extra space.

**Algorithm:**

1. Keep two pointers at the head node, namely, 'fast' and 'slow'.

2. At each iteration, move the 'slow' pointer by 1 unit and 'fast' pointer by 2 units.

3. Eventually one of the two cases will happen:

   * 'fast' pointer will encounter NULL. This means that there is no cycle in the linked list. Otherwise

   * 'slow' pointer will meet the 'fast' pointer indicating the presence of loop in the list.

4. The distance is shortened by 1 on each step of the algorithm if loop is present. 

## Program

<br>

```C++
#include <bits/stdc++.h>
using namespace std;
 
class Node{
public:
    int data;
    Node* next;
};
 
void push(Node** head_ref, int new_data){

    Node* new_node = new Node();
    new_node->data = new_data;
    new_node->next = (*head_ref);
    (*head_ref) = new_node;
}
 
int Loop(Node* list){

    Node *slow = list, *fast = list;
 
    while (slow && fast && fast->next) {

        slow = slow->next;         //incrementing by 1
        fast = fast->next->next;   //incrementing by 2
        if (slow == fast) {
            return 1;              //cycle present
        }
    }
    return 0;
}
 
int main(){
 
    Node* head = NULL;
    
    push(&head, 20);    //linked list
    push(&head, 4);
    push(&head, 15);
    push(&head, 10);
 
    head->next->next->next->next = head;   //loop

    if (Loop(head))
        cout << "Loop found";
    else
        cout << "No Loop";
    return 0;
}
```

## Complexity Analysis

* **Hasing Approach**

   * Time complexity : O(n). 

   * Space Complexity: O(n) where is the space required to store the value in hashmap.

* **Floyd's Algorithm**

  * Time complexity : O(N) where N is the number of nodes in the linked list.

   * Space complexity : O(1) as only 2 pointers and no extra space is used.
   
## Resources

* https://www.geeksforgeeks.org/detect-loop-in-a-linked-list/#
