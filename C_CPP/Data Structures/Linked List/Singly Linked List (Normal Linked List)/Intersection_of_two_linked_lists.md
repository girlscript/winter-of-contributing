# Intersection Point Of Two Linked-lists 
### To find the intersection point of two linked lists:
- Intialize two variables l1 and l2 with length   of respective linked lists head1 and head2.
- Now get the absolute difference of linked lists lengths and assign pointer1 (p1) with bigger linked list's head node 
  and pointer2 (p2) with smaller linked list's head node.
- Now traverse p1 till the difference value so that intersection point is at same distance from both pointers.
- Now traverse both the pointers simultaneously and check if p1 meets p2(p1==p2)
- If condition matches return that node data/value.
- Else no intersection point -- Return -1


### The input is as follows:
- line1: no of nodes in the first linked list
- line2: enter first linked list elements
- line3: no of nodes in the second linked list
- line4: enter second linked list elements
- line5: no of nodes in common linked list
- line6: enter common linked list elements

### The output is as follows:
- line1: First Linked list after intersection
- line2: Second Linked list after intersection
- line3: The intersection point


## Code:
```c
#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    struct Node *next;
    Node(){}
    Node(int x) {
        data = x;
        next = NULL;
    }
};

void display(Node *head)
{
    Node *traverse=NULL;
    traverse=head;
    while(traverse!=NULL)
    {
        cout << traverse->data << " ";
        traverse=traverse->next;
    }
}
int Listlength(Node* head)
{
    Node* current = head;
    int count = 0;
    while (current != NULL) 
	{
        count++;
        current = current->next;
    }
 
    return count;
}
int intersection(Node* &head1, Node* &head2)
{
	int l1=Listlength(head1);
	int l2=Listlength(head2);
	
	int d=0;
	Node* p1;
	Node* p2;
	
	if(l1>l2)
	{
		d=l1-l2;
		p1=head1;
		p2=head2;
	}
	else
	{
		d=l2-l1;
		p1=head2;
		p2=head1;
	}
	
	while(d)
	{
		p1=p1->next;
		if(p1==NULL)
		{
			return -1;
		}
		d--;
	}
	
	while(p1!=NULL && p2!=NULL)
	{
		if(p1==p2)
		return p1->data;
		
		p1=p1->next;
		p2=p2->next;
	}
	return -1;
}
int main()
{
	Node* head1=NULL;
	Node* head2=NULL;
	Node *t1,*t2;
	int n1,n2,n,d;
	cout<<"Enter size of Linked list 1:";
	cin>>n1;
    cin>>d;
    //input linked list
	head1=t1=new Node(d);
	for(int i=1;i<n1;i++)
	{
		cin>>d;
		t1->next=new Node(d);
		t1=t1->next;
	}
	cout<<"Enter size of Linked list 2:";
	cin>>n2;
    cin>>d;
    //input linked list
	head2=t2=new Node(d);
	for(int i=1;i<n2;i++)
	{
		cin>>d;
		t2->next=new Node(d);
		t2=t2->next;
	}
	cout<<"Enter size of common linked list:";
	cin>>n;
	cin>>d;
	t1->next=new Node(d);
    t2->next=new Node(d);
	t2=t2->next;
	t1->next=t2;
    //input linked list
	for(int i=1;i<n;i++)
	{
		cin>>d;
		t2->next=new Node(d);
		t2=t2->next;
	}
	cout<<"\nLinked list 1: ";
	display(head1);
	cout<<"\nLinked list 2: ";
	//cout<<endl;
	display(head2);
	cout<<"\nIntersection Point: ";
	//cout<<endl;
    cout<<intersection(head1,head2);
    
    
	return 0;
}
```


#### Test cases:
```c
Sample Input 1;
1
1
2
2 3
3
4 5 6
Sample Output 1:
linked list 1: 1 4 5 6 
linked list 2: 2 3 4 5 6 
Intersection point: 4
Sample Input 2:
	 
3
9 8 7
4
2 3 6 5
3
15 4 19
Sample Output 2:
linked list 1: 9 8 7 15 4 19 
linked list 2: 2 3 6 5 15 4 19 
Intersection point: 15
```


#### Complexities:
```c
Time Complexity: O(N+M)
Auxiliary Space: O(1)
```
