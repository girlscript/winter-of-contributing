# Tress

As we all know tree is non-linear data structure which is used to represent data containing a hierarchical relationalship between elements.

There are basically five types of trees:-

1. General Tree
2. Binary Tree
3. Binary Search Tree 
4. AVL Tree
5. B Tree

## Binary Trees

A binary tree *T* is defined as a finite set of elements, called nodes such that:

1. T is an empty or null tree
2. T contains a different node R, known as the root of *T*, and the remaining nodes of *T* form an ordered pair of disjoint binary trees T1 and T2
> Here if T does contain a root R, then T1 and T2 are called left and right subtrees of R respectively.
> 
> If T1 is non-empty then it root is called the left successor of R, similarly T2 is non-empty then its root is called the right successor of R.

A Binary Tree node contains:-

- Data
- Pointer to left child
- Pointer to right child

Let's understand this concept diagramatically

>                A
>               / \
>             B   C
>            / \  / \
>            D  E G   H
>              /     / \
>             F     J   K
>                  /
>                 L

Here B is left successor and C is right successor.

struct node
{
    int data;
    struct node* left;
    struct node* right;
};

### Properties of Binary Tree

- Any node N in a binary tree T has either 0, 2 or 1.

- Binary tree T and T' are said to be similar if they have the same structures or, in other words, if they have same shape. The trees are said to be copies if they are similar and they have the same contents at corresponing nodes.

- The Maximum number of nodes of a binary tree height ‘h’ is 2h+1 – 1.

- The maximum number of nodes at level ‘l’ in a binary tree is 2l. 

- In Binary tree whenever every node has 0 or 2 children, then number of leaf nodes is always one more than the nodes with two children.

- A Binary Tree with L leaves has at least | Log2L |+ 1   levels 

- In a Binary Tree with N nodes, minimum possible height or the minimum number of levels is Log2(N+1) - 1

## Types of Binary Trees

1. Full Binary Tree: The proper or full Binary tree is a special type of binary tree in which every parent node/internal node has either two or no children.

>           1
>           / \
>          2   3
>         / \    
>        4   5   
>           / \
>          6   7

2. Complete Binary Tree: In this binary tree all the levels are completely filled except the possiblity of the lowest one, which is filled from the left.

***A complete binary tree is just like a full binary tree, but with two differences***

- *All the leaf elements must be lean towards the left.*
- *The last leaf element might not have a right sibling. *

>            1
>           / \
>          2   3
>         /|    |
>        4 5    6  

3. Perfect Binary Tree: A perfect binary tree is a kind of binary tree in which every internal node has exactly two child nodes and all the leaf nodes are at the same level.

>            1
>           / \
>          2   3
>         /|    |\
>        4 5    6  7 
         
4. Balanced Binary Tree: The balanced binary tree or height-balanced binary tree, is defined as a binary tree in which the height of the left and right subtree of any node differ by not more than 1.

Conditions for balanced binary tree are

- the left and rigth subtree should be balanced

- difference between the left and the right subtree for any node should not be more than one.

>            1
>           / \
>          2   3
>         / \    
>        4   5   

### Example:-

> Creating a simple tree with 4 nodes
>
> #include <bits/stdc++.h>
> using namespace std;
> 
> struct Node {
>    int data;
>    struct Node* left;
>    struct Node* right;
> 
>    // val is the key or the value that
>    // has to be added to data part
>    Node(int value)>
>    >{
>     >   data = value;
> 
>        // Left, right child for node
>        // will be initialized to null
>        left = NULL;
>        right = NULL;
>    }
> };
> int main()
> {
> 
>    /*create root*/
>    struct Node* root = new Node(1);
>    /* following is the tree after the above statement
> 
>             1
>            / \
>          NULL NULL
>    */
> 
>    root->left = new Node(2);
>    root->right = new Node(3);
>    /* 2 and 3 become left and right children of 1 respectively
>                    1
>                  /    \
>                 2       3
>               /  \     /  \
>            NULL NULL  NULL NULL
>    */
> 
>    root->left->left = new Node(4);
>    /* 4 become left child of 2
>               1
>            /     \
>           2       3
>          / \     / \
>         4  NULL NULL NULL
>        / \
>     NULL NULL
>    */
>
>    return 0;
> }

Output:

>       1 6
>       / \
>      2   3
>     /
>    4

Reference: https://www.programiz.com/
