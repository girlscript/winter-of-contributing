# **What is threaded binary tree ?**

Threaded binary tree is a binary tree in which the null pointers of leaf node of the binary tree is pointing to inorder predecessor or inorder successor.Threaded binary tree structure makes the inorder and preorder traversal of the tree faster without using any additional data structure(e.g auxilary stack) or memory to do the traversal.


## **Double Threaded Binary Search Tree**
---
Double threaded binary search tree is a binary search tree in which every node has left NULL pointer points to its inorder predecessor and the right NULL pointer points to the inorder successor. The threads are useful for fast accessing the ancestors of a node.

Double Threaded Binary Search Tree is one of the most used types of Advanced data structures used in many real-time applications like places where there are insertion and traversal of all elements of the search tree. 

![image](https://user-images.githubusercontent.com/75716335/138551219-a303bcaf-b793-4d96-9f33-5ff53f698d0a.png)


## **Advantages of using double threaded binary tree-**
---
Although adding right and left threads increases complexity, the double-threaded tree has the advantages of both single-threaded trees and binary search tree.

1. Fast successor and predecessor access.

2. No auxiliary stack or recursion approach for in-order, pre-order, and reverse in-order traversals.

3. Since no auxiliary stack or recursion is required, memory consumption is reduced.

4. Utilize wasted space. Since the empty left and right attribute of a node does not store anything, we can use the empty left and right attributes as threads.


## **Algorithm:**
---
- In this tree, there are five fields namely, data fields, left, right pointers, leftThread, and rightThread where leftThread and rightThread are boolean value stored to denote the right pointer points to an inorder successor or a new child node. Similarly, the left pointer points to an inorder predecessor or a new child node.

- Base condition for the creation of the Double Threaded binary search tree is that the root node exists or not, If it doesn’t exist then create a new node and store it.

- Otherwise, compare the data of the current node to the new Data to be inserted, If the new data is less than the current data then traverse to the left child node. Otherwise, traverse to the right child node.

- If the left child or right child doesn’t exist then insert the node to its left and point its left and right child to the inorder predecessor and successor respectively.


## **Implementation of double threaded binary search tree for inorder and preorder traversal-**

```cpp
#include<bits/stdc++.h>
using namespace std;

//class of the node
class Node{                 
public:
    int data;
    Node* left;
    Node* right;
    int leftThread;   
    int rightThread; 

    // constructor of the node in tree
    Node(int val){
        this->data = val;
    }
};


// Class of the double threaded binary search tree
class DoubleThreadedBinaryTree{
private:
    Node*root;
public:

    //Constructor of the double threaded binary search tree
    DoubleThreadedBinaryTree(){
        
        //Consider your whole tree lies to the left this dummy node
        root=new Node(INT_MAX);
        root->left=root->right=root;

        //Considering our whole tree is at left of dummy node
        root->leftThread=0;
        root->rightThread=1;
    }

    
    //Function to insert the nodes into the double threaded binary search tree
    void insert(int data){
        Node* new_node=new Node(data);

        //Condition to check if there is no node in the binary tree
        if(root->left==root&&root->right==root){
            //EmptyTree
            new_node->left=root;
            root->left=new_node;
            new_node->leftThread=0;
            new_node->rightThread=0;
            root->leftThread=1;
            new_node->right=root;
            return;
        }
        else{

            //New node
            Node*current=root->left;
            while(true){

                //Condition to check if the data to be inserted is less than the current node
                if(current->data>data){
                    if(current->leftThread==0){
                    //thisisthelastNode
                    new_node->left=current->left;
                    current->left=new_node;
                    new_node->leftThread=current->leftThread;
                    new_node->rightThread=0;
                    current->leftThread=1;
                    new_node->right=current;
                    break;
                    }
                    else{
                        current=current->left;
                    }
                }
                else{
                    if(current->rightThread==0){
                        //thisisthelastNode
                        new_node->right=current->right;
                        current->right=new_node;
                        new_node->rightThread=current->rightThread;
                        new_node->leftThread=0;

                        //Inserting the node in the right
                        current->rightThread=1;
                        new_node->left=current;
                        break;
                    }
                    else{
                        current=current->right;
                    }
                }
            }
        }
    }


    //Otherwise insert the node in the left of the current node
    Node*findNextInorder(Node*current){
        if(current->rightThread==0){
            return current->right;
        }
        current=current->right;
        while(current->leftThread!=0)
        {
            current=current->left;
        }
        return current;
    }

//In double threaded binary search tree the left pointer of every node points to its inorder predecessor whereas its right pointer points to the inorder successor
    
    //Function to find the inorder successor of the node
    void inorder(){

        Node*current=root->left;
        while(current->leftThread==1){
            current=current->left;
        }
        cout<<"\nInorder Traversal :"<<"\n";

        //Loop to traverse tree
        while(current!=root){
            cout<<current->data<<" ";
            current=findNextInorder(current);
        }
        cout<<"\n\n";
    }

    
    //Function to find the preorder successor of the node
    void preorder(){
        Node*current=root->left;
        cout<<"\nPreorder Traversal :"<<"\n";

        //Loop to traverse the tree inn preorder fashion
        while(current!=root){
            cout<<current->data<<" ";
            if(current->left!=root&&current->leftThread!=0)
                current=current->left;
            else if(current->rightThread==1){
                current=current->right;
            }
            else{
                while(current->right!=root&&current->rightThread==0)
                {
                    current=current->right;
                }
                if(current->right==root)
                    break;
                else
                {
                    current=current->right;
                }
            }
        }
        cout<<"\n\n";
    }
};


int main(){
    DoubleThreadedBinaryTree dtbt;
    dtbt.insert(10);
    dtbt.insert(3);
    dtbt.insert(15);
    dtbt.insert(6);
    dtbt.insert(27);
    dtbt.insert(17);
    dtbt.insert(36);
    dtbt.insert(118);
    dtbt.inorder();
    dtbt.preorder();
   ;
    return 0;
}
```


## **Output:**
---

Inorder Traversal :  
4 7 11 15 17 27 39 102

Preorder Traversal :  
11 4 7 15 27 17 39 102


## **Application of double threaded binary search tree:**
---

The main idea behind double threaded binary trees is to make inorder traversal of the binary tree faster and do it without using any external extra space, so sometimes in small systems where hardware is limited we use threaded binary tree for better efficiency of the software in a limited hardware space.  


## **Summary:**
---  

The double-threaded tree offers both single-threaded binary trees’ benefits, but its implementation is even more complex than single-threaded binary trees. Besides, there is no significant improvement in run-time performance. However, in some cases, such as the space complexity is concerned, and the specific traversals (e.g., in-order traversal) are critical, the double-threaded binary tree could be the best option. 

---
*Thanks for reading !!*
