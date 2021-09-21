/*CODE DESCRIPTION:
This code takes an unsorted list and deletes duplicate nodes from the list.

For example,
Let, linked list be: 2->1->2->3->4->4->2->NULL 
then, after removing duplicates list become: 2->1->3->4->NULL
*/
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

// Defining linked list structure
struct node
{
  int data; //holds value of temp->data
  struct node *p; //holds address of next node after temp
};
struct node *header,*last;//header hold address of first node. here it is initialize with null

// CREATION OF A SINGLY LINKED LIST
void create()
{
  struct node *temp=malloc(sizeof(struct node));
  printf("Enter value: ");
  scanf("%d",&temp->data); //assigning value to temp->a
  temp->p=NULL;
  //if header is NULL
  if (header==NULL)
  {
    header=temp;
    last=temp;
    return;
  }
  // if header is not NULL
  else
  {
    last->p=temp;
    last=temp;
    return;
  }
}

// DISPLAY LIST
void show()
{
  struct node *temp=header;
  while(temp!=NULL)
  {
    printf("-->%d",temp->data);
    temp=temp->p;
  }
  printf("-->NULL");
}

// Function to remove duplicates from unsorted linked list 
void removedup()
{
  struct node *temp=header,*ptr=NULL;
  
  // if list is EMPTY
  if(header==NULL)
  return;

  // loop until value of temp become NULL
  while(temp!=NULL)
  {
    // ptr holds value of temp
    ptr=temp;

    // Compare the picked element(temp) with rest of the elements in list 
    while(ptr->p!=NULL)
    {
      // if any duplicate element is found update its previous nodes's "p" with duplicate element's "p"  
      if(ptr->p->data==temp->data)
      ptr->p=ptr->p->p;
      // if no duplicacy found
      else
      ptr=ptr->p;
    }

    // update temp with temp's p
    temp=temp->p;
  }
}

//MAIN FUNCTION
void main()
{
  int i=1,num;
  printf("Enter no. of nodes: "); //ask for user input
  scanf("%d",&num);

  for(i=1;i<=num;i++) 
  create(); //calling create function
  
  printf("\nList is:\n");
  show(); //calling show function
  
  printf("\nAfter remove duplicate:\n");
  removedup(); //calling removedup function
  show(); //calling show function
}

/*
OUTPUT:
Enter no. of nodes: 7
Enter value: 12
Enter value: 11
Enter value: 12
Enter value: 21
Enter value: 41
Enter value: 43
Enter value: 21

List is:
-->12-->11-->12-->21-->41-->43-->21-->NULL
After remove duplicate:
-->12-->11-->21-->41-->43-->NULL
*/