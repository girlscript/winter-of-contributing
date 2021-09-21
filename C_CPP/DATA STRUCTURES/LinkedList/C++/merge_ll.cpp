/*
CODE DESCRIPTION:
This code merges two linked list in sorted order
For example,
Linked list a : 5->10->15-> NULL
Linked list b : 2->3->20->NULL
Merge list will be: 2->3->5->10->15->20->NULL
*/

#include <iostream>
#include <stdlib.h>
using namespace std;

// Defining linked list structure
struct node{
int data; //holds value of temp->data
struct node *next; //holds address of next node after temp
};

// CREATION OF A SINGLY LINKED LIST
void create(struct node * &header,int val){
    struct node *temp=(struct node *)malloc(sizeof(struct node)),*temp1=header;
    temp->data=val;
    temp->next=NULL;
    //if header is NULL
    if(header==NULL){
        header=temp;
        return;
    }

    // if header is not NULL traverse to temp last and then set temp->next=temp
    else{
        while(temp1->next!=NULL){
            temp1=temp1->next;
        }
        temp1->next=temp;
    }
}

// DISPLAY LIST
void show(struct node *header)
{
  struct node *temp=header;
  while(temp!=NULL)
  {
    printf("-->%d",temp->data);
    temp=temp->next;
  }
  printf("-->NULL");
}

// FUNCTION TO MERGE TWO LISTS
void mergeLinkedList(struct node *header1,struct node *header2){
    struct node *t1=header1,*t2=header2,*header3=NULL;

    // loop till any of the list is fully traversed
    while(t1!=NULL&&t2!=NULL){
        //if t1->data < t2->data
        if(t1->data<t2->data){
            create(header3,t1->data);
            t1=t1->next;
        }
        //if t2->data < t1->data
        else{
            create(header3,t2->data);
            t2=t2->next;
        }
    }

    //if list2 is fully traversed then put the data of list1 in merged list as it is till it become NULL
    while(t1!=NULL){
        create(header3,t1->data);
        t1=t1->next;
    }
    //if list1 is fully traversed then put the data of list2 in merged list as it is till it become NULL
    while(t2!=NULL){
        create(header3,t2->data);
        t2=t2->next;
    }

    //  print merged list
    show(header3);
}
int main(){
    struct node *header1=NULL,*header2=NULL;

    int i=1,num,val;
    printf("Enter no. of nodes in list1: "); //ask for user input
    scanf("%d",&num);

    for(i=1;i<=num;i++){
      printf("Enter value: "); //ask for node value
      scanf("%d",&val);
      create(header1,val); //calling create function for list 1
    }

    printf("\nEnter no. of nodes in list2: "); //ask for user input
    scanf("%d",&num);

    for(i=1;i<=num;i++){
      printf("Enter value: "); //ask for node value
      scanf("%d",&val);
      create(header2,val); //calling create function for list 2
    }

    printf("\nList1 is:\n");
    show(header1); //calling show function for list 1

    printf("\nList2 is:\n");
    show(header2); //calling show function for list 2

    printf("\nAfter merging two lists:\n");
    mergeLinkedList(header1,header2); //calling mergeLinkedList function
    return 0;
}
/*
OUTPUT:
Enter no. of nodes in list1: 4
Enter value: 5
Enter value: 10
Enter value: 15
Enter value: 40

Enter no. of nodes in list2: 3
Enter value: 2
Enter value: 3
Enter value: 20

List1 is:
-->5-->10-->15-->40-->NULL
List2 is:
-->2-->3-->20-->NULL
After merging two lists:
-->2-->3-->5-->10-->15-->20-->40-->NULL
*/
