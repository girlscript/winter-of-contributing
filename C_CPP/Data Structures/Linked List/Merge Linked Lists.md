# Merge two sorted linked lists

- Write a merge() function that takes two lists, each of which is sorted in increasing order, and merges the two together into one list which is in increasing order. merge() should return the new list. The new list should be made by splicing together the nodes of the first two lists.

For example if the first linked list a is 5->10->15 and the other linked list b is 2->3->20, then merge() should return a pointer to the head node of the merged list 2->3->5->10->15->20.

```CPP
#include<iostream>
using namespace std;

class node{
    public:
    int data;
    node* next;

    node(int val){
        data=val;
        next=NULL;
    }
};


void insertattail(node* &head, int val){

    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }

    node* temp=head;
    while(temp->next!=NULL){
        temp=temp->next;
    }
    temp->next =n;
}

void display(node* head){
    node* temp=head;
    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}

node* merge(node* &head1,node* head2){
    node* p1=head1;
    node* p2=head2;
    node* dummynode=new node(-1);
    node* p3= dummynode;

    while(p1!=NULL && p2!=NULL){
        if(p1->data <p2->data){
            p3->next=p1;
            p1=p1->next;
        }
        else{
            p3->next=p2;
            p2=p2->next;
        }
        p3=p3->next;
    }
    while(p1!=NULL){
        p3->next=p1;
        p1=p1->next;
        p3=p3->next;
    }
    while(p2!=NULL){
        p3->next=p2;
        p2=p2->next;
        p3=p3->next;
    }
    return dummynode->next;
}

int main(){
    node* head1=NULL;
    node* head2=NULL;
    int arr1[]={1,4,5,7};
    int arr2[]={2,3,6};
    for(int i=0;i<4;i++){
        insertattail(head1,arr1[i]);
    }
    for(int i=0;i<3;i++){
        insertattail(head2,arr2[i]);
    }
    display(head1);
    display(head2);
    node* newhead=merge(head1,head2);
    display(newhead);
    return (0);
}
```

## OUTPUT
```CPP
 1->4->5->7->NULL
 2->3->6->NULL
 1->2->3->4->5->6->7->NULL
```
