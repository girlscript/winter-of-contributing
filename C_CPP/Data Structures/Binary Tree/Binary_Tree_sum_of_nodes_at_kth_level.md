# Sum of all nodes at Kth level in Binary Tree - <br/>
Consider a binary tree as -  <br/>


&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 5 <br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; / &nbsp;&nbsp;&nbsp;&nbsp;&nbsp; \ <br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; 3    &nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;    7  <br/>
&nbsp;&nbsp;&nbsp;&nbsp;&nbsp;&nbsp; /  &nbsp;&nbsp;   \     &nbsp;&nbsp;&nbsp;&nbsp;    /   <br/>
&nbsp;&nbsp;&nbsp;&nbsp; 2 &nbsp;&nbsp;&nbsp;&nbsp;     4   &nbsp;&nbsp;  6  <br/>

And we need to find the sum of all nodes present at level 2nd. <br/>
The output will be  - 12  <br/>

## Code:  <br/>

```
#include <bits/stdc++.h>
using namespace std;
 
struct Node
{
    int data;
    struct Node *left, *right;
};
 
// Function to calculate the sum of nodes at level k
int sumkth (Node* root, int k)
{
    if(root == NULL)
    return 0;

    int level = 0, sum = 0;
    int flag = 0; 
    // flag is used to break out of
    // the loop after the sum of all
    // the nodes at Nth level is found

    queue<Node*>q;  // create a queue
    q.push(root);

    while(!q.empty())
    {
        int size = q.size();  // calculate number of nodes in current level
        while(size--)
        {
            Node* node = q.front();
            q.pop();

            if(level == k)
            {
                flag = 1;
                sum += node->data;
            }

            else
            {
                if(node->left)
                q.push(node->left);

                if(node->right)
                q.push(node->right);
            }
        }

         // Increment the variable level
        // by 1 for each level
        level++;

        if(flag)
        break;

    }

    return sum;
    

}
 
// Function to create new Binary Tree node
Node* newNode(int data)
{
    Node *temp = new Node;
    temp->data = data;
    temp->left = temp->right = NULL;
    return temp;
}
 
int main()
{
    Node* root = newNode(5);
    root->left = newNode(3);
    root->right = newNode(7);
    root->left->left = newNode(2);
    root->left->right = newNode(4);
    root->right->left = newNode(6);

    int level = 2;
    int result = sumkth(root, level);
 
    // Printing the result
    cout << result;
}

```

## Output : <br/>
12 <br/>

## Time Complexity: <br/>
O(n) where n is the number of nodes in the binary tree  <br/>

## Space Complexity: <br/>
O(n) where n is the number of nodes in the binary tree 
