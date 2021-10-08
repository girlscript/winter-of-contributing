## One shot DFS traversal
This documentation explains a unique approach of traversing a Binary Search Tree. Here we try to get preorder, inorder and postorder traversals by just one flow. We will be traversing the whole tree only once and obtain the inorder, preorder and postorder traversals.
### Approach
- Take a stack which can store a tree node and a number at one index (using struct). The structure looks something like:
```
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
```
vector<int> preorder;
    vector<int> inorder;
    vector<int> postorder;
```
- Insert rootnode with integer value 1.
```
stack<StackData*> res;
StackData* a=new StackData(1,root);
res.push(a);
```
Note: `Here the integer values which are stored with tree node lie in the range [1,3] where 1 denotes that preorder is to be performed, 2 denotes that preorder is done and inorder is to be performed while 3 denotes that both inorder and preorder are done and postorder is to be performed for that node. After all the traversals, the node is popped out of the stack.`
- Perform traversal till the time stack doesn't become empty.
```
while(!res.empty()){
    if(res.top()->data==1){
        preorder.push_back(res.top()->x->data);
        res.top()->data++;
        if(res.top()->x->left){
            StackData* v=new StackData(1,res.top()->x->left);
            res.push(v);
        }
    }
    if(res.top()->data==2){
        inorder.push_back(res.top()->x->data);
        res.top()->data++;
        if(res.top()->x->right){
            StackData* v=new StackData(1,res.top()->x->right);
            res.push(v);
        }
    }
    if(res.top()->data==3){
        postorder.push_back(res.top()->x->data);
        res.pop();
    }
}
```
Here, the logic is that if the number in the stack's top position is 1, then the node value is stored in preorder and the integer is incremented to 2. Then if left of the node exists in the tree, then that node is inserted in stack with an integer value 1.
Similarly, for integer value 2, inorder vector is taken into consideration and for integer value 3, postorder is taken into consideration. The postorder is a bit different from that of inorder and preorder because after postorder, no other traversal is left on the node and hence, nothing is to be inserted in the stack. Rather, the top of stack is popped out because it has been traversed already.

### Complete code for the one-shot-traversal:
```
#include<iostream>
#include<stack>
#include<vector>
using namespace std;

struct Treenode{
    int data;
    Treenode* left;
    Treenode* right;
    Treenode(int d){
        data=d;
        left=nullptr;
        right=nullptr;
    }
};

struct StackData{
    int data;
    Treenode* x;
    StackData(int c, Treenode* a){
        data=c;
        x=a;
    }
};

void traversal(Treenode* root){
    stack<StackData*> res;
    vector<int> preorder;
    vector<int> inorder;
    vector<int> postorder;
    StackData* a=new StackData(1,root);
    res.push(a);
    while(!res.empty()){
        if(res.top()->data==1){
            preorder.push_back(res.top()->x->data);
            res.top()->data++;
            if(res.top()->x->left){
                StackData* v=new StackData(1,res.top()->x->left);
                res.push(v);
            }
        }
        if(res.top()->data==2){
            inorder.push_back(res.top()->x->data);
            res.top()->data++;
            if(res.top()->x->right){
                StackData* v=new StackData(1,res.top()->x->right);
                res.push(v);
            }
        }
        if(res.top()->data==3){
            postorder.push_back(res.top()->x->data);
            res.pop();
        }
    }
    cout<<"Preorder traversal: ";
    for(int i=0;i<preorder.size();i++){
        cout<<preorder[i]<<" ";
    }
    cout<<endl;
    cout<<"Inorder traversal: ";
    for(int i=0;i<inorder.size();i++){
        cout<<inorder[i]<<" ";
    }
    cout<<endl;
    cout<<"Postorder traversal: ";
    for(int i=0;i<postorder.size();i++){
        cout<<postorder[i]<<" ";
    }
    cout<<endl;
}

int main(){
    Treenode* root=new Treenode(1);
    root->left=new Treenode(2);
    root->right=new Treenode(3);
    root->left->left=new Treenode(4);
    root->left->right=new Treenode(5);
    root->right->left=new Treenode(6);
    root->right->right=new Treenode(7);
    traversal(root);
}
```
This will provide an output as:

Preorder traversal: 1 2 4 5 3 6 7 <br>
Inorder traversal: 4 2 5 1 6 3 7 <br>
Postorder traversal: 4 5 2 6 7 3 1

### Reference:
https://www.youtube.com/watch?v=ySp2epYvgTE&list=PLgUwDviBIf0q8Hkd7bK2Bpryj2xVJk8Vk&index=14

