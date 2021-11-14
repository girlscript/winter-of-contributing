## Implementation of Linked List


- To insert a node, we have to redirect the next pointer of the previous node to point to the new node instead of the current one and the next pointer of the new node must point to the original next node.To insert a node at the front of the Linked List, the head pointer should point to the new node and the next pointer of the new node must point to the previous first node.
```CPP
#include<iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
};

int main()
{
    node* head=NULL;
    node* second=NULL;
    node* third=NULL;

    head=new node();
    second=new node();
    third=new node();

    head->data=1;
    head->next=second;

    second->data=2;
    second->next=third;

    third->data=3;
    third->next=NULL;
    cout<<head->data<<" "<<second->data<<" "<<third->data;

    return(0);
}
```
## OUTPUT
```CPP
1 2 3 
```
- Time complexity O(n)
- Space complexity O(1)

## Counting total elements in linked list 

- To insert a node, we have to redirect the next pointer of the previous node to point to the new node instead of the current one and the next pointer of the new node must point to the original next node.To insert a node at the front of the Linked List, the head pointer should point to the new node and the next pointer of the new node must point to the previous first node. And by using count variable we will count the number of nodes present in the linked list.

```CPP
#include<iostream>
#include<conio.h>
using namespace std;
struct node{
    int data;
    struct node *next;
};

int main()
{
    int d,ans,count=0;
    struct node *head=NULL,*list,*next,*temp;
    do{
        temp=(struct node*)new node;
        cout<<"Enter data";
        cin>>d;
        temp->data=d;
        temp->next=NULL;
        if(head==NULL)
        head=temp;
        else
        {
            list->next=temp;
        }
        list=temp;
        cout<<"Do yo want to continue?"<<endl;
        cin>>ans;
    }
    while(ans==1);
    struct node *p;
    p=head;
    while(p!=NULL)
    {
        cout<<p->data<<"->";
        p=p->next;
        count++;
        
    }
    cout<<"Total linked list = "<<count<<endl;
}
```
## INPUT
```CPP
Enter data 1
Do yo want to continue?
1
Enter data 2
Do yo want to continue?
1
Enter data 3
Do yo want to continue?
1
Enter data 6
Do yo want to continue?
1
Enter data 7
Do yo want to continue?
0
```
## OUTPUT
```CPP
1->2->3->6->7->Total
```

- Time complexity O(n)
- Space complexity O(1)
