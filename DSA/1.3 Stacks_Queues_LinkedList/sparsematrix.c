/*  Implementation of a Sparse Matrix with Singly Linked List with standard interface methods*/

#include<stdio.h>
#include<stdlib.h> // for malloc 

struct Node
{
 int value;
 int row_position;
 int column_postion;
 struct Node *next;
}typedef Node;

struct List
{
    Node *start ; // pointer to the first Node of the list
}typedef List;


int insert_end( List *list, int val, int r, int c)
{
    Node * newNode = (Node*)malloc(sizeof(Node));
    if( newNode == NULL)// not sufficient memory in the heap
       return 1;// denotes failure to insert node
    // assign values to components of Node
    newNode->value = val;
    newNode->row_position =r;
    newNode->column_postion=c;
    newNode->next = NULL; // this is going be the last node of list
    if( list->start == NULL)// if the list is empty 
    {
        list->start = newNode;
        return 0;
    }
    // list is not empty 
    Node * temp= list->start;// iterator starts with first node
    while(temp->next != NULL)// reach the last node
        temp = temp->next;
    temp->next = newNode;  // last node now points to the new node
    return 0;
}//end of insert_end
        


void display_list(List list) 
{
    if(list.start == NULL) // No nodes in the list
    {
        printf("\nEmpty List\n");
        return ;
    }
    
    Node *temp = list.start;// initialize an iterator with start
    while( temp != NULL ) // iterate over all the nodes of the list
    {
        printf("[%d,%d,%d]  ", temp->value, temp->row_position, temp->column_postion); // print the info part of the current node
        temp = temp->next;
    }//end of while
    
}//end of display_list
    
    
int main()
{
    int sparseMatrix[4][5] =
                            {
                             {0 , 0 , 3 , 0 , 4 },
                             {0 , 0 , 5 , 7 , 0 },
                             {0 , 0 , 0 , 0 , 0 },
                             {0 , 2 , 6 , 0 , 0 }
                            }; 
    List sparse_mat_list;
    sparse_mat_list.start = NULL;
   
   printf("\nSparse Matrix \n");
   for (int i = 0; i < 4; i++)
    {
        for (int j = 0; j < 5; j++)
          printf("%5d", sparseMatrix[i][j]);
        printf("\n")  ;
    }
 
 for (int i = 0; i < 4; i++)
     for (int j = 0; j < 5; j++)
     // Pass only those values which are non - zero
        if (sparseMatrix[i][j] != 0)
           insert_end(&sparse_mat_list,sparseMatrix[i][j],i,j );
        
 printf("\n List representation of Sparse Matrix [Row,Col,Value] \n");
 display_list(sparse_mat_list);
 return 0;
 
    
}//end of main





