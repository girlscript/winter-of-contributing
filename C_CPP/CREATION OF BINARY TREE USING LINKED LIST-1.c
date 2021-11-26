#include<stdio.h>
#include<stdlib.h>
struct node
{
struct node *left;
int data;
struct node *right;
};
struct node *create()
{
int info;
struct node *nn;
nn=(struct node *)malloc(sizeof(struct node));
printf("\n\t\tenter data : ");
scanf("%d",&info);
nn->data=info;
nn->left=NULL;
nn->right=NULL;
int choice;
printf("\n\tpress 1 if %d has left node else 0 :",nn->data);
scanf("%d",&choice);
if(choice)
{
nn->left=create();
}
printf("\n\tpress 1 if %d has right node else 0 :",nn->data);
scanf("%d",&choice);
if(choice)
{
nn->right=create();
}
return nn;
}
int inorder(struct node *root)
{

if(root==NULL)
return 0;
else
{
inorder(root->left);
printf("\nroot data : %d ",root->data);
inorder(root->right);
}
}
int main()
{
struct node *root;
root=create();
printf("\ninorder traversal ");
inorder(root);
}
OUTPUT:
