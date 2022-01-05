# Left View of Binary Tree-  
Consider a binary tree as -  

```
            1
         /     \
       2        3
     /   \     /  \
    4     5   6    7
```

And we need to find the left view of the given binary tree  
The output will be  -  1 2 4  

## Approach  
- Traverse the given binary tree in a level order manner.
- All we need to do is to print the leftmost node of each level.
- Run a while loop until the queue is empty, and for each level print its first element.

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

// function to print left view of binary tree
void leftView(Node *root)
{
    if(root == NULL)
    return;

    queue<Node*>q;
    q.push(root);

    while(!q.empty())
    {
        int size = q.size();  // number of nodes at current level

        // Traverse all nodes of current level
        for(int i=0;i<size;i++)
        {
            Node* curr = q.front();
            q.pop();
            
            if(i == 0)                       // Print the left most element at the level
            cout<<curr->data<<" ";

            if(curr->left != NULL)  // push left node to queue
            q.push(curr->left);

            if(curr->right != NULL)  // push right node to queue
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

    leftView(root);

}
```

## Output  
1  2  4  

## Time complexity  
O(n) where n is the number of nodes in the binary tree.
