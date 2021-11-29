# Nodes at Distance K in Binary Tree

## Problem

Given a binary tree, the value of a target node 'target', and an integer K, return an array of the values of all nodes that are at distance k from the target node.

## Example

Given binary tree:

```
            3
           / \
          5   1
         / \   \
        2   4   6 
```
Target Node = 3
K = 2

In this case, the answer will be **[2, 4, 6]** as these three nodes are at a distance 2 from target.

Note that an array of all these values will be returned by the function.

## Approach

Let us consider 2 cases:

1. When the target node is root node. In this case will will traverse the tree recursively while decrementing the value of K. All nodes when K = 0 will be added in the array.

2. Target node is a leaf node. In this case the solution node may be ancestor of the target node. We traverse through all ancestors to the target node and note the K-distanced nodes.

## Algorithm

1. Traverse every node with a depth-first search. 

2. If target node is root node, traverse the tree recursively. If target node

3. Keep decrementing the value of K by 1. If target node

4. When `K = 0`, add node to the answer.

5. If `NULL` is reached then simply return.

6. In case of target node not being the root node, there are 4 cases:

   * If node == target, add nodes that are at distance K in the subtree rooted at target.

   * If target is in the left branch of node, say at a distance L+1, then look for nodes that are distance K - L - 1 in the right branch.

   * If target is in the right branch of node, the algorithm proceeds similarly.

   * If target isn't in either branch of node, then simply return.

7. Print the array containing all solution nodes.

## Code

The following code snippet contains the required function:

```c++
//function 1 deals with case 1 i.e. target node is root node
void nodeK(node *root, int k){

    if (root == NULL || k < 0)  return;
 
    if (k==0){
        cout << root->data << endl;
        return;
    }
    nodeK(root->left, k-1);
    nodeK(root->right, k-1);
}

//function 2 when target node is not root node
int printK(node* root, node* target , int k){
    if (root == NULL) return -1;
 
    if (root == target){
        printK(root, k);
        return 0;
    }
    int dl = printK(root->left, target, k);
 
    if (dl != -1){
         if (dl + 1 == k)
            cout << root->data << endl;
         else
            printK(root->right, k-dl-2);
 
         return 1 + dl;
    }
 
    int dr = printK(root->right, target, k);
    if (dr != -1){
         if (dr + 1 == k)
            cout << root->data << endl;
         else
            printK(root->left, k-dr-2);
         return 1 + dr;
    }
    return -1;
}
```

## Complexity Analysis

* **Time Complexity**: Each node is traversed at most two times, hence the time complexity is O(n).

* **Space Complexity**: O(n)
