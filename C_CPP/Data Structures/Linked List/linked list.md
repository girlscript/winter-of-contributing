## Implementation of Linked List

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
1 2 3 

- Time complexity O(n)
- Space complexity O(1)

## Counting total elements in linked list 

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

## OUTPUT
1->2->3->6->7->Total


- Time complexity O(n)
- Space complexity O(1)
