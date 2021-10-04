/*  Implementation of a Doubly Linked List with standard interface methods*/
/*    Interrface methods implemented are : 
    insert_begin : Inserts a Node at the beginning of List 
    delete_begin:  Deletes the First Node of list and returns the contents
    display_list:  Prints the information contained in the Nodes sequentially 
*/    

#include<stdio.h>
#include<stdlib.h> // for malloc 

struct Node
{
    int info; //the information part of a Node 
    struct Node* next; // points to the next Node
    struct Node* prev; // points to the previous Node
} typedef Node;


struct List
{
    Node *start ; // pointer to the first Node of the list
}typedef List;


int insert_begin( List* list, int item)
{
    Node * newNode =(Node*)malloc(sizeof(Node));// allocate memory for newnode
    if( newNode == NULL)
         return 1; // failure to insert node because of insufficient memory
     
     newNode->info = item ; // add data in the newNode
     if( list->start == NULL)// if the list is Empty
       {
           newNode->next = NULL;
           newNode->prev = NULL;
           list->start = newNode;
           return 0;
       }  
    else 
    {
         // Atleast one node in list
        newNode->next = list->start;
        newNode->prev = NULL;
        list->start->prev = newNode;
        list->start = newNode;// newNode is now the first node, update start 
         return 0;// successful insertion of node 
    }
}//end of insert_begin




int insert_end( List* list, int item)
{
    Node * newNode =(Node*)malloc(sizeof(Node));// allocate memory for newnode
    if( newNode == NULL)
         return 1; // failure to insert node because of insufficient memory
     
    newNode->info = item ; // add data in the newNode
    if( list->start == NULL)// if list is empty
    {
        // new Node will be the first Node of list
        newNode->next = NULL;
        newNode->prev = NULL;
        list->start = newNode;
        return 0; 
    }
    else // more than one node in list
    {
        Node * temp= list->start;
        while( temp->next != NULL)// iterate
            temp = temp->next;
            
      temp->next = newNode;
      newNode->prev=temp;
      newNode->next= NULL;
      return 0;
    }
}//end of insert_begin




int delete_begin( List *list)// list is passed by reference 
{
    if(list->start == NULL)// list is empty
        return -1;
    if( list->start->next == NULL)// only one node in list
    {
        int front_element = list->start->info;// store the info of 1st node
        Node *save = list->start;// save the address of the first node
        list->start = list->start->next;// update start 
        free(save);// release the memory of the node to be deleted 
        return front_element;// return the first element 
    }
     // more than one node in list
        int front_element = list->start->info;// store the info of 1st node
        Node *save = list->start;// save the address of the first node
        list->start->next->prev = NULL; // 2nd Node will now become the 1st NULL
        list->start = list->start->next;// update start 
        free(save);// release the memory of the node to be deleted 
        return front_element;// return the first element 
}//end of list

int delete_end( List *list)// list is passed by reference 
{
    if(list->start == NULL)// list is empty
        return -1;
    if( list->start->next == NULL)// only one node in list
    {
        int front_element = list->start->info;// store the info of 1st node
        Node *save = list->start;// save the address of the first node
        list->start = list->start->next;// update start 
        free(save);// release the memory of the node to be deleted 
        return front_element;// return the first element 
    }
     // more than one node in list
     Node* temp;
     temp=list->start;
     while(list->start->next->next!=NULL){
          temp=temp->next;
     }
     int front_element = temp->next->info;// store the info of last node
     Node *save = temp->next;// save the address of the last
     temp->next = NULL;
     temp->prev = temp; 
     free(save);
     return front_element;
}//end of list

 display_list(List list) 
{
    if(list.start == NULL) // No nodes in the list
    {
        printf("\nEmpty List\n");
        return -1;
    }
    printf("\n List is : ");
    Node *temp = list.start;// initialize an iterator with start
    while( temp != NULL ) // iterate over all the nodes of the list
    {
        printf("%5d", temp->info); // print the info part of the current node
        temp = temp->next;
    }//end of while
    
}//end of display_list
   
   
void reverse_iteration( List list)
{
    printf("\n Reversed List is ");
    if( list.start == NULL)
        {
            printf("\nEmpty List ");
            return ;
        }
        
    Node *temp = list.start;
    while(temp->next != NULL) 
        temp=temp->next;
         
    while( temp != NULL)        
        {
            printf(" %d ", temp->info);
            temp = temp->prev;
        }
        
}
    
void main()
{
    List l;
    l.start = NULL;
    display_list(l); // Empty List
    insert_begin(&l, 100); // start -> 100
    insert_begin(&l, 200); // start -> 200 -> 100
    display_list(l); //  200 100
    reverse_iteration(l);// 100 2000
    
   
    
    insert_end(&l, 400); // start -> 200->100->400
    insert_end(&l, 500); // start -> 200 -> 100->400->500
    display_list(l); //  200 100 400 500
    
    reverse_iteration(l); // 500 400 100 200 
    
    printf("\n Deleted Element from First = %d ",delete_begin(&l));// 200
    display_list(l); //  400 100 200
    
    printf("\n Deleted Element from First = %d ",delete_begin(&l));// 400
    display_list(l); //  100 200
    
    printf("\n Deleted Element from last = %d ",delete_end(&l));// 400
    display_list(l); 
    
 }   //end of main





