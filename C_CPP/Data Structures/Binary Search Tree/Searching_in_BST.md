# Searching in Binary Search Tree
Binary Search Tree is the tree data structure which follows below points :
- The value of left child nodes is always less than the value of parent node.
- The value of right child nodes is always greater than the value of parent node.
- The other main point is that the left and right subtree each must also be a binary search tree means that also should follows the basic conditions of BST. 
- There must be no duplicate nodes or we can say no two node with same value.

## Algorithm For Searching
1. Check for condition that root should not be equal to NULL , This also work as the base condition for our recursive calls.
2. Then we compare compare the key value with the node value if it is less than node value we move towards left subtree otherwise right subtree.
3. When the key value is matched with any node value we return true , otherwise false.

```cpp
#include <iostream>
using namespace std;

// Making the Binary Search Tree
struct node{
    int data;
    node*left,*right;
    node(int val){
        data=val;
        left=right=NULL;
    }
};

bool BST_Search(node*root,int key){
    // Base condition for recursion , this means we have travelled whole tree but key not found.
    if(root==NULL)
    return false;
    
    // When key found
    if(root->data==key)
    return true;
    
    // When key is less than the parent node value
    else if(root->data<key)
    return BST_Search(root->right,key);
    
    // When key is greater than parent node value
    else
    return BST_Search(root->left,key);
    
    return false;
}
int main() {
	node*root=new node(3);
	root->left=new node(2);
	root->right=new node(5);
	root->left->left=new node(1);
	root->left->right=new node(3);
	root->right->left=new node(4);
	root->right->right=new node(6);
	
	int key=4;
	
	if(BST_Search(root,key))
	cout<<"Key "<<key<<" Found in Binary Search Tree";
	
	else
	cout<<"Key"<<key<<"Not Found in Binary Search Tree";
	return 0;
}
```
Output : 
```
Key 4 Found in Binary Search Tree 
```
### Time Complexity
- **In Average Case :** *O(logN)* 
- **In Worst Case :** *O(N)* 

Here **N** is number of nodes

### Space Complexity
- **In Both Worst and Average Case :** *O(N)*  

Here **N** is number of nodes
