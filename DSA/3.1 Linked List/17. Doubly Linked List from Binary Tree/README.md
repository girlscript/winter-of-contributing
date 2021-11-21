# Doubly Linked List from Binary Tree

### What is a binary tree ?

    Binary trees are a type of data tree data structure in which a node can only have 0,1 or 2 children only.

### What is a doubly linked list ?

    Linked list is a type of linear data structure in which one object/node along with data, also contains the address of next object/node.   
    Doubly linked list is a type of linked list in which a node points to both the element before it, and after it.

### Problem ❓

    Given a Binary Tree (BT), convert it to a Doubly Linked List(DLL) In-Place.
    
  ![image](https://user-images.githubusercontent.com/54130460/142751623-6278854f-8a6b-40e2-9f89-c578b7f0cf1f.png)


### Approach 💭

```
A binary tree can be converted to a doubly linked list based on in order traversal, 
where left and right pointers point to prev and next element Eg :-

     10 
    /  \
   12   15
   /\    /
 25 30  36

can be converted to the doubly linked list

25 <-> 12 <-> 30 <-> 10 <-> 36 <-> 15

We can use an iterative approach here, keeping the track of head and tail of the doubly linked list, 
recursively solving left subtree, then redirecting the pointers to connect the last element and the current element, 
and finally recursively solving the right subtree
```

### Implementation of above approach 👨‍💻
```

class Node :
    """Class, to define node of the binary tree and dll, has data, left, and right as attributes"""
    def  __init__(self, value):
        self.data = value
        self.left = None
        self.right = None

def binary_tree_to_dll(node, head, tail):
    """This function converts a binary tree to a doubly linked list with recursive approach
       input: tree root or node, head and tail pointer of DLL
       returns : the head and tail of the the linked lists 
    """

    if node == None :
        return head, tail
    
    head, tail = binary_tree_to_dll(node.left, head, tail)  # converting the left subtree

    # updating the tail of the list to point towards current node
    if head == None:
        head = node
    else :
        tail.right = node
        node.left = tail
    tail = node         # shifting the tail to the latest node

    head, tail = binary_tree_to_dll(node.right, head, tail)  # converting the right subtree

    return head, tail

def print_list (head):
    """ iterates over the linked list prints the data elements
        input : head of the linked list
        prints the elements, does not return anything
    """
    while head != None:
        print(head.data, end = " ")
        head = head.right


# DRIVER CODE

if __name__ == "__main__":
    
    root = Node(10)
    root.left = Node(12)
    root.right = Node(15)
    root.left.left = Node(25)
    root.left.right = Node(30)
    root.right.left = Node(36)
       

    head, tail = None, None
    head, tail = binary_tree_to_dll(root, head, tail)
    print("\nEquivaltent doubly linked list : ", end="")
    print_list (head)
    print("\n")
```

### Analysis  ⏳

**Time complexity** : The tree is traversed only once so for n nodes it takes O(n) time, and same time may be used for printing the converted doubly linked list.  
Hence, Total Time Complexity = O(n)

**Space complexity** : The conversion is done in place hence only constant amount of space is required. Therefore,  Total Space Complexity = O(1)

### References
- https://www.techiedelight.com/wp-content/uploads/BT-To-DLL.png
- https://www.geeksforgeeks.org/convert-given-binary-tree-doubly-linked-list-set-3/
- https://www.techiedelight.com/place-convert-given-binary-tree-to-doubly-linked-list/
