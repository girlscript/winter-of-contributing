# Traversal methods in Binary Search Tree

## Sample BST
![image](https://user-images.githubusercontent.com/73171376/134503655-43c2a2d3-31dc-46ea-99ab-41b9bb1a33e0.png)

## Depth First Traversals<br>
In Depth First Traversal methods we traverse the BST in depth wise motion

### 1. Inorder Traversal
```c
Algorithm
1. First of all Traverse the left subtree of the node using same algorithm (from step-1 itself) like inorder(node->left).
2. Visit current node
3. Traverse right subtree of the node using same algorithm (from Step-1) like (node->right).
```
```c
Output of Inorder Traversal for the above Sample BST will be
4 7 9 10 14 26
```

***Properties***
- Print the nodes of Binary Search Tree in increasing order

### 2. Preorder Traversal
```c
Algorithm
1. First visit the node
2. Traverse the left subtree of the node like preorder(node->left).
3. Traverse the right subtree of the node like preorder(node->right).
```
```c
Ouput of preorder traversal for the above sample BST
10 7 4 9 14 26
```

### 3. Postorder Traversal
```c
Algorithm
1. First Traverse the left subtree of the node like postorder(node->left).
2. Traverse the right subtree of the node like postorder(node->right).
3. Visit the node.
```
```c
Output of Postorder traversal for the above sample BST
4 9 7 26 14 10
```

## Code for Inorder, Preorder and Postorder Traversals
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

void inorder(BST *node)
{
	if(node != NULL)
	{
		// Traversing Left Subtree of the node
		inorder(node->left);
		// Visiting the node
		printf("%d ",node->data);
		// Traversing Right subtree
		inorder(node->right);
	}
}

void preorder(BST *node)
{
	if(node != NULL)
	{
		// Visiting the node
		printf("%d ",node->data);
		// Traversing Left Subtree of the node
		preorder(node->left);
		// Traversing Right subtree
		preorder(node->right);
	}
}

void postorder(BST *node)
{
	if(node != NULL)
	{
		// Traversing Left Subtree of the node
		postorder(node->left);
		// Traversing Right subtree
		postorder(node->right);
		// Visiting the node
		printf("%d ",node->data);
	}
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

	printf("Inorder Traversal of the BST : ");
	inorder(root);
	printf("\n");

	printf("Preorder Traversal of the BST : ");
	preorder(root);
	printf("\n");

	printf("Postorder Traversal of the BST : ");
	postorder(root);
	printf("\n");

	return 0;
}
```
```c
Output from the Code
Inorder Traversal of the BST : 4 7 9 10 14 26
Preorder Traversal of the BST : 10 7 4 9 14 26
Postorder Traversal of the BST : 4 9 7 26 14 10
```

## Breadth First Traversal<br>
In Breadth First Traversal methods we traverse the BST in Breadth-wise motion or simply we print tree Level wise

```c
Algorithm
First of all we have to find the height of the tree because we need number of levels present in the tree
For each level print the nodes present in that level
For printing the nodes in the same level use a printLevel function which uses recursion to find all the nodes
```
```c
Output of Level Order traversal for the above sample BST
10 7 14 4 9 26
```

## Code for Level Order traversal of BST
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
	if (!node)
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

int findHeight(BST *node)
{
	if(node)
	{
		// finding individual heights of the subtrees
		int leftHeight = findHeight(node->left);
		int rightHeight = findHeight(node->right);

		// returning height of the subtree which is greater
		return (leftHeight > rightHeight) ? leftHeight + 1 : rightHeight + 1;
	}
	else return 0;
}

void printLevel(BST *root, int level)
{
	// if root is NULL then return
	if(!root) return;

	// if level is 1 simply print data otherwise reach to the level and print the data
	if(level == 1) printf("%d ", root->data);
	else if(level > 1)
	{
		// finding the node where the level = 1 in left and right subtree
		printLevel(root->left, level-1);
		printLevel(root->right, level-1);
	}
}

void levelorder(BST *root)
{
	int height = findHeight(root);
	for(int i=0; i<height; i++)
	{
		// printing nodes at the level i+1
		printLevel(root, i+1);
	}
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

	printf("Level Order Traversal of the BST : ");
	levelorder(root);

	return 0;
}
```

```c
Output fron the above code
Level Order Traversal of the BST : 10 7 14 4 9 26
```
