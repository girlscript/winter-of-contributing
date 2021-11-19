# Operations In Binary Tree 

### Referred : https://www.geeksforgeeks.org/binary-search-tree-set-2-delete/ and https://www.geeksforgeeks.org/binary-search-tree-set-1-search-and-insertion/

## CODE:

```cpp
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Node{
    struct Node *lchild;
    int data;
    struct Node *rchild;
}*rootnode = NULL;


// Insertion --------------------------------------->
void Insert(int key){
    struct Node *t = rootnode;
    struct Node *r = NULL,*p;
    if (rootnode == NULL){
        p = (struct Node *)malloc(sizeof(struct Node));
        p->data = key;
        p->lchild = p->rchild = NULL;
        rootnode = p;
        return;
    }
    while(t != NULL){
        r = t;
        if(key<t->data){
            t = t->lchild;
        }
        else if(key > t->data){
            t = t->rchild;
        }
        else{
            return;
        }
    }
    p = (struct Node *)malloc(sizeof(struct Node));
    p->data = key;
    p->lchild = p->rchild = NULL;
    if(key < r->data){
        r->lchild = p;
    }
    else {
        r->rchild = p;
    }
}

// Recursive Insertion -------------------------->
struct Node *RInsert(struct Node *p,int key){
    struct Node *t = NULL;
    if(p == NULL){
        t = (struct Node *)malloc(sizeof(struct Node));
        t->data = key;
        t->lchild = t->rchild = NULL;
        return t;
    }
    if(key < p->data)
        p->lchild = RInsert(p->lchild,key);
    else if(key > p->data)
        p->rchild = RInsert(p->rchild,key);
    return p;
}

// Finding the height of the B.Tree -------------------> 
int Height(struct Node *p){
    int x,y;
    if(p == NULL){
        return 0;
    }
    x = Height(p->lchild);
    y = Height(p->rchild);
    return x > y ? x+1:y+1;
}

struct Node *InPre(struct Node *p){
    while(p && p->rchild != NULL)
        p = p->rchild;
    return p;
}

struct Node *InSucc(struct Node *p){
    while(p && p->lchild != NULL)
        p = p->lchild;
    return p;
}

// Deleting a node ----------------->
struct Node *Delete(struct Node *p,int key){
    struct Node *q;
    if(p == NULL)
        return NULL;
    if(p->lchild == NULL && p->rchild == NULL){
        if(p == rootnode)
            rootnode = NULL;
        free(p);
        return NULL;
    }
    if(key < p->data)
        p->lchild = Delete(p->lchild,key);
    else if(key > p->data)
        p->rchild = Delete(p->rchild,key);
    else{
        if(Height(p->lchild) > Height(p->rchild)){
            q = InPre(p->lchild);
            p->data = q->data;
            p->lchild = Delete(p->lchild,q->data);
        }
        else{
            q = InSucc(p->rchild);
            p->data = q->data;
            p->rchild = Delete(p->rchild,q->data);
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
    struct Node *t = rootnode;
    while(t != NULL){
        if(key == t->data)
            return t;
        else if(key < t->data)
            t = t->lchild;
        else
            t = t->rchild;
    }
    return NULL;
}



static int count = 0;
int countnodes(struct Node *rootnode)
{
    if(rootnode != NULL)
    {
        countnodes(rootnode->lchild);
        count++;
        countnodes(rootnode->rchild);
    }
    return count;
}



void printLevelOrder(struct Node* rootnode)
{
    int h = Height(rootnode);
    int i;
    for (i = 1; i <= h; i++){
        printGivenLevel(rootnode, i);
    }
}

/* Print nodes at a given level */
void printGivenLevel(struct Node* rootnode, int level)
{
    if (rootnode == NULL)
        return;
    if (level == 1)
        printf("%d ", rootnode->data);
    else if (level > 1)
    {
        printGivenLevel(rootnode->lchild, level-1);
        printGivenLevel(rootnode->rchild, level-1);
    }
}

int main(){
    int choice;
    struct Node *temp;
    rootnode = RInsert(rootnode,50);
    do{
        printf("Operations: \n");
        printf("Press-1 Insertion: \n");
        printf("Press-2 Deletion: \n");
        printf("Press-3 Traversing in (INORDER): \n");
        printf("Press-4 Counting total nodes: \n");
        printf("Press-5 Finding the height: \n");
        printf("Press-6 Traversing in (LEVEL ORDER): \n");
        printf("Press-7 Searching: \n");
        scanf("%d", &choice);
        if (choice == 1){
            int value;
            printf("\n Input the value to insert in this B-Tree: ");
            scanf("%d", &value);
            RInsert(rootnode, value);
        }else if (choice == 2){
            int valueToBeDeleted;
            printf("\n  Put in the value to delete from this B-Tree: ");
            scanf("%d", &valueToBeDeleted);
            Delete(rootnode, valueToBeDeleted);
        }else if (choice == 3){
            Inorder(rootnode);
        }else if (choice == 4){
            printf("\n Total no. of nodes = %d", countnodes(rootnode));
        }else if (choice == 5){
            printf("\n The height of this B-Tree is %d.", Height(rootnode));
        }else if (choice == 6){
            printLevelOrder(rootnode);
        }else if (choice == 7){
            int elementToBeSearched;
            printf("Put in the element you want to search in this B-Tree: ");
            scanf("%d", &elementToBeSearched);
            temp=Search(elementToBeSearched);
            if (temp!=NULL)
                printf("element %d is found\n",temp->data);
            else
                printf("element is not found\n");
        }
    }while(choice<8);

    printf("Program Terminated!");
    return 0;
}
```
