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
    int n1 = counter(head1);
    int n2 = counter(head2);
    int d;
 
    if (n1 > n2) {
        d = n1 - n2;
        return Intersection(d, head1, head2);
    }
    else {
        d = n2 - n1;
        return Intersection(d, head2, head1);
    }
}

int Intersection(int d, struct node* head1, struct node* head2)
{
    struct node* temp1 = head1;
    struct node* temp2 = head2;
 
    for (int i = 0; i < d; i++) {
        if (temp1 == NULL) {
            return -1;
        }
        temp1 = temp1->next;
    }
 
    while (temp1 != NULL && temp2 != NULL) {
        if (temp1 == temp2)
            return temp1->data;
        temp1 = temp1->next;
        temp2 = temp2->next;
    }
 
    return -1;
}
 
int counter(struct node* head)
{
    struct node* temp = head;
    int c = 0;
 
    while (temp != NULL) {
        c++;
        temp = temp->next;
    }
 
    return c;
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
    head1->data = 12;
 
    struct node* head2 = (struct node*)malloc(sizeof(struct node));
    head2->data = 13;
 
    nNode = (struct node*)malloc(sizeof(struct node));
    nNode->data = 6;
    head2->next = nNode;
 
    nNode = (struct node*)malloc(sizeof(struct node));
    nNode->data = 7;
    head2->next->next = nNode;
 
    nNode = (struct node*)malloc(sizeof(struct node));
    nNode->data = 2;
    head1->next = nNode;
    head2->next->next->next = nNode;
 
    nNode = (struct node*)malloc(sizeof(struct node));
    nNode->data = 24;
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
    1st          12
                   \
                    2  - 24
                   /
    2nd  13 - 6 - 7 

*/
}
