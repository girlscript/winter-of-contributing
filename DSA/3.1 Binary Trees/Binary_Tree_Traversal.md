# Binary Tree Traversals <br>
Tree traversal means visiting all nodes of the tree. We always start traversing a tree from the root node. There are various ways to traverse or visit each node in a given tree. The following are the three different ways of traversal:
- Inorder Traversal
- Preorder Traversal
- Postorder Traversal

Consider a Tree as - 
<p align ="center">
    <img src = "https://github.com/saloni33/winter-of-contributing/blob/main/DSA/3.1%20Binary%20Trees/tree-img.jpeg" width="500" height="300">
</p>

## Inorder Traversal - <br>
In this traversal, we first visit the left subtree, then the root, and after that the right subtree. For the given tree, the inorder traversal will be -  <br>
4 2 5 1 3 <br>
Code for inorder traversal -  <br>

```
void inOrder(struct Node *root)
{
    if(root != NULL)
    {
        inOrder(root->left);
        cout<<root->data<<" ";
        inOrder(root->right);
    }
}
```

## Preorder Traversal -  <br>
In this traversal, we first visit the root, the left subtree, and finally the right subtree. For the given tree, the preorder traversal will be - <br>
1 2 4 5 3 <br>
Code for preorder traversal - <br>

```
void preOrder(struct Node* root)
{
    if(root != NULL)
    {
        cout<<root->data<<" ";
        preOrder(root->left);
        preOrder(root->right);
    }
}
```

## Postorder Traversal - <br>
As the name suggests, we visit the root at last. First, we visit the left subtree, then the right subtree, and lastly the root. For the given tree, the preorder traversal will be - <br>
4 5 2 3 1 <br>
Code for postorder traversal - <br>

```
void postOrder(struct Node* root)
{
    if(root != NULL)
    {
        postOrder(root->left);
        postOrder(root->right);
        cout<<root->data<<" ";
    }
}
```




