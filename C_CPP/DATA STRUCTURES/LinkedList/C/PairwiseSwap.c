/* 
Code Description:
A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations.
Through this C program ,we pairwise swap elements in a given linked list.
Following is the implementation of the same that swaps adjacent nodes pairwise and changes links instead of swapping data. 
*/

#include <stdio.h>
#include <stdlib.h>

/* Defining a Node */
struct Node {
	int data;
	struct Node* next;
};

/* Declaration of Function to swap nodes at addresses a and b */
void swap(int* a, int* b);

/* Header points to first node and Last points to last one */
struct Node *header,*last;

/* Function to pairwise swap elements of a linked list */
void pairWiseSwap()
{
	struct Node* temp = header;

	/* Traverse further only if there are at-least two nodes available */
	while (temp != NULL && temp->next != NULL) 
	{
		/* Swap the data of node with its next node's data */
		swap(&temp->data, &temp->next->data);

		/* Update temp by 2 for the next pair */
		temp = temp->next->next;
	}
}

/* Function for Swapping */
void swap(int* a, int* b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

/* Function to create a Linked List */
void create()
{
	struct Node *temp=(struct Node*)malloc(sizeof(struct Node));
  	
 	printf("Enter value of node : ");
 	
  	scanf("%d",&temp->data);
  	temp->next=NULL;
  	
    if (header==NULL)
  	{
    	header=temp;
    	last=temp;
    	return;
  	}
  	else
  	{
    	last->next=temp;
    	last=temp;
    	return;
  	}
}

/* Function to print nodes in a given linked list */
void show()
{
  	struct Node *temp=header;
  	while(temp!=NULL)
  	{
		printf("-->%d",temp->data);
    	temp=temp->next;
  	}
}

/* Driver Function */
void main()
{
	int i,num;
	
	printf("Enter the number of nodes: ");
	scanf("%d",&num);
	
	for(i=1;i<=num;i++)
	create();
	
	printf("\nLinked List is\n");
	show();
	
	printf("\nLinked list after calling pairWiseSwap()\n");
	pairWiseSwap();
	show();
}

/*
COMPLEXITY:
Time Complexity:O(n)
Space Complexity:O(n)

OUTPUT:
Enter the number of nodes: 5
Enter value of node : 2
Enter value of node : 4
Enter value of node : 1
Enter value of node : 3
Enter value of node : 5

Linked List is
-->2-->4-->1-->3-->5
Linked list after calling pairWiseSwap()
-->4-->2-->3-->1-->5

*/
