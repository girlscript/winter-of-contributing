
# Deletion in Binary Search Tree

There are three possible cases to consider when deleting a node from BST:

**Case 1:** Deleting a leaf node (Node with no children): Simply remove from the tree.

**Case 2:** Deleting a node with one child: Copy the child to the node and delete the child.

**Case 3:** Deleting a node with two children: This is the most trickiest case. Here,

* First we have to find the minimum in right subtree.
* Then copy the minimum value in the targetted node.
* Delete the duplicate from right subtree.

                 OR

* Find maximum in left subtree.
* Copy the value in the targetted node.
* Delete duplicate from left subtree.


## Implementation

_C++ program to delete a node from Binary Search Tree_

```cpp
#include<iostream>
using namespace std;

class Node {
	public:
	int data;
	Node* left;
	Node* right;
};

//Function to find minimum in a tree
Node* FindMin(Node* root) {
	while(root->left != NULL) {
		root = root->left;
	}
	return root;
}

//Function to search and delete a value from tree
Node* Delete(Node* root, int data) {
	if(root == NULL) {
		return root;
	}
	else if(data < root->data) {
		root->left = Delete(root->left, data);
	}
	else if(data > root->data) {
		root->right = Delete(root->right, data);
	}
	else {
		//Case 1: No child
		if(root->left == NULL && root->right == NULL) {
			delete root;
			root= NULL;
		}
		
		// Case 2: One child
		else if(root->left == NULL) {
			Node* temp = root;
			root = root->right;
			delete temp;
		}
		else if(root->right == NULL) {
			Node* temp = root;
			root = root->left;
			delete temp;
		}
		
		//Case 3: Two children
		else {
			Node* temp = FindMin(root->right);
			root->data = temp->data;
			root->right = Delete(root->right, temp->data);
		}
	}
	return root;
}

//Function to visit nodes in Inorder
void Inorder(Node* root) {
	if(root == NULL) {
		return ;
	}
	Inorder(root->left);
	cout << root->data << " ";
	Inorder(root->right);
}

//Function to insert node in a Binary Search Tree
Node* Insert(Node* root, int data) {
	if(root == NULL) {
		root = new Node();
		root->data = data;
		root->left = root->right = NULL;
	}
	else if(data <= root->data) {
		root->left = Insert(root->left, data);
	} 
	else {
		root->right = Insert(root->right, data);
	}
	return root;
}

/*Driver Code*/
int main() {
	Node* root = NULL;
	root = Insert(root, 5); root = Insert(root, 10);
	root = Insert(root, 3); root = Insert(root, 4);
	root = Insert(root, 1); root = Insert(root, 11);
	Inorder(root);
	cout << endl;
	
	//Deleting node with value 5
	root = Delete(root, 5);
	
	//Print nodes in Inorder
	cout << "Tree after deletion of node: ";
	Inorder(root);
	cout << "\n";
	
	return 0;
}
```

**Output:**

    1 3 4 5 10 11
    Tree after deletion of node: 1 3 4 10 11

**Time Complexity:** O(h), where h is the height of BST.