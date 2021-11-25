# Binary Search Tree

* A Binary Search Tree(BST) is a binary tree in which for each node, value of all the nodes in left subtree is lesser or equal to node's value and value of all the nodes in right subtree is greater.

![alt text](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQM6waxoTco3skyJiAPWHR44spwOCPUnQH_Pw&usqp=CAU)

## Algorithm to search an element in BST

* If the integers are in sorted array we can perform binary search.

* We first define complete list as our search space, the number can exist only within the search space.

* If the number is less than mid element then search in left half of mid and if greater than mid then search in right half of mid.
  In case of equality, we have found the element.

* Let's say we want to search key 3 from above figure. As 3 is less than 6, so go searching towards left.

* Once again we'll compare to mid element and this time we got the element at mid.

## Algorithm to insert an element in BST

* To insert an element in BST, we have to first find the position at which we can insert and we find the position in O(log n) time.

* We will start from root, if the value to be inserted is lesser or equal to root then go to left. 

* If the value is greater and there is no right child then insert as right child or go to right.

![alt text](https://camo.githubusercontent.com/2d18fae81b9c7fb20937de6a1450f257b4589dddaac9e25b38469792d99b8c75/687474703a2f2f6274656368736d617274636c6173732e636f6d2f646174615f737472756374757265732f64735f696d616765732f425354253230436f6e737472756374696f6e2e706e67)


* BST gets unbalanced during Insertion and Deletion. So during insertion or deletion we restore the balancing.

## Implementation

_C++ program to implement BST_
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

//Function to insert data in BST
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

//Function to search an element in BST
bool Search(BstNode* root, int data) {
	if(root == NULL) {
		return false;
	}
	else if(root->data == data) {
		return true;
	}
	else if(data <= root->data) {
		return Search(root->left, data);
	}
	else {
		return Search(root->right, data);
	}
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
	
	int num;
	cout << "Enter the number to be searched: ";
	cin >> num;
	
	if(Search(root, num) == true) {
		cout << "Found" << endl;
	}
	else {
		cout << "Not Found" << endl;
	}
	
	return 0;
}
```
**Output:**

       Enter the number to be searched: 25
       Found

       Enter the number to be searched: 22
       Not Found

**Time Complexity:**

* Time complexity of all BST operations = O(h)

* Here, h = Height of Binary Search Tree

**Credits and References:**

https://www.educative.io/edpresso/how-do-you-implement-a-binary-search-tree-in-multiple-languages

http://www.btechsmartclass.com/data_structures/binary-search-tree.html

https://www.gatevidyalay.com/time-complexity-of-bst-binary-search-tree/
