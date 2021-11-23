# Trees

As we all know a tree is a non-linear data structure that is used to represent data containing a hierarchical relationship between elements.

There are five types of trees:-

1. General Tree
2. Binary Tree
3. Binary Search Tree 
4. AVL Tree
5. B Tree

## Binary Trees

A binary tree *Z* is defined as a finite set of elements, called nodes if:

- The root of the binary tree Z is a distinct node R, and the other nodes of Z form an ordered pair of disjoint binary trees Z1 and Z2.
- The binary tree is an empty or null tree.
  
  Here if Z does contain a root R, then Z1 and Z2 are called left and right subtrees of R respectively.  
  If Z1 is non-empty then its root is called the left successor of R, similarly, Z2 is non-empty then its root is called the right successor of R.

A Binary Tree node contains:-

- Data
- Pointer to left child
- Pointer to the right child

Let's understand this concept diagrammatically

                A
               / \
             B     C
            / \    / \
            D  E  G   H
              /     / \
             F     J   K
                  /
                 L

Here B is the left successor and C is the right successor.  

    struct node
    {
    int data;
    struct node* left;
    struct node* right;
    };

### Properties of Binary Tree

- Any node N in a binary tree T has either 0, 2, or 1.

- If two binary trees T and T' have the same structure or shape, they are said to be comparable. If the binary trees have the same contents at the relevant nodes, they are considered to be copies.

- The Maximum number of nodes of a binary tree height h' is 2h+1 – 1.

- The maximum number of nodes at level ‘I'm in a binary tree is 2l. 

- A Binary Tree with L leaves has at least | Log2L |+ 1   levels 

- In a Binary Tree with N nodes, the minimum possible height or the minimum number of levels is Log2(N+1) - 1

## Types of Binary Trees

1. Full Binary Tree: The full Binary tree is a special type of binary tree in which every parent node/internal node has either 2 or 0 children.

           1
           / \
          2   3
         / \    
        4   5   
           / \
          6   7

2. Complete Binary Tree: Except for the lowest level, which is filled from the left, all of the levels are filled.

***A complete binary tree is just like a full binary tree, but with two differences***

- *All the leaf elements must be lean towards the left.*
- *The last leaf element might not have the right sibling.*

            1
           / \
          2   3
         /|    |
        4 5    6  

3. Perfect Binary Tree: A perfect binary tree is a kind of binary tree in which every internal node has exactly 2 child nodes and all the leaf nodes are at the same level.

            1
           / \
          2   3
         /|    |\
        4 5    6  7 
         
4. Balanced Binary Tree: The height-balanced binary tree, is a binary tree in which the height of both subtrees from any node differs only up to 1.

Conditions for a balanced binary tree are

- Both subtrees should be balanced

- Difference between the left and the right subtree for any node should not be more than one.

            1
           / \
          2   3
         / \    
        4   5   

### Example:-

 Creating a simple tree with 4 nodes

    #include <bits/stdc++.h>
    using namespace std;
  
    struct Node
    {
    int data;
    struct Node* left;
    struct Node* right;
 
    // val is the key that has to be added to the data part
    Node(int value)>
     {
         data = value;
 
        // Both child for node will be initialized to null
        left = NULL;
        right = NULL;
        }
        };
        int main()
        {
 
    /*create root*/
    struct Node* root = new Node(1);
   
    root->left = new Node(2);
    root->right = new Node(3);
    /* 2 and 3 become left and right children of 1 resp.
                    1
                  /    \
                 2       3
               /  \     /  \
            NULL NULL  NULL NULL
    */
 
    root->left->left = new Node(4);
    /* 4 will become the left child of 2
               1
            /     \
           2       3
          / \     / \
         4  NULL NULL NULL
        / \
     NULL NULL
    */

    return 0;
    }

Output:

       1 6
       / \
      2   3
     /
     4

Reference: For more examples visit [Programiz](https://www.programiz.com/dsa/binary-tree)
