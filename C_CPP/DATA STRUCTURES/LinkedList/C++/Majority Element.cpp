#include <bits/stdc++.h>
using namespace std;

struct Node
{
    int data;
    Node * next;
    Node (int x)
    {
        data=x;
        next=NULL;
    }

};
void displayList(Node *head)
{
    while(head)
    {
        cout<<head->data<<" ";
        head=head->next;
    }
}

Node * joinTheLists(Node * head1, Node * head2)
{

   Node *temp=head1;
   while(temp->next)
   temp=temp->next;
       temp->next=head2;
       return head1;   
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n1;
        cin>>n1;

        int data;
        cin>>data;
        struct Node *head1 = new Node(data);
        struct Node *tail1 = head1;
        for (int i = 0; i < n1-1; ++i)
        {
            cin>>data;
            tail1->next = new Node(data);
            tail1 = tail1->next;
        }

        int n2;
        cin>>n2;

        cin>>data;
        struct Node *head2 = new Node(data);
        struct Node *tail2 = head2;
        for (int i = 0; i < n2-1; ++i)
        {
            cin>>data;
            tail2->next = new Node(data);
            tail2 = tail2->next;
        }

	     Node * newHead=joinTheLists(head1,head2);
	    displayList(newHead);
	    cout<<endl;
	}
	return 0;
} 

// Input:
// LinkedList1: 5
// LinkedList2: 1->2
// Output: 5 1 2

// Input:
// LinkedList1: 1->2->9->6->5->7
// LinkedList2: 99->8->4
// Output: 1 2 9 6 5 7 99 8 4
