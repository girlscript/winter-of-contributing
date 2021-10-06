# Level Order Traversal in Binary Tree
The level order traversal is like the breadth first traversal for the binary tree.

## Method 1
 - ### Algorithm
 In this method we take two functions . One function is for printing the given level and the second function is to print level order traversal for tree . Second uses first function for printing the current level on which the level order function is pointing.

 - ### Implementation
 ``` cpp
#include <bits/stdc++.h>
using namespace std;

/* A binary tree node has data,
pointer to left child
and a pointer to right child */
struct node
{   
int data;
node* left, *right;
node(int val){
    data=val;
    left=NULL;
    right=NULL;
}
};

/* Function to print level
order traversal a tree*/

void print_Level_Order(node* root)
{
	int h = height(root);
	for (int i = 1; i < = h; i++)
		printCurrentLevel(root, i);
}

/* Print nodes at a current level */

void printCurrentLevel(node* root, int level)
{
	if (root == NULL)
		return;
	if (level == 1)
		cout << root->data << " ";
	else if (level > 1)
	{
		printCurrentLevel(root->left, level-1);
		printCurrentLevel(root->right, level-1);
	}
}
int height(node* node)
{
	if (node == NULL)
		return 0;
	else
	{
		/* compute the height of left and right subtree both  */

		int lheight = height(node->left);
		int rheight = height(node->right);

		/* we have to take the larger one */
		if (lheight > rheight)
		{
			return(lheight + 1);
		}
		else {
		return(rheight + 1);
		}
	}
}
int main()
{
	node *root = newNode(1);
	root->left = newNode(2);
	root->right = newNode(3);
	root->left->left = newNode(4);
	root->left->right = newNode(5);

	cout << "Level Order traversal is \n";
	printLevelOrder(root);

	return 0;
}
 ```
 Output :
 ```
Level Order traversal is 
1 2 3 4 5 
 ```

- ### Time Complexity
1. O ( n^2 ) in worst case .
2. O ( n ) in best case . 
where ' n ' is the number of nodes in binary tree . 

- ### Space Complexity
1. O ( n ) in worst case .
2. O ( log n ) in best case .
where ' n '  is the number of nodes in binary . 
 
 ## Method 2 ( Using Queue )

 - ### Algorithm
 In this each node is first visited and then it’s child nodes are put in a FIFO manner in queue . And we push the value  ' NULL ' whenever the one level is completed and this ' NULL ' value also tell us that one level is ended now new level is starting . 

 - ### Implementation
 ``` cpp
#include <bits/stdc++.h>
using namespace std;
struct node{
    int data;
    struct node*left;
    struct node*right;
    node(int val){
        data=val;
        left=NULL;
        right=NULL;
    }
};
void level_traversing(node*root){
    if(root==NULL)
    return;
    queue<node*>q;
   
    // pushing the root node
    
    q.push(root);
    
    // the NULL shows the end of the level
    
    q.push(NULL); 
    while(!q.empty()){
        node*n=q.front(); 
        
    // then check front is NULL or any root and also
        
        q.pop();
        if(n!=NULL){
            cout<<n->data<<" ";
            
    // checking it have child or not if yes push in the queue.
            
            if(n->left)
            q.push(n->left);
            if(n->right)
            q.push(n->right);
        }


    // at the end we push NULL if queue is not empty.    
        
        else if(!q.empty())
        q.push(NULL);
    }
}
int main() {
	node*root=new node(1);
	root->left=new node(2);
	root->right=new node(3);
	root->left->left=new node(4);
	root->left->right=new node(5);
	cout<<"The level order traversal is : "<<"\n";    
  level_traversing(root);
	
    return 0;
}
```
Output : 
```
Level Order traversal is :  
1 2 3 4 5 
```
- ### Time Complexity
O ( n ) where n is the number of nodes in the binary tree 

- ### Space Complexity
O ( n ) where n is the number of nodes in the binary tree
