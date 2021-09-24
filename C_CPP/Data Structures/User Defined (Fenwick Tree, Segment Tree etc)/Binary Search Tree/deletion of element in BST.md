# Deletion of Element in BST

For deleting an element we have to consider two cases:
- The element is present as **Leaf Node**
> If the element is present as Leaf node than we can simply remove that node from BST
- If the element is present as **Non-Leaf Node with one child**
> If the element has only one child then we can place that child (along with it's subtree) in place of the original node and remove the original node.
- If the element is present as **Non-Leaf Node with two child nodes**
> If the node has two child nodes then we can swap it with the Right-most node in the Left-Subtree and remove that Right-most node (It will be a Leaf node) or we can also swap it with the Left-most node in the Right-Subtree and remove that Left-most node.
## Sample BST
![image](https://user-images.githubusercontent.com/73171376/134691879-a72f3279-50fa-4dfc-b9f5-7b7a517bcaef.png)

### In the above BST if we want to remove the node 10 then we can simply remove node 10 because it is a leaf node.
### **BST after deleting 10**
![image](https://user-images.githubusercontent.com/73171376/134693322-726dc41a-eafa-4565-8aca-ab4df7e7a855.png)

### But If we want to remove node 50 (root node) then we will have two cases we can swap that 50 either with 40 (Right-most node in Left-Subtree) or 60 (Left-most node in Right Subtree)<br>
### If we swap with 40 then our BST will look like this
![image](https://user-images.githubusercontent.com/73171376/134693833-2dd261cc-0708-4cb7-a993-9843c41885bc.png)
### If we swap it with 60 then our BST will look like this
![image](https://user-images.githubusercontent.com/73171376/134694007-cbf05d12-99c0-4fad-9590-c5de968d8afc.png)

## Code for deleting an element in BST in C

```c
#include <stdio.h>
#include <stdlib.h>

typedef struct BST_node{
	int data;
	struct BST_node *left , *right;
} BST;

BST *insertData(int val, BST *node)
{
    // root node
    if(node == NULL){
		node = (BST*)malloc(sizeof(BST));
		node->data = val;
		node->left = NULL;
		node->right = NULL;
	}
    // left subtree
	else if(val <= node->data){
		node->left = insertData(val , node->left);
	}
    // right subtree
	else if(val > node->data){
		node->right = insertData(val , node->right);
	}
	return node;
}


void printTree(BST *root){
	if(root == NULL){
		//printf("TREE is empty\n");
	}
	else{
		printTree(root->left);
		printf("%d ",root->data);
		printTree(root->right);
	}
}

BST *deleteNode(BST *root , int key)
{
    // empty tree
	if(root == NULL){
		return NULL;
	}
    // key is present in left subtree
	else if(key < root->data){
		root->left = deleteNode(root->left , key);
	}
    // key is present in right subtree
	else if(key > root->data){
		root->right = deleteNode(root->right , key);
	}
    // element is present in node itself
	else if(key == root->data){
        // If left Subtree is empty then removing the node and returning the right node
		if(root->left == NULL){
			BST *temp = root->right;
			free(root);
			return temp;
		}
        // if right subtree is empty then removing the node and returning the left node
		else if(root->right == NULL){
			BST *temp = root->left;
			free(root);
			return temp;
		}
		
		BST *temp = root->right;
        // finding Left-most node in the right subtree tree
        while(temp->left != NULL){
            temp = temp->left;
        }
        
        // Exchanging with Left-most node in Right Subtree
		root->data = temp->data;

        // Deleting that Left-most node of Right Subtree
		root->right = deleteNode(root->right , temp->data);

        /*
        BST *temp1 = root->left;
        // finding Right-most node in the left subtree tree
        while(temp1->right != NULL){
            temp1 = temp1->right;
        }
        
        // Exchanging with Right-most node in Left Subtree
		root->data = temp1->data;

        // Deleting that Right-most node of Left Subtree
		root->left = deleteNode(root->left , temp1->data);
        */
        
	}
	return root;
}


int main()
{
    // generating the above Sample BST
    BST *root = NULL;
    root = insertData(50, root);
    root = insertData(30, root);
    root = insertData(20, root);
    root = insertData(40, root);
    root = insertData(10, root);
    root = insertData(70, root);
    root = insertData(90, root);
    root = insertData(60, root);
    root = insertData(75, root);
    root = insertData(95, root);

    // printing original Tree (Sample Tree)
    printTree(root);

    // Deleting node 10 (Leaf Node)
    deleteNode(root, 10);
    printf("\n");
    printTree(root);

    // Deleting node 50 (Non-Leaf Node as well as root node)
    deleteNode(root, 50);
    printf("\n");
    printTree(root);

    return 0;
}
```
