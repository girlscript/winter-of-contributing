#include <bits/stdc++.h>
using namespace std;
struct arraynode
{
    int data1;
    int priority1;
} arr[10];

int top = -1;

//Function For Enqueue Operation//

void Array_Enqueue()
{
    int data1, priority1;
    cout << "Enter the Data to be inserted: ";
    cin >> data1;
    cout << "Enter the Priority Number of Data: ";
    cin >> priority1;
    top++;
    arr[top].data1 = data1;
    arr[top].priority1 = priority1;
}

//Function For Dequeue Operation//

void Array_Dequeue()
{
    int highestpriority = arr[0].priority1, index = 0, deleted_data, deleted_priority;
    if (top == -1)
    {
        cout << "Queue is Empty!" << endl;
        cout << "No Deletion Possible" << endl;
        return;
    }
    else if (top == 0)
    {
        deleted_data = arr[0].data1;
        deleted_priority = arr[0].priority1;
        top = -1;
    }
    else
    {
        for (int i = 1; i <= top; i++)
        {
            if (arr[i].priority1 < highestpriority)
            {
                highestpriority = arr[i].priority1;
                index = i;
            }
        }
        deleted_data = arr[index].data1;
        deleted_priority = arr[index].priority1;
        for (int i = index; i <= top; i++)
        {
            arr[i].data1 = arr[i + 1].data1;
            arr[i].priority1 = arr[i + 1].priority1;
        }
        top--;
    }
    cout << "Deleted Item: " << deleted_data << "[Priority: " << deleted_priority << "]" << endl;
}

//Function For Displaying Priority Queue//

void Array_Display()
{
    if (top == -1)
    {
        cout << "Priority Queue is Empty!" << endl;
        return;
    }
    cout << "Data \t\t Priority" << endl;
    for (int i = 0; i <= top; i++)
    {
        cout << arr[i].data1 << " \t\t " << arr[i].priority1 << endl;
    }
}

void Array_Implementation()
{
    int n;
    do
    {
        cout << "*****ARRAY IMPLEMENTATION*****" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter any one of above option: ";
        cin >> n;
        switch (n)
        {
        case 1:
            Array_Enqueue();
            break;
        case 2:
            Array_Dequeue();
            break;
        case 3:
            Array_Display();
            break;
        case 4:
            return;
            break;
        }
    } while (n < 5);
}

//********Linked List Implementation***********//

struct node
{
    int data;
    int priority;
    node *next;
} * head;

//Function For Enqueue Operation//

void LL_Enqueue()
{
    node *newnode = new node();
    int data, priority;
    cout << "Enter the Data to be inserted: ";
    cin >> data;
    cout << "Enter the Priority Number of Data: ";
    cin >> priority;
    newnode->data = data;
    newnode->priority = priority;
    node *temp = head, *ptr;
    if (head == NULL)
    {
        newnode->next = NULL;
        head = newnode;
    }
    else if (newnode->priority >= temp->priority)
    {
        while (newnode->priority >= temp->priority)
        {
            if (temp->next == NULL)
            {
                temp = temp;
                temp->next = newnode;
                newnode->next == NULL;
                return;
            }
            else
            {
                ptr = temp;
                temp = temp->next;
            }
        }
        ptr->next = newnode;
        newnode->next = temp;
    }
    else
    {
        newnode->next = temp;
        head = newnode;
    }
}

//Function For Dequeue Operation//

void LL_Dequeue()
{
    if (head == NULL)
    {
        cout << "Priority Queue is Empty!" << endl;
        cout << "No Deletion Possible." << endl;
        return;
    }
    node *ptr = head;
    cout << "Deleted Item: " << ptr->data << "[Priority: " << ptr->priority << "]" << endl;
    head = ptr->next;
    free(ptr);
}

//Function For Displaying Priority Queue//

void LL_Display()
{
    if (head == NULL)
    {
        cout << "Priority Queue is Empty!" << endl;
        return;
    }
    node *temp = head;
    cout << "Priority Queue: \t";
    while (temp != NULL)
    {
        cout << temp->data << "[Priority: " << temp->priority << "] \t";
        temp = temp->next;
    }
    cout << endl;
}

void LL_Representation()
{
    int n;
    do
    {
        cout << "*****LINKED LIST IMPLEMENTATION*****" << endl;
        cout << "1. Enqueue" << endl;
        cout << "2. Dequeue" << endl;
        cout << "3. Display" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter any one of above option: ";
        cin >> n;
        switch (n)
        {
        case 1:
            LL_Enqueue();
            break;
        case 2:
            LL_Dequeue();
            break;
        case 3:
            LL_Display();
            break;
        case 4:
            return;
            break;
        }
    } while (n < 5);
}

//DRIVER FUNCTION//

int main()
{
    int n;
    do
    {
        cout << "******PRIORITY QUEUE******" << endl;
        cout << "1. Array Implementation" << endl;
        cout << "2. Linked List Implementation" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter any one of above option: ";
        cin >> n;
        switch (n)
        {
        case 1:
            Array_Implementation();
            break;
        case 2:
            LL_Representation();
            break;
        case 3:
            return 0;
        }
    } while (n < 4);

    return 0;
}
