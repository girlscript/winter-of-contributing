# Right View of Binary Tree  
Consider a binary tree as -  

```
            1
         /     \
       2        3
     /   \     /  \
    4     5   6    7
```

And we need to find the right view of given binary tree  
The output will be  - 1  3  7  

## Approach  
- Traverse the given binary tree in a level order manner.
- All we need to do is to print the rightmost node of each level.
- Run a while loop until the queue is empty, and for each level print its last element.  

## Code  

```cpp
#include<bits/stdc++.h>
using namespace std;

struct Node{
    int data;
    Node *left, *right;

    Node(int curr){
        data = curr;
        left = NULL;
        right = NULL;
    }
};

// function to print right view of binary tree
void rightView(Node *root)
{
    if(root == NULL)
    return;

    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        int size = q.size();    // number of nodes at current level
        
        // Traverse all nodes of current level
        for(int i=0;i<size;i++)
        {
            Node* curr = q.front();
            q.pop();

            if(i == size-1)           // Print the right most element at the level
            cout<<curr->data<<" ";

            if(curr->left != NULL)    // push left node to queue
            q.push(curr->left);

            if(curr->right != NULL)   // push right node to queue
            q.push(curr->right);

        }
    }
}

int main()
{
    // Construct a tree
    struct Node* root = new Node(1);
    root->left = new Node(2);
    root->right = new Node(3);
    root->left->left = new Node(4);
    root->left->right = new Node(5);
    root->right->left = new Node(6);
    root->right->right = new Node(7);

    rightView(root);
}
```

## Output  
1  3  7  

## Time Complexity  
O(n) where n is the number of nodes in the binary tree.
