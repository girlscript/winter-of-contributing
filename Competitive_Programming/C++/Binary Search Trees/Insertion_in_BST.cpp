/*Binary Search Tree is a binary tree consisting of at most 2 children left and right ,which stores the nodes with the lower value key to its left and the nodes with the higher value key to its right. In this program we will see how to insert nodes in a binary search tree in a recursive way*/
#include<iostream>
using namespace std;

//BST class that stores a binary search tree
class BST{
    public:
    int key;
    BST *left,*right;
    BST(int data){
        key = data;
        left = right = NULL;
    }
};
/*BST class stores three data members and one member function the member function key contains the data of the node and left and right nodes contains the left and right children of the BST.
The member funciton is responsible for creating a new node of the BST by setting the data of the root as provided in the given key and setting left and right nodes as NULL*/


//Function to insert in a Binary Search tree
void insert(BST *root,int key){
    if(root->key == key){
        return;
    }
    if(root->key > key){
        if(root->left == NULL){
            root->left = new BST(key);
        }else{
            insert(root->left,key);
        }
    }else{
        if(root->right == NULL){
            root->right = new BST(key);
        }else{
            insert(root->right,key);
        }
    }
}
/*So the insert function is working as follows:
    1.)If the key is already present in the tree it will not insert in the tree.
    2.)If the key is smaller than the key of root insert function will be recursively called to its left
    3.)If the key is larger than the key of root insert function will be recursively called to its right4
    4.)If the node is null and the key is also not present so we will create a new node of BST to store the key*/
//Function to print the binary tree in preorder traversal
void print(BST *root){
    if(root == NULL){
        return;
    }
    cout<<root->key<<" ";
    print(root->left);
    print(root->right);
}

int main(){
    BST *root = new BST(10); //Initializing a BSt with value at root as 10
    int nodes[] = {5,7,23,9,25,12,18,6};
    int n = sizeof(nodes)/sizeof(int);
    for(int i = 0; i < n; i++){
        insert(root,nodes[i]);
    }
    print(root);
    return 0;
}