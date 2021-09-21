#include<iostream>
#include<stdlib.h>
using namespace std;
class Node
{
public:                         // CREATING A NODE WITH TWO POINTERS
    int info;                   // LEFT REFERENCE AND RIGHT REFERENCE
    Node *left,*right;
};
class List:public Node
{
 
    Node *first,*last;
public:
    List()                      // constructor to initialize the head and tail node
    {
        first=NULL;
        last=NULL;
    }
    void create();
    void insert();
    void delet();
    void display();
    void search();
};
void List::create()                //METHOD TO CREATE A NEW NODE
{
    Node *temp;
    temp=new Node;
    int n;
    cout<<"\nEnter an Element:";
    cin>>n;
    temp->info=n;
    temp->left=NULL;
    temp->right=NULL;
    if(first==NULL)                // CHECKING IF THE CREATED NODE IS HEAD
    {
        first=temp;
        last=first;
    }
 
    else
    {
        last->right=temp;
        temp->left=last;
        last=temp;
    }
}
void List::insert()            // METHOD TO INSERT NEW NODE AT HEAD,TAIL AND 
{                              // AT ANY POSITION IN THE LIST
    Node *prev,*cur;
    cur=first;prev=NULL;
    int pos,ch,n,count=1;
    Node *temp=new Node;
    cout<<"\nEnter an Element:";
    cin>>n;
    temp->info=n;
    temp->left=NULL;
    temp->right=NULL;
    cout<<"\nINSERT AS\n1:FIRSTNODE\n2:LASTNODE\n3:IN BETWEEN FIRST&LAST NODES\n";
    cout<<"\nEnter Your Choice:";
    cin>>ch;                        // ASKING THE CHOICE FROM THE USER
    switch(ch)                      // AND INSERTING DEPENDING ON IT
    {
    case 1:
        temp->right=first;
        first=temp;
        break;
    case 2:
        last->right=temp;
        temp->left=last;
        last=temp;
        break;
    case 3:
        cout<<"\nEnter the Position to Insert:";
        cin>>pos;
        while(count!=pos)
        {
            prev=cur;                   // MAINTAINING A PREVIOUS PREVIOUS NODE VALUE 
            cur=cur->right;             // TO LINK IT TO NEW NODE INSERTED
            count++;
        }
        if(count==pos)
        {
            prev->right=temp;
            temp->left=prev;
            temp->right=cur;
            cur->left=temp;
        }
        else
            cout<<"\nNot Able to Insert";
        break;
    }
}
void List::delet()          // METHOD TO DELETE A NODE FROM HEAD,TAIL OR ANYOTHER POSITION FROM LIST
{
    Node *prev=NULL,*cur=first,*next=NULL;
    int count=1,pos,ch;
    cout<<"\nDELETE\n1:FIRSTNODE\n2:LASTNODE\n3:IN BETWEEN FIRST&LAST NODES";
    cout<<"\nEnter Your Choice:";
    cin>>ch;
    switch(ch)                      // ASKING THE CHOICE FROM THE USER
    {                               // AND INSERTING DEPENDING ON IT
    case 1:
        if(first!=NULL)
        {
            cout<<"\nDeleted Element is "<<first->info;
            first=first->right;
            first->left=NULL;
        }
        else
            cout<<"\nNot Able to Delete";
        break;
    case 2:
        while(cur!=NULL)
        {
            prev=cur;
            cur=cur->right;
        }
        if(cur==last)
        {
            cout<<"\nDeleted Element is: "<<cur->info;
            prev->right=NULL;
            last=prev;
        }
        else
            cout<<"\nNot Able to Delete";
        break;
    case 3:
        cout<<"\nEnter the Position of Deletion:";
        cin>>pos;
        while(count!=pos)
        {
            prev=cur;                    // MAINTAINING A PREVIOUS NODE VALUE TO LINK
            cur=cur->right;              // IT TO THE NODE NEXT TO DELETED ONE
            next=cur;
            count++;
        }
        if(count==pos)
        {
            cout<<"\nDeleted Element is: "<<cur->info;
            prev->right=cur->right;
            next->left=prev;
        }
        else
            cout<<"\nNot Able to Delete";
        break;
    }
}
void List::display()        // METHOD TO DISPLAY THE DOUBLE LINKED LIST
{
    Node *temp=first;
    if(temp==NULL)
    {
        cout<<"\nList is Empty\n";
        return;
    }
    while(temp!=NULL)           // TRAVERSING THE LIST TO DISPLAY THE NODE VALUES
    {
        cout<<temp->info;
        cout<<" <==> ";
        temp=temp->right;
    }
    cout<<"NULL\n";
}
void List::search()         // METHOD TO SEARCH A NODE VALUE FROM LINKED LIST
{
    int value,pos=0;
    bool flag=false;
    if(first==NULL)
    {
        cout<<"List is Empty";
        return;
    }
    cout<<"Enter the Value to be Searched:";
    cin>>value;
    Node *temp;
    temp=first;
    while(temp!=NULL)
    {
        pos++;
        if(temp->info==value)       //TRAVERSING THE LIST UNTIL THE NODE VALUE IS FOUND
        {
            flag=true;
            cout<<"Element"<<value<<"is Found at "<<pos<<" Position";
            return;
        }
        temp=temp->right;
    }
    if(!flag)
    {
        cout<<"Element "<<value<<" not Found in the List";
    }
}
int main()
{
    List l;
    int ch;
    while(1)
    {
        cout<<"\n**** MENU ****";
        cout<<"\n1:CREATE\n2:INSERT\n3:DELETE\n4:SEARCH\n5:DISPLAY\n6:EXIT\n";
        cout<<"\nEnter Your Choice:";
        cin>>ch;
        switch(ch)
        {
        case 1:
            l.create();
            break;
        case 2:
            l.insert();
            break;
        case 3:
            l.delet();
            break;
        case 4:
            l.search();
            break;
        case 5:
            l.display();
            break;
        case 6:
            return 0;
        }
    }
    return 0;
}
