Binary tree are non linear data structure. In binary tree each node has either 0,1,2 child. To traverse the given binary tree different algorithems are used<br>
1. level order traversal
2. Depth first serch traversal

<br>In this we will discuss only DFS traversal.<br>
there are 3 DFS techniques:-<br>
1. preorder travrsal
2. Inorder traversal
3. postorder traversal
let the tree definition be
```cpp
struct node
{  int data;
   node *right, *left;
};
```

# Preorder traversal
following points shoud be in mind while doing preorder traversal
- print the root node.
- traverse the left sub tree in preorder.
- traverse the right sub tree in preprder.

following recursive program will help in understanding the preorder traversal
```cpp
void preorder(struct node* temp)
{  if(temp==NULL)
     return;
   cout<<temp->data<<" ";
   preorder(temp->left);
   preorder(temp->right);
}
```
# Inorder traversal
following points shoud be in mind while doing iorder traversal
- traverse the left sub tree in inorder.
- print the root node.
- traverse the right sub tree in inorder.

following recursive program will help in understanding the inorder traversal
```cpp
void inorder(struct node* temp)
{  if(temp==NULL)
     return;
   inorder(temp->left);
   cout<<temp->data<<" ";
   inorder(temp->right);
}
```
# postorder traversal
following points shoud be in mind while doing postorder traversal
- traverse the left sub tree in postorder.
- traverse the right sub tree in postorder.
- print the root node.

following recursive program will help in understanding the postorder traversal
```cpp
void postorder(struct node* temp)
{  if(temp==NULL)
     return;
   postorder(temp->left);
   postorder(temp->right);
   cout<<temp->data<<" ";
}
```
click on the [link](https://examradar.com/wp-content/uploads/2016/10/pre-post-inorder-and-level-order.png) to see example.

