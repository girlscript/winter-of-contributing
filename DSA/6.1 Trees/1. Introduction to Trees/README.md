# Introduction to Trees

* A tree is a non-linear data structure which is used to represent hierarchical data.

* Tree data structure can be defined as a collection of entities called nodes linked together to simulate a hierarchy.

![alt text](https://static.javatpoint.com/ds/images/tree.png)

* Each node will contain some data and may contain link or reference to some other nodes that can be called its children.

## Important Terms 

Some important terms used in trees are:

**Root Node:** The topmost node in the tree is called root of the tree. i.e, Node A.

**Child Node:** All immediate successors of a node are called its children.

**Parent Node:** Immediate predecessor of a node is called its parent node.

**Sibling:** Children of same parent are called siblings. i.e, Node F and G are siblings.

**Leaf Nodes:** Any node in the tree that does not have a child is called leaf nodes. i.e., Nodes F and G are leaf nodes.

**Edge:** Edge is a connection between one node to another. i.e., Line between A and C is edge.

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
* In tree we can only go in one direction. i.e, In above example, from Node A we can go to Node C, but from Node C we cannot go to Node A.

## Applications:

* Storing naturally hierarchical data. e.g. File system .
* Organize data for quick search, insertion and deletion. e.g. Binary Search Trees.
* A special kind of Tree - Trie is used to store dictionary.
* Used in Network Routing Algorithm.

## Types of Trees:

* **General Tree:** A General Tree is tree in which there is no restriction on the number of children a node can contain.
![alt text](https://static.javatpoint.com/ds/images/types-of-tree1.png)

* **Binary Tree:** The most common type of tree is Binary Tree. A tree in which each node can have at most two children is called a Binary Tree.

![alt text](https://static.javatpoint.com/ds/images/types-of-tree2.png)

Binary trees are further divided into many types:

* **Full Binary Tree:**  A Binary tree is called Full Binary Tree if each node can have either 2 or 0 children. It is also known as Proper Binary Tree.

               18
            /     \  
          40       30  
                   /  \
                 100   40

* **Complete Binary Tree:** In Complete Binary Tree, all levels except possibly the last are completely filled and all nodes are as left as possible.

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

* **Balanced Binary Tree:** A binary tree in which difference between height of left and right subtree for every node is not more than k (mostly 1), is called Balanced Binary Tree.

               df = |height of left child - height of right child|
	       
	                                               1    ---> df = 1
                                               /       \  
                                   df=0 <---  2         3  ---> df = 0
                                            /  \       
                                df=0 <---  4    5 ---> df = 0  

* **Binary Search Tree:** A binary tree in which for each node, value of all the nodes in left subtree is lesser or equal and value of all the nodes in right subtree is greater, is called Binary Search Tree.

                                 8
                             /       \  
                            3         10  
                          /  \          \
                         1    6          14
			         / \   /
			        4   7  13


## Implementation

* The most common ways of implementing trees is dynamically created nodes linked using pointers or references, just like Linked List.

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
