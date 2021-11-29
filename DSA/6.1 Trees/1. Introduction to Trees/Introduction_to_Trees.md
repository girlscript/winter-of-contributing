
# Introduction to Tree

* A tree is a non-linear data structure which is used to represent hierarchical data.

* Tree data structure can be defined as a collection of entities called nodes linked together to simulate a hierarchy.

![alt text](data:image/png;base64,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)

* Each node will contain some data and may contain link or reference to some other nodes that can be called its children.

## Important Terms 

Some important terms used in trees are:

**Root Node:** The topmost node in the tree is called root of the tree. i.e, Node P.

**Child Node:** All immediate successors of a node are called its children.

**Parent Node:** Immediate predecessor of a node is called its parent node.

**Sibling:** Children of same parent are called siblings. i.e, Node A and B are siblings.

**Leaf Nodes:** Any node in the tree that does not have a child is called leaf nodes. i.e., Nodes H and I are leaf nodes.

**Edge:** Edge is a connection between one node to another. i.e., Line between P and R is edge.

**Subtree:** Descendants of a node represent subtree.

**Internal Nodes:** Nodes with atleast one child is called Internal Nodes.

**Height of the tree:** Height of the root node is the height of a tree.

**Height of a Node:** Number of edges in the longest path from the node to a leaf node is called height of a Node.

**Depth of a Node:** Number of edges in path from root to that node is called Depth of a Node. 

![alt text](https://d1m75rqqgidzqn.cloudfront.net/wp-data/2020/10/06115257/image-9.png)

## Properties:

* Tree is a recursive data structure.
* In a tree with n Nodes, there are exactly n-1 links or edges.
* Height and Depth of a tree may or may not be same.
* In tree we can only go in one direction. i.e, In above example, from Node P we can go to Node R, but from Node R we cannot go to Node P.

## Applications:

* Storing naturally hierarchical data. e.g. File system .
* Organize data for quick search, insertion and deletion. e.g. Binary Search Trees.
* A special kind of Tree - Trie is used to store dictionary.
* Used in Network Routing Algorithm.

## Types of Tree:

* **General Tree:** A General Tree is tree in which there is no restriction on the number of children a node can contain.
![alt text](https://static.javatpoint.com/ds/images/types-of-tree1.png)

* **Binary Tree:** The most common type of tree is Binary Tree. A tree in which each node can have at most two children is called a Binary Tree.
![alt text](https://static.javatpoint.com/ds/images/types-of-tree2.png)

Binary trees are further divided into many types:

* **Full Binary Tree:**  A Binary tree is called Full Binary Tree if each node can have either 2 or 0 children.

* **Complete Binary Tree:** All levels except possibly the last are completely filled and all nodes are as left as possible.

               18
            /       \  
          15         30  
         /  \        /  \
       40    50    100   40
      /  \   /
      8   7  9 

* **Perfect Binary Tree:** A Binary Tree in which all levels are completely filled is called Perfect Binary Tree.

              18
           /       \  
         15         30  
        /  \        /  \
      40    50    100   40

* **Balanced Binary Tree:** A binary tree in which difference between height of left and right subtree for every node is not more than k (mostly 1) is called Balanced Binary Tree.

* **Binary Search Tree:** A binary tree in which for each node, value of all the nodes in left subtree is lesser or equal and value of all the nodes in right subtree is greater, is called Binary Search Tree.


## Implementation

* The most common ways of implementing tree is dynamically created nodes linked using pointers or references, just like Linked List.

```cpp 
struct Node {
	int data;
	struct Node* left;
	struct Node* right;
};
```
![alt text](https://static.javatpoint.com/ds/images/tree4.png)

* This particular structure of Node can only be used for Binary Tree.

## Credits and References:

https://www.javatpoint.com/tree

https://www.mygreatlearning.com/blog/understanding-trees-in-data-structures/

https://algorithmtutor.com/Data-Structures/Tree/Tree-ADT/