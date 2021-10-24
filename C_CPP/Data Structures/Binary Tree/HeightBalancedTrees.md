# Height Balanced Binary Trees

- A tree which satisfies the following criteria is termed as a HEIGHT BALANCED TREE (In context of Binary Trees) :
  - At every node the the absolute difference in the heights of the right and the left subtrees must be less than or equal to 1.
  - Both the left and right subtrees of the given trees are height balanced.

- **Mathematicall expression : |HeightLeftSubtree - HeightRightSubtree| <= 1 for all the nodes.**

<br />

## How to check if a binary tree is height balanced or not?

- **Naive Approach**
  - We create one function height() which will take input the root node and return the height of the tree
  - And another function isBalanced() which is going to return a boolean value, true if the tree is height balanced and false if the tree is not height balanced.
  - However this approach will be inefficient because, for finding the height of a specific root node we will need to iterate over its left and right subtrees and this will take approximately O(N) time for every call.
  - Calling this height function for all the nodes of the tree during tree traversal for isBalanced() function will cause the overall time complexity to be O(N^2).
  - Hence we need to think of somthing better....

<br />

- **Optimised Approach**
  - We will create a function which will return us a pair of the type : pair <boolean, int>, here the boolean value will be the balance of the subtree/tree on which the function is being called and int value will be storing the height of that particular subtree/tree.
  - Tree traversal is going to take O(N) time, and you can see that we don't need to anything else which will add to our time complexity, so we will be able to reduce the time complexity from O(N^2) to O(N), which is way better.

<br />

- Example :

<br />

```txt
									    (1)  --> Root Node
									   /   \
									(2)     (3)
									/      /   \
								     (4)    (5)     (6)
								        \	       \
								         (7)		(8)
								        /   \
								     (9)     (10)

Dry Run Analysis : 
	Start from the root node i.e. node (1).
	We make a call on the left and the right subtree of the root node i.e we call on nodes (2) and (3).

								Left Subtree        Right Subtree
						--> Call         (2)     			(3)
							  	/                              /   \
							     (4)                            (5)     (6)
								\                                      \
								 (7)                                    (8)
							        /   \
							     (9)     (10)

	Now as we reach the node (2), it makes a call on its left and right subtrees.
	We make a call on node (4) i.e the left subtree and we make a call on NULL i.e. the right subtree of node (2).Similarly, we make a call on the left and right subtrees of node (3).

						          Call	(4)	   (NULL)			(5)     (6)
								   \                                               \
								    (7)	                                            (8)
								   /   \
								(9)     (10)
```

- Now in the similar manner we make all the subsequent calls until we hit our base case

- **Base Case :** As soon as we hit a leaf node, or a node which is pointing to NULL we will return the pair <true, 0>, since the height of a leaf node is always 0 and its balance is always true, as it does not have any left or right subtrees, however a NULL pointer Node is already height balanced.

<br />

- Otherwise we will return the following data
  - we will check if the left and the right subtrees of the root node is balanced or not, if both of them are balanced then we will mark the balance of the root node as true, and the height of root node is going to be the HeightTree = (max(HeightLeftSubtree, HeightRightSubtree) + 1)

  - we either of the left or right subtree is not balanced, we will return the balance of root as false and its height as calculated in the above step.

<br />

- Now let's dive into the code
  
<br />

## Code

<br />

```C++
#include <iostream>
#include <queue>

using namespace std;

class Node
{
 public:
    int data;
    Node*left;
    Node*right;
    
    Node(int d)
    {
        data=d;
        right=NULL;
        left=NULL;
    }
};

class HBPair
{
public :
    int height;
    bool balance;
};

Node*build()
{
    int d;
    cin>>d;
    if(d==-1)
    {
        return NULL;
    }
    
    Node*root=new Node(d);
    root->left=build();
    root->right=build();
    
    return root;
}

void printBFS(Node*root)
{   
    queue <Node*> q;
    
    q.push(root);
    q.push(NULL);
    
    while(!q.empty())
    {
        Node*f=q.front();
        if(f==NULL)
        {
            cout<<endl;
            q.pop();
            if(!q.empty())
            {
                q.push(NULL);
            }
        }
        
        else 
        {
            cout<<f->data<<" ";
            q.pop();
            
            if(f->left)
            {
                q.push(f->left);
            }
            if(f->right)
            {
                q.push(f->right);   
            }
        }
    }
    
    return ;
}

int height(Node*root)
{
    if(root==NULL)
    {
        return 0;
    }
    
    return 1+max(height(root->left),height(root->right));
}

//height balanced tree : |height of right subtree - height of left subtree|<=1 at every node
//We can write a function such that every node returns a pair : <height,balance>, balance is going to be a bool value 
//we will be following a bottom up approach 
//condition at every node : |h1-h2|<=1 and right balance=true and left balane=true 

HBPair isHeightBalanced(Node*root)
{
    HBPair p;
    
    if(root==NULL)
    {
        //empty trees are always balanced
        
        p.height=0;
        p.balance=true;
        
        return p;
    }
    
    //recursive case
    
    HBPair left=isHeightBalanced(root->left);
    HBPair right=isHeightBalanced(root->right);
    
    if(abs(height(root->left)-height(root->right))<=1 && left.balance && right.balance)
    {
        p.height=1+max(left.height,right.height);
        p.balance=true;
        
        return p;
    }
    else 
    {
        p.balance=false;
    }
    
    return p;
}

int main()
{
    Node*root=build();
    printBFS(root);
    cout<<endl;
    
    HBPair p=isHeightBalanced(root);
    
    cout<<"Height of the tree : "<<p.height<<endl;
    cout<<"Balance of the tree : "<<p.balance<<endl;
    
    return 0;
}
```

<br />

#Output

<br />

![NotABalancedTreeScreenshot](https://user-images.githubusercontent.com/34866732/137534756-38b82b3b-13d4-4f3d-af5e-b82274dda59d.png)
