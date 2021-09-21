/*
Code Description :
A linked list is a linear data structure, in which the elements are not stored at contiguous memory locations.
It consists of nodes.

A Node has 2 parts ->
i)  Data part contains value of the node.
ii) Address part contains the address of the next or the successor node.

Through this C program, Nodes of a linked list are arranged such that the odd and the even nodes are segregated.
Here,all even nodes appear before all the odd nodes in the modified linked list,
keeping the order of even and odd numbers same.

*/

#include <stdio.h>
#include <malloc.h>

/* Defining the structure of a Node */
struct node{
  int data; //holds value of temp->data
  struct node *next; //holds address of next node after temp
};

/* Header to point to the first node and Last to point to the Last one */
struct node *header, *last;

/* Function for Creation of a Linked List */
void create(){
    struct node *temp = (struct node*) malloc(sizeof(struct node));

    printf("Enter value of Node: ");
    scanf("%d", &temp->data); //assigning value to temp->a
    temp->next= NULL;

    /* if header is NULL */
	  if (header == NULL){
    	header = temp;
    	last = temp;
    	return;
	   }
     /* if header is not NULL */
     else {
       last->next = temp;
       last = temp;
       return;
     }
}

/* Function to Display Nodes of a Linked List */
void show()
{
    struct node *temp = header;
    while (temp != NULL){
    	printf("-->%d", temp->data);
    	temp = temp->next;
    }
    printf("-->NULL");
}

void segregateEvenOdd()
{
    struct node *end_node = last, *prev = NULL, *curr = header;

    /* Consider all odd nodes before the first even node and move then after end */
    while (curr->data %2 != 0 && curr != end_node)
    {
        last->next = curr;
        curr = curr->next;
        last->next->next = NULL;
        last = last->next;
    }

  /* If current node is even */
    if (curr->data%2 == 0)
    {
        /* Change the header to first even node */
        header = curr;

        while (curr != end_node){

            /* if current node is EVEN make prev point to it and update curr node with curr's next */
            if ( (curr->data)%2 == 0 ){
                prev = curr;
                curr = curr->next;
            }

            /* if current is  ODD node */
            else{
                
                /* make prev next's point to curr's next */
                prev->next = curr->next;

                /* Move curr to end of list */
                last->next = curr;

                /* Make next of curr as NULL  */
                curr->next = NULL;

                /* make curr as last of list */
                last = curr;

                /* Update current pointer to next of prev (next of node that has been moved to end of last) */
                curr = prev->next;
            }
        }
    }

    /* If end of original list is odd then set it as last node of modified list*/
    if (last!=end_node && (end_node->data)%2 != 0)
    {
        prev->next = end_node->next;
        end_node->next = NULL;
        last->next = end_node;
        last=end_node;
    }
    return;
}

/* Driver Function */
void main(){
    int i, num;

    printf("Enter the number of nodes : "); //ask for user input
    scanf("%d", &num);

    for (i = 1; i <= num; i++)
    create(); //calling create function

    printf("\nLinked List is : \n");
    show(); //calling show function

    segregateEvenOdd(); //calling function to Segregate
   
    printf("\nLinked List after calling SegregateOddEven() : \n");
    show(); //calling how function
}


/*
COMPLEXITY:
Space Complexity : O(n)
Time Complexity : O(n)
OUTPUT:
Enter the number of nodes : 7
Enter value of Node: 2
Enter value of Node: 6
Enter value of Node: 3
Enter value of Node: 7
Enter value of Node: 4
Enter value of Node: 9
Enter value of Node: 8

Linked List is :
-->2-->6-->3-->7-->4-->9-->8-->NULL
Linked List after calling SegregateOddEven() :
-->2-->6-->4-->8-->3-->7-->9-->NULL
*/
