#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node* next;
};

int counter(struct node* head);
 
int Intersection(int d, struct node* head1, struct node* head2);
 
int IntersectionNode(struct node* head1, struct node* head2)
{
    int c1 = counter(head1);
    int c2 = counter(head2);
    int d;
 
    if (c1 > c2) {
        d = c1 - c2;
        return Intersection(d, head1, head2);
    }
    else {
        d = c2 - c1;
        return Intersection(d, head2, head1);
    }
}

int Intersection(int d, struct node* head1, struct node* head2)
{
    int i;
    struct node* current1 = head1;
    struct node* current2 = head2;
 
    for (i = 0; i < d; i++) {
        if (current1 == NULL) {
            return -1;
        }
        current1 = current1->next;
    }
 
    while (current1 != NULL && current2 != NULL) {
        if (current1 == current2)
            return current1->data;
        current1 = current1->next;
        current2 = current2->next;
    }
 
    return -1;
}
 
int counter(struct node* head)
{
    struct node* current = head;
    int count = 0;
 
    while (current != NULL) {
        count++;
        current = current->next;
    }
 
    return count;
}

void printList(struct node *head)
{
    struct node *temp = head;
    while(temp!=NULL)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main()
{
    struct node* nNode;
    struct node* head1 = (struct node*)malloc(sizeof(struct node));
    head1->data = 10;
 
    struct node* head2 = (struct node*)malloc(sizeof(struct node));
    head2->data = 3;
 
    nNode = (struct node*)malloc(sizeof(struct node));
    nNode->data = 6;
    head2->next = nNode;
 
    nNode = (struct node*)malloc(sizeof(struct node));
    nNode->data = 9;
    head2->next->next = nNode;
 
    nNode = (struct node*)malloc(sizeof(struct node));
    nNode->data = 15;
    head1->next = nNode;
    head2->next->next->next = nNode;
 
    nNode = (struct node*)malloc(sizeof(struct node));
    nNode->data = 30;
    head1->next->next = nNode;
 
    head1->next->next->next = NULL;

    printf("List 1 is : ");
    printList(head1);
 
    printf("List 2 is : ");
    printList(head2);
 
    printf("\nThe node of intersection is %d \n",
           IntersectionNode(head1, head2));
 
    system("pause");
    return 0;

/*
    1st 3->6->9->15->30
                 ^
    2nd      10__|
*/
}