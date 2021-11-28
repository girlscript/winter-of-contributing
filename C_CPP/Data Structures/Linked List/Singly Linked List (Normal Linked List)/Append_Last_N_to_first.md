## Append Last N nodes To First in a singly linkedlist

**Explaination:**

- We have to move the last N nodes to the front of the Linkedlist.

 For Example, 
 
"1->2->3->4->5->6" is a list which represents the 6 nodes of Linkedlist. When we move the last 3 nodes of this list to the front then the remaining part of the initial list which is, "1->2->3" is attached after 6. Hence, the new list formed with an updated head pointing to 4 and the list will become "4->5->6->1->2->3".

## Algorithm

1. Create a linkedlist.
2. Break this original linkedlist by maintaining a count and as this count becomes equal to (total number of nodes in linkedlist- N nodes), stores the new head in the linkedlist.
3. Now connect the nodes by putting the start node of original linkedlist in the next of the last node of linkedlist.
4. Put null in the last node of updated linkedlist.

- While specifying the list elements for input, -1 indicates the end of the singly linked list and hence, would never be a list element.

The c++ code will be as follows:
```c++
#include <bits/stdc++.h>
using namespace std;

class Node   //creating a class named Node
{
public:
    int data;
    Node *next;
    Node(int data)   //creating constructor for the class
    {
        this->data = data;
        next = NULL;
    }
};

Node *takeInputBetter()   // function to take input
{
    int data;
    cin >> data;
    Node *head = NULL;  
    Node *tail = NULL;  
    while (data != -1)
    {
        Node *n = new Node(data);  // creating new node
        if (head == NULL)
        {
            head = n;
            tail = n;
        }
        else
        {
            tail->next = n;
            tail = tail->next;
        }
        cin >> data;
    }
    return head;
}

void print(Node *head)   // function to print the entire linkedlist
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " "; 
        temp = temp->next;
    }
    cout << endl;
}

int getcount(Node *head)   // function to get the count of nodes in the linkedlist
{
    int count = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
void updateList(Node *head, int m)
{
    int count = getcount(head);// Total nodes in the list

    if (count != m && m < count)
    {
        int skip = count - m;   // Count of nodes to be skipped from the beginning
        Node *prev = NULL;
        Node *curr = head;

        while (skip > 0)  //skiping the nodes
        {
            prev = curr;
            curr = curr->next;
            skip--;
        }

        prev->next = NULL;
        Node *tempHead = head;
        head = curr;

        while (curr->next != NULL) // Finding the last node
            curr = curr->next;
        curr->next = tempHead;  
    }

    print(head); // Print the updated list
}

int main()
{
    Node *head = takeInputBetter();
    int m;
    cin >> m;
    updateList(head, m); //calling the updateList function

}
```

Input for the above code:
```c++
1 2 3 4 5 -1
3
```
Output will be :
```c++
3 4 5 1 2
```