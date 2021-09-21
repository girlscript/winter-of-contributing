//Program to convert sorted LinkedList to BST
#include <bits/stdc++.h>
using namespace std;
// Linked List node structure
struct LNode
{
    int data;
    struct LNode* next;

    LNode(int x)
    {
        data = x;
        next = NULL;
    }
};
// BST Node structure
struct TNode
{

    int data;
    struct TNode* left;
    struct TNode* right;
    TNode(int x)
    {
        data=x;
        left=right=NULL;
    }
};
// function declaration
TNode* sortedListToBST(LNode* head);
// Pre-Order  Traverse
void preOrder(TNode* node)
{
    if (node == NULL)
        return;
    cout<<node->data<<" ";
    preOrder(node->left);
    preOrder(node->right);
}
// driver code
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;

        int data;
        cin>>data;
        LNode *head = new LNode(data);
        LNode *tail = head;
        for (int i = 0; i < n-1; ++i)
        {
            cin>>data;
            tail->next = new LNode(data);
            tail = tail->next;
        }
        TNode* Thead=sortedListToBST(head);
        preOrder(Thead);
        cout<<"\n";

    }
    return 0;
}
//recursive function to create LinkedList to BST
TNode* get(LNode *s,LNode *e)
{
  TNode *root=NULL;
    LNode *temp=s,*t=s,*pre=NULL,*t_pre=NULL;
    int last=0,middle=0;
    // if starting and end both are pointing same node then create that LinkedList to BST Node and return it
    if(s==e)
    {
        root=new TNode(temp->data);
        return root;
    }
    // while t or t->next !=Empty
    // this loop is to get the middle element between s to e
    while(t&&t->next)
    {
        pre=temp;
        temp=temp->next;
        t_pre=t;
        t=t->next->next;
        middle++;
    }
    last=middle*2;
    if(t!=NULL)
    last++;
    root=new TNode(temp->data);
    pre->next=NULL;
    // recursive call in certain condition
    if(s!=NULL)
    root->left=get(s,pre);
    if(t==NULL && temp->next!=NULL)
    root->right=get(temp->next,t_pre->next);
    else if(t!=NULL && temp->next!=NULL)
    root->right=get(temp->next,t);
    return root;
}
// the function which calls get to convert LinkedList to BST
TNode* sortedListToBST(LNode *head)
{
    TNode *root=NULL;
    LNode *temp=head,*t=head,*pre=head,*t_pre;
    // if the head->next is empty convert that list to BST and return it
    if(head->next==NULL)
    {
        root=new TNode(temp->data);
        return root;
    }
    int last=0,middle=0;
    //finding the middle element
    while(t&&t->next)
    {
        pre=temp;
        temp=temp->next;
        t_pre=t;
        t=t->next->next;
        middle++;
    }
    last=middle*2;
    if(t!=NULL)
    last++;
    // calls to get function
     root=new TNode(temp->data);
    pre->next=NULL;
    root->left=get(head,pre);
    if(t==NULL&& temp->next!=NULL)
    root->right=get(temp->next,t_pre->next);
    else if(t!=NULL && temp->next!=NULL)
    root->right=get(temp->next,t);
    return root;
}
/*
Input: 1 2 3 4 5 6 7
Output:4 2 1 3 6 5 7
Time complexity: O(N)
Space complexity: O(N)
*/
