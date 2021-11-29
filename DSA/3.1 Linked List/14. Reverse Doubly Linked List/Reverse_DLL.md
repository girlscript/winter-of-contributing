# __#Reverse a Doubly Linked List.__

### Description

You are given the head of a doubly linked list and you have reverse the whole list, such that the last node becomes the new head and the first node becomes the tail.


#### Example:

If a list is like this: 

 __[1] < == > [2] < == > [3] < == > [4]__

then the reverse list will be:

 __[4] < == > [3] < == > [2] < == > [1]__


#### Approach

- Firstly, we initialize an empty node __"temp"__ which will help in swaping the prev and next pointer of the nodes. 
- Then we will initialize a new node __"current"__ and make it equal to the Head node.
- Then we run a while loop until the _"current"_ node becomes NULL and we do the following:

1) swap the prev and next pointer of the current node
2) make current node equal to the previous node (node that prev pointer points to).


#### Code

```python

class Node:
    def __init__(self):
        self.data = None
        self.next = None
        self.prev = None


def push(head, data):

    new_node = Node()
    new_node.data = data
    new_node.next = (head)
    new_node.prev = None
    if ((head) != None):
        (head).prev = new_node
    (head) = new_node
    return head


def reverse(head):
  temp = None
  current = head
  HEAD = None

  # Swap next and prev for all nodes of the doubly linked list
  while current is not None:
    temp = current.prev
    current.prev = current.next
    current.next = temp
    HEAD = current
    current = current.prev

  return HEAD

def printList(node):
  while(node is not None):
      print(node.data)
      node = node.next

# main function

if __name__ == "__main__":

  head = None
  head = push(head, 50)
  head = push(head, 40)
  head = push(head, 30)
  head = push(head, 20)
  head = push(head, 10)
  printList(head)
  print("\n")
  printList(reverse(head))


```

#### Output:

__50
40
30
20
10__

### Complexity Analysis

> Since there is only one while loop that runs at max 'N' times, where 'N' is the number of nodes in the Doubly Linked List, therefore time complexity will be:  ___O(N)___.





##