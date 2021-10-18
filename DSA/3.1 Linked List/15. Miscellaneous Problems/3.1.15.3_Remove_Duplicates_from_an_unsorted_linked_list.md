# Remove duplicates from an unsorted linked list

### Problem Statement
##### Given an unsorted linked list of N nodes. The task is to remove duplicate elements from this unsorted Linked List.

##
```For Example: 
Input: 5->2->2->4->NULL
Output: 5->2->4->NULL
```

### Possible Solutions:
##### 1. Using two loops
##### 2. Using Hashing
#
### Using Loops (Brute Force) :
##### Here we only use two loops, the outer loop is used to pick the elements one by one and the inner loop compares the picked element with the rest of the elements. If the adjacent node is having the same data than that node is deleted and the pointer points to the next unique node. This process goes on till the outer loop is not complete or when all nodes have been checked.
#

```c++
void removeDuplicates(struct Node* head) {
        Node *ptr1, *ptr2, *duplicate;
        ptr1 = head;
     
        while (ptr1 and ptr1->next) {
            ptr2 = ptr1;
            
            while (ptr2->next) {
                if (ptr1->data == ptr2->next->data) {
                    ptr2->next = ptr2->next->next;
                    delete (duplicate);
                }
                else 
                    ptr2 = ptr2->next;
            }
            ptr1 = ptr1->next;
        }
    }
```
> Time Complexity: O(n^2)
> Space Complexity: O(1)

### Using Hashing:
##### We traverse the link list from head to end. For every element, we check whether it is in the hash table, if yes, we delete that node, else we put it in the hash table. 
#
```c++
void removeDuplicates(struct Node* head) {
    
        unordered_set<int> visited;
        struct Node *curr = head, *prev = NULL;
        
        while (curr) {
            if (visited.find(curr->data) != visited.end()) {
                prev->next = curr->next;
                delete (curr);
            }
            else {
                visited.insert(curr->data);
                prev = curr;
            }
            curr = prev->next;
        }
    } 
```
> Time Complexity: O(N)
> Space Complexity: O(N)

_References:_
[Geeks For Geeks](https://practice.geeksforgeeks.org/problems/remove-duplicates-from-an-unsorted-linked-list/1)
    




