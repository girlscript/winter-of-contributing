/*
In HB(k), if k = 1 (if balance factor is one), such a binary search tree is called an AVL tree. That
means an AVL tree is a binary search tree with a balance condition: the difference between left
subtree height and right subtree height is at most 1.
*/

/*
Types of Violations:-

Let us assume the node that must be rebalanced is X. Since any node has at most two children, and
a height imbalance requires that X’s two subtree heights differ by two, we can observe that a
violation might occur in four cases:
    1. An insertion into the left subtree of the left child of X.
    2. An insertion into the right subtree of the left child of X.
    3. An insertion into the left subtree of the right child of X.
    4. An insertion into the right subtree of the right child of X.
  Cases 1 and 4 are symmetric and easily solved with single rotations. Similarly, cases 2 and 3 are
also symmetric and can be solved with double rotations (needs two single rotations).
*/




// C++ program to insert a node in AVL tree
#include<bits/stdc++.h>
using namespace std;
 
// An AVL tree node
class AvlTreeNode
{
    public:
    int data;
    AvlTreeNode *left;
    AvlTreeNode *right;
    int height;
};
 
// A utility function to get maximum
// of two integers
int max(int a, int b);
 
// A  function to get the
// height of the tree
int height(AvlTreeNode *N)
{
    if (N == NULL)
        return 0;
    return N->height;
}
 
// A utility function to get maximum
// of two integers
int max(int a, int b)
{
    return (a > b)? a : b;
}
 
/* Helper function that allocates a
   new node with the given data and
   NULL left and right pointers. */
AvlTreeNode* newAvlTreeNode(int data)
{
    AvlTreeNode* node = new AvlTreeNode();
    node->data = data;
    node->left = NULL;
    node->right = NULL;
    node->height = 1; // new node is initially
                      // added at leaf
    return(node);
}
 
// A utility function to right
// rotate subtree rooted with y
// See the diagram given above.
AvlTreeNode *RotateRight(AvlTreeNode *y)
{
    AvlTreeNode *x = y->left;
    AvlTreeNode *T2 = x->right;
 
    // Perform rotation
    x->right = y;
    y->left = T2;
 
    // Update heights
    y->height = max(height(y->left),
                    height(y->right)) + 1;
    x->height = max(height(x->left),
                    height(x->right)) + 1;
 
    // Return new root
    return x;
}
 
// A utility function to left
// rotate subtree rooted with x
// See the diagram given above.
AvlTreeNode *RotateLeft(AvlTreeNode *x)
{
    AvlTreeNode *y = x->right;
    AvlTreeNode *T2 = y->left;
 
    // Perform rotation
    y->left = x;
    x->right = T2;
 
    // Update heights
    x->height = max(height(x->left),   
                    height(x->right)) + 1;
    y->height = max(height(y->left),
                    height(y->right)) + 1;
 
    // Return new root
    return y;
}
 
// Get Balance factor of node N
int getBalance(AvlTreeNode *N)
{
    if (N == NULL)
        return 0;
    return height(N->left) - height(N->right);
}
 
// Recursive function to insert a data
// in the subtree rooted with node and
// returns the new root of the subtree.
AvlTreeNode* insert(AvlTreeNode* node, int data)
{
    /* 1. Perform the normal BST insertion */
    if (node == NULL)
        return(newAvlTreeNode(data));
 
    if (data < node->data)
        node->left = insert(node->left, data);
    else if (data > node->data)
        node->right = insert(node->right, data);
    else // Equal datas are not allowed in BST
        return node;
 
    /* 2. Update height of this ancestor node */
    node->height = 1 + max(height(node->left),
                        height(node->right));
 
    /* 3. Get the balance factor of this ancestor
        node to check whether this node became
        unbalanced */
    int balance = getBalance(node);
 
    // If this node becomes unbalanced, then
    // there are 4 cases
 
    // Left Left Case
    if (balance > 1 && data < node->left->data)
        return RotateRight(node);
 
    // Right Right Case
    if (balance < -1 && data > node->right->data)
        return RotateLeft(node);
 
    // Left Right Case
    if (balance > 1 && data > node->left->data)
    {
        node->left = RotateLeft(node->left);
        return RotateRight(node);
    }
 
    // Right Left Case
    if (balance < -1 && data < node->right->data)
    {
        node->right = RotateRight(node->right);
        return RotateLeft(node);
    }
 
    /* return the (unchanged) node pointer */
    return node;
}
 
// A utility function to print preorder
// traversal of the tree.
// The function also prints height
// of every node
void printPreOrder(AvlTreeNode *root)
{
    if (root == NULL)
        return;
 
    /* first print data of node */
    printf("%d  ", root->data);
 
    /* then recur on left sutree */
    printPreOrder(root->left);
 
    /* now recur on right subtree */
    printPreOrder(root->right);
    
}
 
// Driver Code
int main()
{
    AvlTreeNode *root = NULL;
     
    /* Constructing tree given in
    the above figure */
    root = insert(root, 1);
    root = insert(root, 2);
    root = insert(root, 3);
    root = insert(root, 4);
    root = insert(root, 5);
    root = insert(root, 2);
     
    /* The constructed AVL Tree would be
             4
            / \
           2   5
         /  \    \
        1    3     6
    */
    cout << "Preorder traversal of the "
            "constructed AVL tree is \n";
    printPreOrder(root);
     
    return 0;
}
