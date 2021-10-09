// A complete guide to the Linked list Basics

//starting with C++ basic codes
#include<bits/stdc++.h>
using namespace std;


//class for Linked List
class node{
public:
    int data;
    node *next;

    node(int d)
    //paramaterised constructor
{
    this->data=d;
    next=NULL;
}


};
//function for printing the linked list
void print(node *head){cout<<endl;
node *temp=head;
//checking condition
while(temp!=NULL){
    cout<<temp->data<<"->";
    temp=temp->next;
}
cout<<"NULL"<<endl;


}
//function for taking input and storing it the list dynamically
node* takeinput(void){
int data;
cin>>data;
node *head=NULL;
node *tail=NULL;
//stopping condition
//if the user enters -1 we stop taking input from the user
while(data!=-1){
//crreated a new node and paramaterised constructor is called and the value is stored .
    node *n=new node(data);
    //updating the head only when the list is empty
    if(head==NULL){
            head=n;tail=n;}
            //updating tail
    else{
        tail->next=n;
        tail=tail->next;

    }
    cin>>data;

}
return head;
}

// length function to calculate the length of the linked list
int length(node *head){
 // using temp to iterate over the linked list
node *temp=head;
//declared counter
int count=0;
// checking condition
while(temp!=NULL){
    count++;
    temp=temp->next;
}
//returning counter
return count;

}
//function for deleting ith node in the list
node* deleteithnode(node* head,int i){
    //created a node for storing current location
     node*curr=head;
     //used length function described to get the length of the linked list
     int len=length(head);
     //if the user wants delete the head node
if(i==0 && head){
//just move the head poniter to next node
    head=head->next;
    return head;
}
if(i>0 && i<len){
//iterating till i-1 ,so we could break the relation
    for(int j=0;j<i-1;j++){
        curr=curr->next;
    }
    curr->next=curr->next->next;
    return head;


}
//if the user wants to delete the node which is not valid, in that case do not do anything just return the head
return head;
}


int main(){
    int i;
    cout<<"enter data to the list"<<endl;
node*head=takeinput();//calling take input function
print(head);//printing linked list
cout<<endl<<"length of the Linked list is : "<<length(head);//calling length function
cout<<endl<<"enter the node to be deleted : ";cin>>i;
head=deleteithnode(head,i-1);//calling delete function
cout<<endl<<"new list after deleting the "<<i<<"th node :-"<<endl;
print(head);




}
