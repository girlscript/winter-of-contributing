# About AVL Tree

###  **What the AVL Tree is**
•	It is named AVL after its inventors names Adelson, Velsky and Landis .

•	Basically AVL Trees are Binary Search Trees in which the difference between the height of the left and right subtree is either -1 or 0 or +1.

•	AVL trees are also called self-balancing binary search tree.
###  **Balancing Factor in AVL Tree**

•	Balancing factor is the attribute of every node in AVL trees that helps to monitor trees height.

•	Balancing Factor = Height of Left Subtree-Height of Right Subtree

•	If BF comes -1 then it is called the tree is right heavy.

•	If BF comes +1 then it is called the tree is left heavy.

•	If BF comes 0 then it is called the tree is perfectly balanced
### **Rotations in AVL Tree**
To make AVL Trees balanced we perform rotations in it:-

•	Left-Left Rotation(LL):- Inserting node on left of left subtree.

•	Right-Right Rotation(RR):- Inserting node on right of right subtree.

•	Left-Right Rotation(LR):- Inserting node on right of left subtree.

•	Right-Left Rotation(RL):- Inserting node on left of right subtree.
### **Insertion in AVL Trees**
•	Insert operation is almost same as simple binary search tree.

•	After the every insertion we balanced the height of the tree.

•	Insert operation takes O(logn) worst time complexity.
### **Deletion in AVL  Trees**
•	After deletion we restructure the tree if needed to maintains its height.

