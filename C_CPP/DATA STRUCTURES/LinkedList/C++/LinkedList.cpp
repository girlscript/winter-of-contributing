#include<bits/stdc++.h>
using namespace std;
struct Node{
    int data;
    struct Node*next;
};

//print function
void print(struct Node* ptr){
    cout<<"list:"<<endl;
    while(ptr!=NULL){
        cout<<ptr->data<<"->";
        ptr=ptr->next;
    }
    cout<<"NULL"<<endl;
    
}

//main Body
int main(){
    int n, element;
  //memory allocation
    struct Node* head = new Node;
    struct Node* ptr = new Node;
    struct Node* q = new Node;

    cout<<"Enter number of Nodes: "<<endl;      //takes user input for Number of Nodes
    cin>>n;
    cout<<"Enter Elements: "<<endl;             //takes user input for elements of linked list
    cin>>element;
    q->data = element;
    q->next=NULL;
    head=q;
    ptr=head;

    for(int i=1;i<n;i++){
        cin>>element;
        struct Node* q = new Node;
        q->data=element;
        q->next=NULL;

        ptr->next=q;
        ptr=ptr->next;
    }
    ptr = head;
    print(ptr);
return 0;
}
