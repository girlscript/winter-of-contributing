/* Program to reorder a LinkedList in the below given way
For example: Given 1->2->3->4->5 its reorder is 1->5->2->4->3. */
#include <iostream>
#include <stdlib.h>
using namespace std;
// Linked list Node
struct Node
{
    int data;
    struct Node* next;

    Node(int x)
    {
        data = x;
        next = NULL;
    }
};

void reorderList(struct Node* head);
// Function to create a new Node with given data
struct Node* newNode(int data) {
    struct Node* new_Node = new Node(data);
    new_Node->data = data;
    new_Node->next = NULL;
    return new_Node;
}
// Function to printList
void printList(struct Node* Node) {
    while (Node != NULL) {
        printf("%d ", Node->data);
        Node = Node->next;
    }
    printf("\n");
}
// Function to freeList
void freeList(struct Node* head) {
    struct Node* temp;
    while (head != NULL) {

        temp = head;
        head = head->next;
        free(temp);
    }
}
// driver code
int main(void)
{
    int n, m, i, x;
        struct Node* temp, *head;
        cout<< "Enter the size: ";
        cin >> n;
        cin >> x;
        head = new Node(x);
        temp = head;
        for (i = 0; i < n - 1; i++) {
            cin >> x;
            temp->next = new Node(x);
            temp = temp->next;
        }

        reorderList(head);
        printList(head);
        freeList(head);
        return 0;
}
// Function to reorderList
void reorderList(Node* head)
{
    Node *fast=head,*slow=head,*prev=NULL,*t;
    Node *new_head;
    if(head->next!=NULL&&head!=NULL)
    {
    while(fast!=NULL&&fast->next!=NULL)
    {
        prev=slow;
        fast=fast->next->next;
        slow=slow->next;
    }
    /* now prev is pointing the middle node of list and fast is pointing the last Node of the list,
       split the list into two parts and new head will point the 2 part */
    prev->next=NULL;
    new_head=slow;
    fast=NULL;
// will slow is not equal to NULL means the new_head!=empty run the loop and reverse the List
while(slow)
    {
        t=slow->next;
        slow->next=fast;
        fast=slow;
        slow=t;
    }
    new_head=fast;
    t=head;
    /* now pick alternate node from both and add it in the right place */
    while(t)
    {
    slow=new_head;
    new_head=new_head->next;
    slow->next=t->next;
    t->next=slow;
    prev=t->next;
    t=t->next->next;
    }
    if(new_head!=NULL)
    {
      prev->next=new_head;
    }
    }
}
/*
Input: Enter the size: 5
5,4,3,2,1
Output:5,1,4,2,3

Time complexity: O(N)
Space Complexity: O(1)
*/
