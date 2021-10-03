# Reverse the Singly Linked List
**Algorithm**
```c
1. Create three pointers previous, current and next as given in the image.
```
![image](https://user-images.githubusercontent.com/73171376/135474201-a064ffa6-6bb2-4536-ab76-9f7f4f689f89.png)
```c
2. Make head->next pointer as NULL (From this the link between previous node and current will be broken)
```
```c
3. Use the Command Current->next = previous to create a link between current node and previous node in reverse direction
```
![image](https://user-images.githubusercontent.com/73171376/135475004-78cf6e93-84f3-4a99-92af-68aa904f33a8.png)

```c
4. Increment all the three pointers (Previous, Current and next).
NOTE: Remember we cannot increment the pointers as Previous = Previous->next because Previous->next will point to NULL so it will give error.
```
![image](https://user-images.githubusercontent.com/73171376/135475493-4592fd13-a69e-4401-ab13-c862f375222f.png)
```c
5. Continue performing steps 3 and 4 until next pointer reaches NULL.
```
```c
6. when next pointer reaches NULL Simply make Head pointer equals to Current pointer.
```
![image](https://user-images.githubusercontent.com/73171376/135475941-bb210b9d-1270-4f37-bccd-5095c9548a93.png)

## Code For Reversing Singly Linked List in C
```c
#include <stdio.h>
#include <stdlib.h>

typedef struct node {
    int data;
    struct node *next;
} SLL;

SLL *insert(SLL *head, int val)
{
    if(head == NULL)
    {
        head = (SLL*) malloc(sizeof(SLL*));
        head->data = val;
        head->next = NULL;
    }
    else
	{
        SLL *temp = head;
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        SLL *new = (SLL*) malloc(sizeof(SLL*));
        new->data = val;
        new->next = NULL;
        temp->next = new;
    }
    return head;
}

void printList(SLL *head)
{
    SLL*temp = head;
    while(temp != NULL)
    {
        printf("%d -> ",temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

SLL *reverseList(SLL *head)
{
    SLL *prev = head;
    SLL *curr = head->next;     // prev->next
    SLL *next = head->next->next;       // curr->next

    // removing the link between 1st and 2nd node
    head->next = NULL;

    while(next != NULL)
    {
        // reversed the link in betweeen current and next node
        curr->next = prev;

        // iterating the pointers
        // prev = prev->next; wrong method
        prev = curr;
        curr = next;
        next = next->next;
    }

    // to make the link between last node and last second node
    curr->next = prev;

    // Making Head pointer equal to curr pointer
    head = curr;
    return head;
}

int main()
{
	// creating the list
    SLL *head = NULL;
    head = insert(head, 1);
    head = insert(head, 2);
    head = insert(head, 3);
    head = insert(head, 4);
    head = insert(head, 5);
    head = insert(head, 6);
    head = insert(head, 7);
    head = insert(head, 8);
    head = insert(head, 9);
    head = insert(head, 10);
    
	// printing the list
    printf("Original List : ");
    printList(head);

    head = reverseList(head);

    printf("Reversed List : ");
    printList(head);

    return 0;
}
```
**OutPut from above Code**
```
Original List : 1 -> 2 -> 3 -> 4 -> 5 -> 6 -> 7 -> 8 -> 9 -> 10 -> NULL
Reversed List : 10 -> 9 -> 8 -> 7 -> 6 -> 5 -> 4 -> 3 -> 2 -> 1 -> NULL
```
