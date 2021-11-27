# __#Length of Doubly Link List.__

### Description

You are given the head of a doubly linked list you have to find the length or the total number of nodes in the list.


#### Example:

<img src="https://github.com/rajmadhu0406/winter-of-contributing/blob/raj_DSA/DSA/3.1%20Linked%20List/13.%20Length%20of%20Doubly%20Linked%20List/DLL.jpg" alt="DLL" width="950" height="300"/>

Here the number of nodes in the list is 4, therefore the length of the list will be 4.


#### Approach

- Firstly, we initialize a integer "size" and assign value '0' to it. 
- Then we create a node "temp" and make it equal to head node.
- Then we run a while loop until the temp node becomes NULL and we do the following:

1) make temp node equal to the node at the "next" pointer of the temp node.
2) increment size by 1.


#### Code

```python

class Node:
    def __init__(self):
        self.data = None
        self.next = None
        self.prev = None
 

def push( head, data):
 
    new_node = Node()
    new_node.data = data
    new_node.next = (head)
    new_node.prev = None
    if ((head) != None):
        (head).prev = new_node
    (head) = new_node
    return head
 

def findLength(node):

    size = 0
    while (node != None):
        node = node.next
        size = size + 1
     
    return size
 
# main function

if __name__ == "__main__":

    head = None
    head = push(head, 10)
    head = push(head, 20)
    head = push(head, 30)
    head = push(head, 40)
    head = push(head, 50)
    print(findLength(head))
 
```

#### Output:
&nbsp; __5__

### Complexity Analysis

> Since there is only one while loop that runs at max 'N' times, where 'N' is the number of nodes in the Doubly Linked List, therefore time complexity will be:  ___O(N)___.





##
