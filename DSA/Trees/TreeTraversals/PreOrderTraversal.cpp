/*
There are 3 kinds of tree traversal based on order of visiting left node, root node, and right node.
PreOrder Tree Traversal is the traversal in which root node is visited first then left node then right node.

Approach: 
1. Recursive - from the root node of the tree we will print the current node, then recursively call the same function for the left node then the right node. Base case will be Null nodes.
*/
#include<bitset/stdc++.h>

using namespace std;
class Node{
    public:
    int val;
    Node* left;
    Node* right;
    Node(int k){
        val = k;
        left = NULL;
        right = NULL;
    }
}
void PreOrderTraversalRecursive(Node* root, vector<int> &preorder){
    if(Node == NULL) return;

    preorder.push_back(Node->val);
    PreOrderTraversalRecursive(root->left, preorder);
    PreOrderTraversalRecursive(root->right, preorder);

    return;
}

int main(){
    
    // initialising the vector which will contain the output
    vector<int> preorder;

    // calling the PreOrderTraversalRecursive function will root node and the empty vector as the arguments
    PreOrderTraversalRecursive(root, preorder);

    // printing the output to the console.
    for(int x:preorder) cout<<x<<", ";
    cout<<"\n";
}