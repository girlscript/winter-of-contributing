/*
CODE DESCIPTION : Following code implements Double ended queue using doubly linked list in C.
Double ended queue is a more generalized form of queue data structure which allows insertion and removal of elements from both the ends, i.e , front and rear.
*/
#include <stdio.h>
struct dequeue
{
   struct dequeue *next,*prev;
    int data;
} ;

struct dequeue *header=NULL,*last=NULL;

/* Function to create a doubly ended queue */
void create ()
{	
	// Store the value of the new node to be inserted in temp
	struct dequeue *temp=malloc(sizeof(struct dequeue));
	printf("Enter value of node\n");
  	scanf("%d",&temp->data);
  	temp->next=NULL;
  	temp->prev=NULL;
  	// If there are 0 nodes present
  	if(header==NULL)
  	{
  		// Make header and last as the temp node
  		header=temp;
  		last=temp;
  		return;
	}
	else
	{
		//Update temp's prev to point to previous last
		temp->prev=last;
		// Update last to point to the new temp node
		last->next=temp;
		last=temp;
	}
	
}
/* Function to insert an element to the front */
void enqueue_front()
{
	//Store value of new node to be added to front in temp
	struct dequeue *temp=malloc(sizeof(struct dequeue));
	struct dequeue *temp2;
	printf("\nEnter value of node : ");
  	scanf("%d",&temp->data);
  	// Store current header addr and now update header to point to temp
	temp2=header;
 	header->prev=temp;
 	header=temp;
 	header->next=temp2;
 	
}

/* Function to insert an element to the rear */
void enqueue_rear()
{
	//Store value of new node to be added to rear in temp
    struct dequeue *temp=malloc(sizeof(struct dequeue));
	struct dequeue *temp2;
	printf("\nEnter value of node : ");
  	scanf("%d",&temp->data);
  	// Store current last's addr and now update last to point to temp
  	temp2=last;
  	last->next=temp;
	last=temp;
	last->next=NULL;
	last->prev=temp2;
}

/* Function to delete an element from front */
void delete_front()
{
	// If queue is empty
	if(header==NULL)
	{
	printf("\nEmpty Queue");
	return;
	}
	else
	{
	// Update header to point to next
	header=header->next;	 
	header->prev=NULL;
	}
}

/* Function to delete an element from rear */
void delete_rear()
{
	// If queue is empty
	if(header==NULL)
	{
		printf("\nEmpty Queue");
		return;
	}
	else
	{
	//Update last to to point to previous node
		last->prev->next=NULL;
		last=last->prev;
	}
}

/* Function to display the queue */
void display()
{
  struct dequeue *temp=header;
  while(temp!=NULL)
  {
    printf("-->%d",temp->data);
    temp=temp->next;
  }
}

/* Driver function */
int main()
{
    int num,i,ch,q;
    printf("Enter num of nodes : ");
    scanf("%d",&num);
	for(i=1;i<=num;i++)
  	create();
  	printf("\nDEQUEUE IS ---:\n");
  	display();
  	printf("\nEnter num of queries : ");
    scanf("%d", &q);
  	while(q--){
	printf("\nKindly enter you choice \n");
	printf("Enter 1: Enqueue-Front \nEnter 2 : Enqueue Rear \nEnter 3 : Delete Front \nEnter 4 : Delete Rear \nEnter 0 : EXIT \n");
	scanf("%d",&ch);
	switch (ch)
	{
		case 1 :enqueue_front();
				printf("\nFINAL DEQUEUE IS ---:\n");
  				display();
				break;
		case 2 :enqueue_rear();
				printf("\nFINAL DEQUEUE IS ---:\n");
  				display();
				break;
		case 3 :delete_front();
				printf("\nFINAL DEQUEUE IS ---:\n");
  				display();
				break;
		case 4 :delete_rear();
				printf("\nFINAL DEQUEUE IS ---:\n");
  				display();
				break;
		case 0 :break;
		default:printf("\nERROR : NOT A VALID CHOICE NUMBER\n");		 
	}
	}
    return 0;
}
/*
COMPLEXITY
TIME : O(num) for display and O(1) for enqueue,dequeue.
SPACE : O (num) for enqueue and O(1) for dequeue

OUTPUT:
Enter num of nodes : 3
Enter value of node
1
Enter value of node
2
Enter value of node
3

DEQUEUE IS ---:
-->1-->2-->3
Enter num of queries : 4

Kindly enter you choice
Enter 1: Enqueue-Front
Enter 2 : Enqueue Rear
Enter 3 : Delete Front
Enter 4 : Delete Rear
Enter 0 : EXIT
1

Enter value of node : 0

FINAL DEQUEUE IS ---:
-->0-->1-->2-->3
Kindly enter you choice
Enter 1: Enqueue-Front
Enter 2 : Enqueue Rear
Enter 3 : Delete Front
Enter 4 : Delete Rear
Enter 0 : EXIT
2

Enter value of node : 4

FINAL DEQUEUE IS ---:
-->0-->1-->2-->3-->4
Kindly enter you choice
Enter 1: Enqueue-Front
Enter 2 : Enqueue Rear
Enter 3 : Delete Front
Enter 4 : Delete Rear
Enter 0 : EXIT
3

FINAL DEQUEUE IS ---:
-->1-->2-->3-->4
Kindly enter you choice
Enter 1: Enqueue-Front
Enter 2 : Enqueue Rear
Enter 3 : Delete Front
Enter 4 : Delete Rear
Enter 0 : EXIT
4

FINAL DEQUEUE IS ---:
-->1-->2-->3
*/