Example Code:-
```cpp
#include <iostream>
#include <queue>
#include <unordered_map>
using namespace std;

struct node {
    struct node *left;
    int data;
    int height;
    struct node *right;

};

class AVL
{
private:
    
public:
    struct node * root;
    AVL(){
        this->root = NULL;

    }

    int calheight(struct node *p){

            if(p->left && p->right){
            if (p->left->height < p->right->height)
                return p->right->height + 1;
            else return  p->left->height + 1;
            }
            else if(p->left && p->right == NULL){
               return p->left->height + 1;
            }
            else if(p->left ==NULL && p->right){
               return p->right->height + 1;
            }
            return 0;

    }

    int bf(struct node *n){
            if(n->left && n->right){
                return n->left->height - n->right->height; 
            }
            else if(n->left && n->right == NULL){
                return n->left->height; 
            }
            else if(n->left== NULL && n->right ){
                return -n->right->height;
            }
    }

    struct node * llrotation(struct node *n){
        struct node *p;
        struct node *tp;
        p = n;
        tp = p->left;

        p->left = tp->right;
        tp->right = p;

        return tp; 
    }


    struct node * rrrotation(struct node *n){
        struct node *p;
        struct node *tp;
        p = n;
        tp = p->right;

        p->right = tp->left;
        tp->left = p;

        return tp; 
    }


    struct node * rlrotation(struct node *n){
        struct node *p;
        struct node *tp;
        struct node *tp2;
        p = n;
        tp = p->right;
        tp2 =p->right->left;

        p -> right = tp2->left;
        tp ->left = tp2->right;
        tp2 ->left = p;
        tp2->right = tp; 
        
        return tp2; 
    }

    struct node * lrrotation(struct node *n){
        struct node *p;
        struct node *tp;
        struct node *tp2;
        p = n;
        tp = p->left;
        tp2 =p->left->right;

        p -> left = tp2->right;
        tp ->right = tp2->left;
        tp2 ->right = p;
        tp2->left = tp; 
        
        return tp2; 
    }

    struct node* insert(struct node *r,int data){
        
        if(r==NULL){
            struct node *n;
            n = new struct node;
            n->data = data;
            r = n;
            r->left = r->right = NULL;
            r->height = 1; 
            return r;             
        }
        else{
            if(data < r->data)
            r->left = insert(r->left,data);
            else
            r->right = insert(r->right,data);
        }

        r->height = calheight(r);

        if(bf(r)==2 && bf(r->left)==1){
            r = llrotation(r);
        }
        else if(bf(r)==-2 && bf(r->right)==-1){
            r = rrrotation(r);
        }
        else if(bf(r)==-2 && bf(r->right)==1){
            r = rlrotation(r);
        }
        else if(bf(r)==2 && bf(r->left)==-1){
            r = lrrotation(r);
        }        

        return r;

        }

    void levelorder_newline(){
        if (this->root == NULL){
            cout<<"\n"<<"Empty tree"<<"\n";
            return;            
        }
        levelorder_newline(this->root);
    }

    void levelorder_newline(struct node *v){
        queue <struct node *> q;
        struct node *cur;
        q.push(v);
        q.push(NULL);      

        while(!q.empty()){
            cur = q.front();
            q.pop();
            if(cur == NULL && q.size()!=0){
                cout<<"\n";
                
                q.push(NULL);
                continue;
            }
            if(cur!=NULL){
                cout<<" "<<cur->data;

                if (cur->left!=NULL){
                q.push(cur->left);
                }
                if (cur->right!=NULL){
                    q.push(cur->right);
                }
            }
            
            
        }
    }
 
    struct node * deleteNode(struct node *p,int data){

        if(p->left == NULL && p->right == NULL){
                if(p==this->root)
                    this->root = NULL;
            delete p;
            return NULL;
        }

        struct node *t;
        struct node *q;
        if(p->data < data){
            p->right = deleteNode(p->right,data);
        }
        else if(p->data > data){
            p->left = deleteNode(p->left,data);
        }
        else{
            if(p->left != NULL){
                q = inpre(p->left);
                p->data = q->data;
                p->left=deleteNode(p->left,q->data);
            }
            else{
                q = insuc(p->right);
                p->data = q->data;
                p->right = deleteNode(p->right,q->data);
            }
        }

        if(bf(p)==2 && bf(p->left)==1){ p = llrotation(p); }                  
        else if(bf(p)==2 && bf(p->left)==-1){ p = lrrotation(p); }
        else if(bf(p)==2 && bf(p->left)==0){ p = llrotation(p); }
        else if(bf(p)==-2 && bf(p->right)==-1){ p = rrrotation(p); }
        else if(bf(p)==-2 && bf(p->right)==1){ p = rlrotation(p); }
        else if(bf(p)==-2 && bf(p->right)==0){ p = llrotation(p); }

        
        return p;
    }

     struct node* inpre(struct node* p){
        while(p->right!=NULL)
            p = p->right;
        return p;    
    }

    struct node* insuc(struct node* p){
        while(p->left!=NULL)
            p = p->left;

        return p;    
    }

    ~AVL(){

    }
};


int main(){

    AVL b;
    int c,x;

    do{
        cout<<"\n1.Display levelorder on newline";
        cout<<"\n2.Insert";
        cout<<"\n3.Delete\n";
        cout<<"\n0.Exit\n";
        cout<<"\nChoice: ";

        cin>>c;

        switch (c)
        {
        case 1:
            b.levelorder_newline();
            // to print the tree in level order
            break;
                  
        case 2:
            cout<<"\nEnter no. ";
            cin>>x;
            b.root = b.insert(b.root,x);
            break;
        
        case 3:
            cout<<"\nWhat to delete? ";
            cin>>x;
            b.root = b.deleteNode(b.root,x);
            break;
            
        case 0:
            break;
        }

     } while(c!=0);
  
}

Output:-
1.Display levelorder on newline
2.Insert
3.Delete

0.Exit

Choice: 2

Enter no. 10

1.Display levelorder on newline
2.Insert
3.Delete

0.Exit

Choice: 2

Enter no. 20

1.Display levelorder on newline
2.Insert
3.Delete

0.Exit

Choice: 1
 10
 20
 ```
### **Advantages of AVL Trees**
-	The height of the AVL tree is balanced.
-	Gives better search time complexity when compared with simple binary search trees.
### **Disadvantages of AVL Trees**
-	It have high constant factor for some operations

