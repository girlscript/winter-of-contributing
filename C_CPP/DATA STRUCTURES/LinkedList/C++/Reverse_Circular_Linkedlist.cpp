/* Circular Linked List is a Linked List in which the first element points to the last element and the
   last element points to the first element. */

#include <bits/stdc++.h> 
using namespace std; 

class Node { 
    public:
    int data; 
    Node* next; 
}; 


Node* newNode(int data) 
{ 
    //allocation of memory
    Node* newcopy = new Node; 
    newcopy->data = data; 
    newcopy->next = NULL; 
    return newcopy; 
} 

//  to reverse the circular linked list 
void reverse(Node** k) 
{ 

    if (*k == NULL) 
        return; 
    Node* pre = NULL; 
    Node* curr = *k; 
    Node* next; 
      do
      { 
        next = curr->next; 
        curr->next = pre; 
        pre = curr; 
        curr = next; 
      }  while (curr != (*k));


    (*k)->next = pre; 
    *k = pre; 
} 

// printing circular linked list 
void dispaly(Node* head) 
{ 
    if(head==NULL)
    cout<<"nothing to display";
    else
    {
       Node * temp=head;
        while(temp->next!=head)
        {
            cout<<temp->data;
            temp=temp->next;
        }
        cout<<temp->data;
    }
}   


int main() 
{ 

    Node* head = newNode(5); 
    head->next = newNode(6); 
    head->next->next = newNode(7); 
    head->next->next->next = newNode(8); 
    head->next->next->next->next = head; 

    cout << "Circular Linked List: "; 
    dispaly(head); 
    cout<<endl;
    reverse(&head); 
    cout << "Reversed Circular Linked List: "; 
    dispaly(head); 

    return 0; 
} 

/* OUTPUT
Circular Linked List: 5 6 7 8
Reversed Circular Linked List: 8 7 6 5


Time Complexity :O(n)
Space Complexity :O(n) 

*/