# Flatten a binary tree into linked list

## Problem

Given the root node of a binary tree, flatten it into a linked list in-place.


## Example

Given Binary Tree:

Input: [1, 2, 5, 3, 4, NULL, 6]

```
        1
      /   \
     2     5
   /  \     \  
  3    4     6    
```

After flattening it should look like:

Output: [1, NULL, 2, NULL, 3, NULL, 4, NULL, 5, NULL, 6]

```
  1
   \
    2
     \
      3
       \
        4
         \
          5
           \
            6
```

## Points to Note

* The linked list is the **pre-order traversal** of tree i.e. first the root is traversed then the left subtree and then the right subtree.

* After flattening, the left child pointer of each node is `NULL`.

* *In place* means that no auxiliary space is allowed.

## Approach

As no extra space is allowed, we have to attach and deattach the existing nodes to flatten the tree.

### Algorithm:

1. Recursively flatten the left and right subtree.

2. Store the left tail and right tail i.e.the last elements of left and right subtree respectively.

3. Store right subtree in temporary variable and make the left subtree as right subtree.

4. Join right subtree with left tail.

5. Return the right tail recursively.

## Code

```C++
#include <iostream>
using namespace std;
 
struct Node {
    int data;
    Node *left, *right;
    Node(int val){
        data = val;
        left = right = NULL;
    }
};
 
void flatten(Node* root) {
    
    if (root == NULL || (root->left == NULL &&
                        root->right == NULL))
        return;
    
    if (root->left != NULL) {
        flatten(root->left);

        Node* temp = root->right;
        root->right = root-> left;
        root->left = NULL;
 
        Node* t = root->right;

        while (t->right != NULL) 
            t = t->right;
        
        t->right = temp;
    }
 
    flatten(root->right);
}

void inorder(Node* root) {    //inorder will be printed
   
    if (root == NULL)
        return;

    inorder(root->left);
    cout << root->data <<' ';
    inorder(root->right);
}
 
int main()
{
    /*    1
        /   \
       2     5
      / \     \
     3   4     6 */

    Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(5);
    root->left->left = new Node(3);
    root->left->right = new Node(4);
    root->right->right = new Node(6);
 
    flatten(root);
    inorder(root);

    return 0;
}
```

## Complexity Analysis

* Time Complexity: O(n) as each node is visited exactly once.

* Space Complexity: O(1) as no extra space is used.

## Resources

* [Apna College](https://www.youtube.com/watch?v=WR6-DrAsNpc&list=PLfqMhTWNBTe0b2nM6JHVCnAkhQRGiZMSJ&index=104&t=35s)