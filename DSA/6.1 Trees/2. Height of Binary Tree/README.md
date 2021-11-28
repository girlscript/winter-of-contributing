# Height of a Binary Tree

* Number of edges in longest path from the node to a leaf node is called **Height of a Node**.

* Height of tree = Height of root node

* Height of empty tree is -1.

* Height of tree with one node is 0.

## Algorithm:

    1. If tree is empty then return -1.

    2. Get the maximum height of left subtree and right subtree recursively.

    3. Get the maximum of maximum heights of left and right subtree and add 1 to it.

    4. Return the max height.

## Implementation

_C++ Program to find height of a Binary Tree_

```cpp
#include<iostream>
using namespace std;

class BstNode {
	public:
	int data;
	BstNode* left;
	BstNode* right;
};

//Function to create a new node
BstNode* GetNewNode(int data) {
	BstNode* newNode = new BstNode();
	newNode->data = data;
	newNode->left = newNode->right = NULL;
	return newNode;
}

//Function to insert data in Binary Tree
BstNode* Insert(BstNode* root, int data) {
	if(root == NULL) {
		root = GetNewNode(data);
	}
	else if(data <= root->data) {
		root->left = Insert(root->left, data);
	}
	else {
		root->right = Insert(root->right, data);
	}
	
	return root;
}

//Function to find max height of binary tree
int FindHeight(BstNode* root) {
	if(root == NULL) {
		return -1;
	}
	
	return max(FindHeight(root->left), FindHeight(root->right)) + 1;
}

/*Driver Code*/
int main() {
	BstNode* root = NULL;
	root = Insert(root, 15);
	root = Insert(root, 10);
	root = Insert(root, 20);
	root = Insert(root, 25);
	root = Insert(root, 8);
	root = Insert(root, 12);
	
	cout << FindHeight(root) << endl;
	
	return 0;
}
```

**Output:**

    2

**Time Complexity:** O(n)
