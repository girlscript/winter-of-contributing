#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node
{
struct node *left;
int data;
struct node *right;
};
int key;
bool search();
struct node *create()
{
int info;
struct node *nn;
nn=(struct node *)malloc(sizeof(struct node));
printf("enter data : \n");
scanf("%d",&info);
nn->data=info;
nn->left=NULL;
nn->right=NULL;
int choice;
printf("press 1 if %d has left node else 0 :\n",nn->data);
scanf("%d",&choice);
if(choice)
{
nn->left=create();
}
printf("press 1 if %d has right node else 0 :\n",nn->data);
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
printf("root data : %d \n",root->data);
inorder(root->right);
}
}
bool search(struct node * root,int key)
{
if(root==NULL)
return 0;
if(root->data==key)
{
return true;
}
search(root->left,key);
search(root->right,key);
return false;
}
int main()
{
struct node *root;
root=create();
printf("inorder traversal \n");
inorder(root);
printf("Enter the value you want to search:\n");
scanf("%d",&key);
search(root,key);
if(search(root,key)==true)
printf("element found");
else
printf("element not found");
}
