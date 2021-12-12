# **Diamter Of A Binary Tree**

- The longest distance between any two nodes of a binary tree is known as the diameter of the binary tree

<br />

## **Approach :**

- Try to think of a recursive solution, try to break the problem into a number of smaller subproblems.
- Notice that we can have 3 cases in total :
  - The diameter passes entirely through the right subtree.
  - The diameter passes through the root.
  - The diameter passes entirely through the left subtree.

<br />

```txt
Case I : The diameter lies entirely in the right subtree

                    (Root)
                   /      \
    ************* /        \
   (Right Subtree)          (Left Subtree)
    *************

Case II : The diameter includes the root node

                    ******
                   *(Root)*
                 * / **** \ *
    ************* / *    * \ ************
   (Right Subtree) *      * (Left Subtree)
    ***************         *************

Case III : The diameter lies entirely in the left subtree

                    (Root)
                   /      \
                  /        \ ************
   (Right Subtree)          (Left Subtree)
                             ************

```

<br />

- Let us consider the following example
  
```txt
                                        (8)
                                       /   \
                                   (10)     (3)
                                  /    \       \
                               (1)      (6)     (14)
                                       /   \        \
                                    (9)     (7)      (13)
```

<br />

- The diameter for this tree is going to be : 6 (since the most distant node pairs are : (9,13) and (7,13) and for both the pairs the diameter comes out to be 6)
- The height of this tree is 4

<br />

- **Our answer will be the maximum ans of all the three cases**
- Diameter of the left subtree is : diameter(root -> left)
- Diameter path that includes root node : height of the right subtree + height of the left subtree
- Diameter of the right subtree : diameter(root -> right)

## **How do we find the height of the tree ?**

- We start traversing the tree, if the root node is NULL we return 0
- Otherwise, we make two variables, heightLeftSubtree and heightRightSubtree
- We assume that recursion will find the height of the left and the right subtrees and finally we return
- **max(heightLeftSubtree, heightRightSubtree) + 1**

<br />

- **Worst case Time Complexity of the height function :**
  - To calculate the height of a node we need to traverse all its children atleast once, hence it will take O(N) time
  - Repeating the above process for all the nodes will take O(N^2) time

<br />

- **However, this is not the most efficient approach, since we need to call on the height function again and again which in turn adds to our complexity**

## **Efficient approach :**

- What we will do is, we will start traversing from the leaf node move towards the root node and we will return the height and the diameter of all the nodes.
- For this purpose, we will create a class "Pair" which will have two public data members, height and diameter, we will use an instance of this class for storing and returning the height of all the nodes of the tree.
- How is this approach going to reduce our complexity? 
- This approach will reduce the additional time required to calculate the height at each level again and again.
- What we will do is, for a given node, if it is a leaf node(i.e. both its left and the right pointers are pointing to NULL) we will return its height as 0 and diameter as 0, but for non-leaf nodes, we will return the height as max(heightLeftSubtree, heightRightSubtree) + 1, and the diameter as max(heightLeftSubtree,heightRightSubtree,diameter(root->left),diameter(root->right))
- The optimized time complexity is going to be : O(N).

<br />

## **Code :**

```C++
#include <iostream>
#include <queue>

using namespace std;

class Node
{
 public:
    int data;
    Node*left;
    Node*right;
    
    Node(int d)
    {
        data=d;
        right=NULL;
        left=NULL;
    }
};

class Pair
{
public:
    int height;
    int diameter;
    
};

Node*build()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    
    Node*root=new Node(d);
    root->left=build();
    root->right=build();
    
    return root;
}

void printBFS(Node*root)
{   
    cout<<"The tree is :"<<endl;
    queue <Node*> q;
    
    q.push(root);
    q.push(NULL);
    
    while(!q.empty())
    {
        Node*f=q.front();
        if(f==NULL)
        {
            cout<<endl;
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        
        else 
        {
            cout<<f->data<<" ";
            q.pop();
            
            if(f->left)
            {
                q.push(f->left);
            }
            if(f->right)
            {
                q.push(f->right);   
            }
        }
    }
    
    return ;
}

int height(Node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    
    return 1+max(height(root->left),height(root->right));    
}

int diameter(Node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    
    int h1=height(root->left);
    int h2=height(root->right);
    
    int option1=h1+h2;
    int option2=diameter(root->left);
    int option3=diameter(root->right);
    
    return max(option1,max(option2,option3));
}

Pair diameterOptimized(Node*root)
{   
    Pair p;
    
    if(root==NULL)
    {
        p.diameter=0;
        p.height=0;
        
        return p;
    }
    
    //otherwise
    
    Pair left=diameterOptimized(root->left);
    Pair right=diameterOptimized(root->right);
    
    p.height=max(left.height,right.height)+1;
    p.diameter=max(left.height+right.height,max(left.diameter,right.diameter));
    
    return p;
}

int main()
{
    Node*root=build();
    
    printBFS(root);
    cout<<endl;
    
    cout<<"Diamter using unoptimised approach : "<<diameter(root)<<endl;
    
    Pair p=diameterOptimized(root);
    cout<<"Diameter using optimised approach : "<<p.diameter<<endl;
    cout<<"The height of the tree is : "<<p.height<<endl;
    
    return 0;
}
```

<br />

## **Output :**

<br />

![image](https://user-images.githubusercontent.com/34866732/136702877-f0c368c5-adec-446e-a5c1-a4a0a49f1bde.png)