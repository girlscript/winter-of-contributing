# C Program to implement Binary Tree using the linked list: 

*In this program, we need to create the binary tree by inserting nodes and displaying nodes in inorder fashion.*

In the binary tree, each node can have at most two children. Each node can have zero, one or two children. Each node in the binary tree contains the following information:

- Data that represents value stored in the node.
- Left that represents the pointer to the left child.
- Right that represents the pointer to the right child.

## Algorithm
1. Define Node class which has three attributes namely: data left and right. Here, left represents the left child of the node and right represents the right child of the node.

2. When a node is created, data will pass to data attribute of the node and both left and right will be set to null.

3. Define another class which has an attribute root.
      -Root represents the root node of the tree and initialize it to null.

4. Insert() will add a new node to the tree:
      - It checks whether the root is null, which means the tree is empty. It will add the new node as root.
      - Else, it will add root to the queue.
      - The variable node represents the current node.
      - First, it checks whether a node has a left and right child. If yes, it will add both nodes to queue.
      - If the left child is not present, it will add the new node as the left child.
      - If the left is present, then it will add the new node as the right child.

5. Inorder() will display nodes of the tree in inorder fashion.
      - It traverses the entire tree then prints out left child followed by root then followed by the right child.
