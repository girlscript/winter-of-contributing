# Lowest Common Ancestor of a Binary Tree

## Binary Tree
A Hierarchical data structure that stores data in the form of a tree and can have either **0,1 or 2 children** at each node.
It works on the rule that a node which has lesser value that the root is placed on the left subtree and the one with more value 
than the root is kept on the right subtree.

## Components of the Tree:
- Pointer to left subtree.
- Data element.
- Pointer to right subtree.

## Lowest Common Ancestor(LCA)
The Lowest Common Ancestor (LCA) of two nodes in a rooted tree is the lowest (deepest) node that 
is an ancestor of both the nodes.

**Finding the LCA** - At first we traverse the tree and match nodes n1 and n2 if we get one of the 
nodes in the left subtree and another one in the right subtree,then the root is the LCA.

```cpp
//Header files
#include<bits/stdc++.h>
using namespace std;

//Code for Tree node
struct Node{
  int data;
  Node* left;
  Node* right;
};

//Code for creating a new node.
Node* create(int x){
  Node* temp=new Node;
  temp->data=x;
  temp->left=NULL;
  temp->right=NULL;
  return temp;
}


//function to find lowest common ancestor.
Node *LCA(Node* root ,int n1 ,int n2 )
{
   if(root==NULL)
      return NULL;
   if(root->data==n1||root->data==n2)
      return root;
   
   Node* left=LCA(root->left,n1,n2);
   Node* right=LCA(root->right,n1,n2);
   
   if(!left&&!right)
      return NULL;
   if(left&&right)
      return root;
   if(!left&&right)
      return right;
   if(!right&&left)
      return left;
   
}


//Main fuction.
int main(){
  Node* root=create(11);
  root->left=create(20);
  root->left->right=create(31);
  root->left->right->left=create(49);
  root->left->right->right=create(54);
  root->right=create(56);
  root->right->left=create(60);
  root->right->left->right=create(73);
  root->right->right=create(76);
  Node* temp=LCA(root,73,76);
  if(temp)
  cout<<"LCA of node 73 and 76 is: "<<temp->data<<endl;
  else cout<<" Not found "<<endl;
}
```

## Output
```
LCA of node 73 and 76 is: 56
```
Time Complexity - O(n)
Space Complexity - O(1)

## Benefits of a Binary Tree
- The search operation in a binary tree is faster as compared to other trees.
- Converting postfix and prefix expressions are possible using binary trees.
- Graph traversal also uses binary trees.
- Easier to find the maximum and minimum elements.
