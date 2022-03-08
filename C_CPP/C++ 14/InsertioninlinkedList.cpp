
/* Let say you have been given a linked list of integers. Our task is to write a function that inserts a node at a given position, 'pos'. 

Sample Input 1 : 1 --(no of input to take)
                    3 4 5 2 6 1 9 - 1 
                    3 100 
Sample Output 1 : 
                    3 4 5 100 2 6 1 9      */

#include <iostream>
    using namespace std;

/* First thing we have done here created a datatype for our linked list */

class Node   
{
public:
    int data;
    Node *next;
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};

/* Here we created the function to take input into our linked list */
Node *takeinput()
{
    int data;
    cin >> data;
    Node *head = NULL, *tail = NULL;
    while (data != -1)
    {
        Node *newNode = new Node(data);
        if (head == NULL)
        {
            head = newNode;
            tail = newNode;
        }
        else
        {
            tail->next = newNode;
            tail = newNode;
        }
        cin >> data;
    }
    return head;
}

/* Now here comes the main stuff 

    insertion of node into the linked list using recursion */


Node *insertNode(Node *head, int i, int data)
{    
    /* if the the linked list reached to the last element where 
            head -> next == NULL 
    if true we will return the head */

    if (head == NULL)
    {
        return head;
    }

    /* doing our calculation for the insertion of node */

    if (i == 0)
    {
        Node *newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    }

    /* calling recursion */

    Node *newHead = insertNode(head->next, i - 1, data);
    head->next = newHead;
    return head;
}

/* It is just a just a simple print function to print our linked list */

void print(Node *head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }

    cout << "\n";
}

int main()
{
    int t;
    cin >> t;

    while (t--)
    {
        Node *head = takeinput();
        int pos, data;
        cin >> pos >> data;
        head = insertNode(head, pos, data);
        print(head);
    }
}