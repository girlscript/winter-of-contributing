# Insertion in Binary Search Tree
Binary Search tree have properties
- Every nodes in the left subtree is less than the value of the node itself.
- Every nodes in the right subtree is greater than the value of the node itself.

So for inserting an element into a BST we have to check that the particular element is greater or smaller than the root node.<br>
If that element is grater than the root then we check its right subtree otherwise we will check its left subtree.

### Sample Binary Search Tree

![image](https://user-images.githubusercontent.com/73171376/134503655-43c2a2d3-31dc-46ea-99ab-41b9bb1a33e0.png)

This is a BST and if we wanted to insert a new element 11 then what will be the right place for insertion? Let's See

Steps for insertion -
- In the above tree we can see that 11 is greater than root node (10) then this 11 must be inserted in its right subtree.
- After that we come accross node 14 and we can see that 11 is less than 14 so it will go into its left subtree and there is a blank space so we will insert this 11 into left side of 14.<br>
### So after insertion of 11 our tree will look like this.

![image](https://user-images.githubusercontent.com/73171376/134504138-fb0d00e7-c4a4-4121-9975-0fd5fe4c3ad1.png)
<br>
### Code for insertion of element in BST in C

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct BST_node
{
	int data;
	struct BST_node *left, *right;
} BST;

BST *insertData(int val, BST *node)
{
	// root node
	if (node == NULL)
	{
		node = (BST *)malloc(sizeof(BST));
		node->data = val;
		node->left = NULL;
		node->right = NULL;
	}
	// left subtree
	else if (val <= node->data)
	{
		node->left = insertData(val, node->left);
	}
	// right subtree
	else if (val > node->data)
	{
		node->right = insertData(val, node->right);
	}
	return node;
}

int main()
{
	// generating the above BST example
	BST *root = NULL;
	root = insertData(10, root);
	root = insertData(7, root);
	root = insertData(14, root);
	root = insertData(4, root);
	root = insertData(9, root);
	root = insertData(26, root);

	// inserting the node 11 into the above BST to get the desired result
	root = insertData(11, root);

	return 0;
}
```
