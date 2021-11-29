# Lowest Common Ancestor of Two Nodes

## Problem
Given a binary tree, with all unique nodes, find the lowest common ancestor (LCA) of two given nodes in the tree.

## Explanation
Say there are two given nodes of a binary tree, P and Q. The lowest common ancestor of P and Q is defined as the lowest node in the tree that has both P and Q as it's descendants. Note that a node a allowed to be a descendant of itself.

## Example

Input: [3, 5, 1, 6, 2, NULL, 8]

Given: P = 5 and Q = 1

```
         3
        / \
       5   1
      / \   \
     6   2   8
```
Output: The LCA of 5 and 1 is **3**.

## Approach

The problem can have two major approaches:

* First method: **Brute force Approach.** This is done by storing paths from root to node 1 and root to node 2. This methods consumes O(n) time complexity.
    ### Algortihm
    1. Create two vectors.
    2. Store path from root to node 1 in vector1.
    3. Store path from root to node 2 in vector 2.
    4. Traverse the vectors till elements are same.
    5. Return the last same element.

### Code (Method 1)

```c++
bool Path(Node *root, vector<int> &path, int k){
  
    if (root == NULL) 
      return false;
 
    path.push_back(root->key);
 
    if (root->key == k)
        return true;
 
    if ( (root->left && Path(root->left, path, k)) ||
         (root->right && Path(root->right, path, k)) )
        return true;

    path.pop_back();
    return false;
}

int LCA(Node *root, int n1, int n2){
    vector<int> p1, p2;

    if ( !Path(root, p1, n1) || !Path(root, p2, n2))
          return -1;

    int i;
    for (i = 0; i < p1.size() && i < p2.size() ; i++)
        if (p1[i] != p2[i])
            break;
    return p1[i-1];
}
 
```

* Second method: **Recursive Approach**. This method can be adopted to find LCA in a single traversal. The time complexity remains O(n).
    ### Algorithm
    1. Traverse tree from root.
    2. If root == node1 or root == node2, then return root.
    3. Recursively call the function for left and right subtrees.
    4. If both the nodes are in left or right subtree exclusively then we will return the left or right subtree respectively.
    5. If current node is NULL then we have reached the end of tree.

### Code (Method 2)

```C++
Node* LCA2(Node *curr, Node *node1, Node *node2){

     if(curr==NULL)
        return NULL;
     else if(curr==node1 || curr==node2)
        return curr;

     Node *left_subtree = LCA2(curr->left_Node, node1, node2);
     Node *right_subtree = LCA2(curr->right_Node, node1, node2);

     if(left_subtree!=NULL && right_subtree!=NULL)
        return curr;
     else if(left_subtree!=NULL)
        return left_subtree;
     else
        return right_subtree;

     return NULL;
}
```

## Complexity Analysis

* Time Complexity: O(n)
* Space Complexity: O(n)

The time complexity for brute force and recursive approach stays the same as the tree is traversed maximum twice.

But, in recursive approach space complexity becomes O(1) as no extra space is used.
