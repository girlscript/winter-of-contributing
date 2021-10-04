//Implementation of a single linked list with various operations
#include<stdio.h>
#include<stdlib.h>

struct Node{
    int info;                                   //info part of the node
    struct Node* link;                          //self referential structure
} typedef Node;

struct List{
    Node* start;                                //node type pointer
}typedef List;

void insert_beg(List* list,int item){           //to add in the list from the beginning
    Node* newNode=(Node*)malloc(sizeof(Node));  //allocate memory for new node
    newNode->info=item;                         //add item to INFO of new node
    newNode->link=list->start;                  //replace new node's link to that in START pointer
    list->start=newNode;                        //add new node's address to START 
}   

void insert_end(List* list,int item){           //to insert node at last
    Node* newNode=(Node*)malloc(sizeof(Node));  //allocate memory for new node
    newNode->info=item;                         //add item to INFO of new node
    newNode->link=NULL;                         //set the link of last node to NULL
    if(list->start==NULL){                      //check if list is empty
        list->start=newNode;                    //make start pointer point to new node
    }                 
    else{
        Node* temp=list->start;                 //add iterator to start
        while(temp->link!=NULL){                //move temporary variable to the link of the last node in the list
            temp=temp->link;                    //add the link of the last node to temp
        }
    temp->link=newNode;                         //add the new node's address to second last node pointer through temp pointer
    }
}

void display(List list){                        //to display the list
    if (list.start==NULL)                       //check if list is empty
    {                           
        printf("\nEmpty List!\n");  
    }
    Node* temp=list.start;                      //add address of start to a temporary Node pointer
    while(temp!=NULL){                          //iterate till Null is reached
        printf("\n%5d\n",temp->info);           //to print the info part of list
        temp=temp->link;                        //to move the temporary pointer to next node     
    }                                           //end of while
}  

void main()                                     //start of main
{
    List l;
    l.start=NULL;                               //initialize start with NULL(to indicate empty list)
    display(l);                                 //displays list(Empty)
    insert_end(&l,100);                         //start-->100
    insert_end(&l,200);                         //start-->100-->200
    insert_end(&l,300);                         //start-->100-->200-->300
    insert_end(&l,400);                         //start-->100-->200-->300-->400
    insert_end(&l,500);                         //start-->100-->200-->300-->400-->500
    insert_end(&l,600);                         //start-->100-->200-->300-->400-->500-->600
    display(l);                                 //100-->200-->300-->400-->500-->600
}//end of main