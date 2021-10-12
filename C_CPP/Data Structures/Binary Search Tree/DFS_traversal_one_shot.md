# One shot DFS traversal
This documentation explains a unique approach of traversing a Binary Search Tree. Here we try to get preorder, inorder and postorder traversals by just one flow. We will be traversing the whole tree only once and obtain the inorder, preorder and postorder traversals.
## Approach
- Take a stack which can store a tree node and a number at one index (using struct). The structure looks something like:
```cpp
struct StackData{
    int data;
    Treenode* x;
    StackData(int c, Treenode* a){
        data=c;
        x=a;
    }
};
```
- Create three vectors for storing the three different dfs traversals:
```cpp
    vector<int> preorder;
    vector<int> inorder;
    vector<int> postorder;
```
- Insert rootnode with integer value 1.
```cpp
stack<StackData*> res;
StackData* a=new StackData(1,root);
res.push(a);
```
Note: `Here the integer values which are stored with tree node lie in the range [1,3] where 1 denotes that preorder is to be performed, 2 denotes that preorder is done and inorder is to be performed while 3 denotes that both inorder and preorder are done and postorder is to be performed for that node. After all the traversals, the node is popped out of the stack.`
- Perform traversal till the time stack doesn't become empty.
```cpp
//loop for all the nodes of the tree
while(!res.empty()){
    //if the node on top of stack is not considered for preorder, then the int value will be 1 with it and it will be stored in preorder vector
    if(res.top()->data==1){
        //storing data of top node in preorder
        preorder.push_back(res.top()->x->data);
        //making integer value=2 for inorder vector of the same node
        res.top()->data++;
        //if the left of the node exists, push it onto the stack for traversals
        if(res.top()->x->left){
            StackData* v=new StackData(1,res.top()->x->left);
            res.push(v);
        }
    }
    //if the node on top of stack is not considered for inorder, then the int value will be 2 with it and it will be stored in inorder vector
    if(res.top()->data==2){
        //storing data of top node in inorder vector
        inorder.push_back(res.top()->x->data);
        increasing the integer value for the node to be considered for postorder traversal
        res.top()->data++;
        //if the right of the node exists, it will be pushed onto the stack
        if(res.top()->x->right){
            StackData* v=new StackData(1,res.top()->x->right);
            res.push(v);
        }
    }
    //for value=3, the node will be considered for postorder and then popped out since no more traversals are to be done
    if(res.top()->data==3){
        postorder.push_back(res.top()->x->data);
        res.pop();
    }
    // when all the nodes are done and stack is empty, the traversals will end
}
```
Here, the logic is that if the number in the stack's top position is 1, then the node value is stored in preorder and the integer is incremented to 2. Then if left of the node exists in the tree, then that node is inserted in stack with an integer value 1.
Similarly, for integer value 2, inorder vector is taken into consideration and for integer value 3, postorder is taken into consideration. The postorder is a bit different from that of inorder and preorder because after postorder, no other traversal is left on the node and hence, nothing is to be inserted in the stack. Rather, the top of stack is popped out because it has been traversed already.

## Time and Space Complexity:
Considering N to be the number of nodes in the tree to be traversed: 
- `Time complexity`: The time complexity of this approach can be considered as `O(3*N)`. This can be deduced because each node is being referred thrice in the code one for each traversal. Hence the time complexity is linear.
- `Space complexity`: The space complexity of this approach can be considered as `O(4*N)`. This can be deduced because we are creating three different vectors for storing the node values and a stack for storing node and integer value. Hence, the space complexity is also linear.

## Complete code for the one-shot-traversal:
```cpp
//including header files
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

//Tree's node structure
struct Treenode{
    int data;
    Treenode* left;
    Treenode* right;
    //constructor with a parameter for data value
    Treenode(int d){
        data=d;
        left=nullptr;
        right=nullptr;
    }
};

//structure for stack's data type to be used to store a treenode and an integer value
struct StackData{
    int data;
    Treenode* x;
    //constructor
    StackData(int c, Treenode* a){
        data=c;
        x=a;
    }
};

//function for traversal
void traversal(Treenode* root){
    //stack for storing tree node and an integer value with it
    stack<StackData*> res;
    //vectors for the three traversals
    vector<int> preorder;
    vector<int> inorder;
    vector<int> postorder;
    //pushing the root node to the stack to start with
    StackData* a=new StackData(1,root);
    res.push(a);
    //loop for all the nodes of the tree
    while(!res.empty()){
        //if the node on top of stack is not considered for preorder, then the int value will be 1 with it and it will be stored in preorder vector
        if(res.top()->data==1){
            //storing data of top node in preorder
            preorder.push_back(res.top()->x->data);
            //making integer value=2 for inorder vector of the same node
            res.top()->data++;
            //if the left of the node exists, push it onto the stack for traversals
            if(res.top()->x->left){
                StackData* v=new StackData(1,res.top()->x->left);
                res.push(v);
            }   
        }
        //if the node on top of stack is not considered for inorder, then the int value will be 2 with it and it will be stored in inorder vector
        if(res.top()->data==2){
            //storing data of top node in inorder vector
            inorder.push_back(res.top()->x->data);
            increasing the integer value for the node to be considered for postorder traversal
            res.top()->data++;
            //if the right of the node exists, it will be pushed onto the stack
            if(res.top()->x->right){
                StackData* v=new StackData(1,res.top()->x->right);
                res.push(v);
            }
        }
        //for value=3, the node will be considered for postorder and then popped out since no more traversals are to be done
        if(res.top()->data==3){
            postorder.push_back(res.top()->x->data);
            res.pop();
        }
        // when all the nodes are done and stack is empty, the traversals will end
    }
    //printing the preorder traversed vector
    cout<<"Preorder traversal: ";
    for(int i=0;i<preorder.size();i++){
        cout<<preorder[i]<<" ";
    }
    cout<<endl;
    //printing the inorder traversed vector
    cout<<"Inorder traversal: ";
    for(int i=0;i<inorder.size();i++){
        cout<<inorder[i]<<" ";
    }
    cout<<endl;
    //printing the postorder traversed vector
    cout<<"Postorder traversal: ";
    for(int i=0;i<postorder.size();i++){
        cout<<postorder[i]<<" ";
    }
    cout<<endl;
}
//main function
int main(){
    //creating a tree
    Treenode* root=new Treenode(1);
    root->left=new Treenode(2);
    root->right=new Treenode(3);
    root->left->left=new Treenode(4);
    root->left->right=new Treenode(5);
    root->right->left=new Treenode(6);
    root->right->right=new Treenode(7);
    //traveral function on root node
    traversal(root);
}
```
This will provide an output as:

Preorder traversal: 1 2 4 5 3 6 7 <br>
Inorder traversal: 4 2 5 1 6 3 7 <br>
Postorder traversal: 4 5 2 6 7 3 1

## Reference:
[take U forward - L13. Preorder Inorder Postorder Traversals in One Traversal | C++ | Java | Stack | Binary Trees](https://www.youtube.com/watch?v=ySp2epYvgTE&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=14)

