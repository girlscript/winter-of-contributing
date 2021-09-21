/* Program to reverse a sublist of a LinkedList */
#include<bits/stdc++.h>
using namespace std;

/* Link list node */
struct Node {
	int data;
	struct Node *next;
	Node(int x) {
		data = x;
		next = NULL;
	}
};
class Solution
{
    public:
    // function to reverse the sublist
    Node* reverseBetween(Node* head, int m, int n)
    {
        int i=1;
        Node *prev=NULL,*forward=NULL,*new_head,*t,*temp=head,*before=NULL,*last;
        // this loop will run till the m th node
        while(i<m)
        {
            prev=temp;
            temp=temp->next;
            i++;
        }
        // add the node as a new head
        new_head=temp;
        // run till the n th node didn't came
        while(i<n)
        {
            temp=temp->next;
            i++;
        }
        // now assign temp->next means the n th node in forward
        forward=temp->next;
        // assign NULL to temp->next
        temp->next=NULL;
        // add then assign the new head to temp and last
        temp=new_head;
        last=new_head;
        // run till the new node becomes empty
        while(temp)
        {
            t=temp->next;
            temp->next=before;
            before=temp;
            temp=t;
        }
        // assign before in new head
        new_head=before;
if(forward!=NULL)
last->next=forward;
if(prev!=NULL)
prev->next=new_head;
else if(prev==NULL)
head=new_head;
return head;
    }
};
// function to print the current linked list data
void printList(struct Node *head)
{
	struct Node *temp = head;
	while (temp != NULL)
	{
		printf("%d ", temp->data);
		temp = temp->next;
	}
}
//driver code
int main()
{
	int T;
	cin >> T;

	while (T--)
	{
		int N, m, n;
		cin >> N>>m>>n;

		Node *head = NULL;
		Node *temp = head;

		for (int i = 0; i < N; i++)
        {
			int data;
			cin >> data;
			if (head == NULL)
				head = temp = new Node(data);
			else
			{
				temp->next = new Node(data);
				temp = temp->next;
			}
		}
        Solution ob;
		Node* newhead = ob.reverseBetween(head, m, n);
		printList(newhead);
		cout << "\n";
	}
	return 0;
}
/*
Input: 1->7->5->3->9->8->10->2->2->5
Output: 2 10 8 9 3 5 7 1 2 5
Time complexity: O(N)
Space Complexity: O(1)
*/
