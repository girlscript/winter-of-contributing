# Merge two sorted linked lists

- Write a merge() function that takes two linked lists of sorted order, and merges both the linked list in increasing order. now, merge() function will return the new linked list
For example if the first linked list a is 11->44->57->78 and the other linked list b is 25->36->63, then merge() should return dummynode list 11->25->36->44->57->63->78. 

## Algorithm

- We used the temporary dummy node as the start of the result list. The pointer Tail always points to the last node in the resultant list, so traversing new nodes is easy. The dummynode gives tail something to point to initially when the result list is empty. This dummy node is enough.since it is temporary, and it is allocated in the stack. The loop proceeds till all the nodes are visited and removing one node from either from first linked list or from second linked list and adding it to the tail to form new linked list. When We are done,the result is in dummynode->next. 

- Time Complexity = O(m+n)
- where m is a length of first linked list and n is a length of second linked list
- Space Complexity = O(n)

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
    display(head1);//it will display linked list 1
    display(head2);//it will display linked list 2
    node* newhead=merge(head1,head2);
    display(newhead);// it will display resulted merged linked list
    return (0);
}
```

## OUTPUT
```CPP
 11->44->57->78->NULL
 25->36->63->NULL
 11->25->36->44->57->63->78->NULL
```
