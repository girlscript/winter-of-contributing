#include<stdio.h>

#include<stdlib.h>
struct tree
{
int data;
struct tree *left;
struct tree *right;
};
typedef struct tree bt;
bt *node;
void postorder();
void preorder();
void inorder();
bt* create(bt *node, int data)
{
if(node==NULL)
{
bt *temp;
temp=(bt*)malloc(sizeof(bt));
temp->data=data;
temp->left=temp->right=NULL;
return temp;
}
if(data<(node->data))
{
node->left=create(node->left, data);
}
else if(data>node->data)
{
node->right=create(node->right,data);
}
return node;
}
void preorder(bt *node){
if(node!=NULL){
printf("%d\t", node->data);
preorder(node->left);
preorder(node->right);
}
}
void postorder(bt *node){

if(node!=NULL){
postorder(node->left);
postorder(node->right);
printf("%d\t", node->data);
}
}

void inorder(bt *node)
{
if(node != NULL)
{
inorder(node->left);
printf("%d\t", node->data);
inorder(node->right);
}
}
int main()
{
int data, ch,i,n;
bt *root=NULL;
printf("\n Enter the number of
nodes i.e. n \n"); scanf("%d",&n);
printf("\n Enter the values\n");
for(i=1;i<=n;i++)
{
scanf("%d",&data);
root=create(root,data);
}
printf("\n PRE-ORDER Traversal :\n");
preorder(root);
printf("\n IN-ORDER Traversal :\n");
inorder(root);
printf("\n POST-ORDER Traversal :\n");
postorder(root);
}
