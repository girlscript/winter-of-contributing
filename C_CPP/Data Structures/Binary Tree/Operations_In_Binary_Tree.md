# Operations In Binary Tree 

## CODE:

```cpp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    struct Node *lchild;
    int data;
    struct Node *rchild;
}*root=NULL;


// Insertion --------------------------------------->
void Insert(int key){
    struct Node *t=root;
    struct Node *r=NULL,*p;
    if(root==NULL){
        p=(struct Node *)malloc(sizeof(struct Node));
        p->data=key;
        p->lchild=p->rchild=NULL;
        root=p;
        return;
    }
    while(t!=NULL){
        r=t;
        if(key<t->data){
            t=t->lchild;
        }
        else if(key>t->data){
            t=t->rchild;
        }
        else{
            return;
        }
    }
    p=(struct Node *)malloc(sizeof(struct Node));
    p->data=key;
    p->lchild=p->rchild=NULL;
    if(key<r->data){
        r->lchild=p;
    }
    else {
        r->rchild=p;
    }
}

// Recursive Insertion -------------------------->
struct Node *RInsert(struct Node *p,int key){
    struct Node *t=NULL;
    if(p==NULL){
        t=(struct Node *)malloc(sizeof(struct Node));
        t->data=key;
        t->lchild=t->rchild=NULL;
        return t;
    }
    if(key < p->data)
        p->lchild=RInsert(p->lchild,key);
    else if(key > p->data)
        p->rchild=RInsert(p->rchild,key);
    return p;
}

// Finding the height of a binary search tree -------------------> 
int Height(struct Node *p){
    int x,y;
    if(p==NULL){
        return 0;
    }
    x=Height(p->lchild);
    y=Height(p->rchild);
    return x>y?x+1:y+1;
}

struct Node *InPre(struct Node *p){
    while(p && p->rchild!=NULL)
        p=p->rchild;
    return p;
}

struct Node *InSucc(struct Node *p){
    while(p && p->lchild!=NULL)
        p=p->lchild;
    return p;
}

// Deleting a node ----------------->
struct Node *Delete(struct Node *p,int key){
    struct Node *q;
    if(p==NULL)
        return NULL;
    if(p->lchild==NULL && p->rchild==NULL){
        if(p==root)
            root=NULL;
        free(p);
        return NULL;
    }
    if(key < p->data)
        p->lchild=Delete(p->lchild,key);
    else if(key > p->data)
        p->rchild=Delete(p->rchild,key);
    else{
        if(Height(p->lchild)>Height(p->rchild)){
            q=InPre(p->lchild);
            p->data=q->data;
            p->lchild=Delete(p->lchild,q->data);
        }
        else{
            q=InSucc(p->rchild);
            p->data=q->data;
            p->rchild=Delete(p->rchild,q->data);
        }
    }
    return p;
}



void Inorder(struct Node *p){
    if(p){
        Inorder(p->lchild);
        printf("%d ",p->data);
        Inorder(p->rchild);
    }
}


struct Node * Search(int key){
    struct Node *t=root;
    while(t!=NULL){
        if(key==t->data)
            return t;
        else if(key<t->data)
            t=t->lchild;
        else
            t=t->rchild;
    }
    return NULL;
}



static int count = 0;
int countnodes(struct Node *root)
{
    if(root != NULL)
    {
        countnodes(root->lchild);
        count++;
        countnodes(root->rchild);
    }
    return count;
}



void printLevelOrder(struct Node* root)
{
    int h = Height(root);
    int i;
    for (i=1; i<=h; i++){
        printGivenLevel(root, i);
    }
}

/* Print nodes at a given level */
void printGivenLevel(struct Node* root, int level)
{
    if (root == NULL)
        return;
    if (level == 1)
        printf("%d ", root->data);
    else if (level > 1)
    {
        printGivenLevel(root->lchild, level-1);
        printGivenLevel(root->rchild, level-1);
    }
}

int main(){
    int choice;
    struct Node *temp;
    root=RInsert(root,50);
    do{
        printf("Press-1 to insert an element into a Binary Tree: \n");
        printf("Press-2 to delete an element from a Binary Tree: \n");
        printf("Press-3 to traverse through the Binary Tree in INORDER: \n");
        printf("Press-4 to count the number of nodes in the Binary Tree: \n");
        printf("Press-5 to find the height of the Binary Tree: \n");
        printf("Press-6 to traverse tree in LEVEL ORDER: \n");
        printf("Press-7 to search a value in the Binary Tree: \n");
        scanf("%d", &choice);
        if(choice==1){
            int value;
            printf("Enter the value you wanna insert into the Binary Tree: ");
            scanf("%d", &value);
            RInsert(root, value);
        }else if(choice ==2){
            int valueToBeDeleted;
            printf("Enter the value you wanna delete from the Binary Tree: ");
            scanf("%d", &valueToBeDeleted);
            Delete(root, valueToBeDeleted);
        }else if(choice ==3){
            Inorder(root);
        }else if(choice ==4){
            printf("\n The number of nodes in the Binary Tree are = %d", countnodes(root));
        }else if(choice == 5){
            printf("\n The height of the Binary Tree is %d.", Height(root));
        }else if(choice == 6){
            printLevelOrder(root);
        }else if(choice == 7){
            int elementToBeSearched;
            printf("Enter the element to be searched for: ");
            scanf("%d", &elementToBeSearched);
            temp=Search(elementToBeSearched);
            if(temp!=NULL)
                printf("element %d is found\n",temp->data);
            else
                printf("element is not found\n");
        }
    }while(choice<8);

    printf("Program Terminated!");
    return 0;
}
```
