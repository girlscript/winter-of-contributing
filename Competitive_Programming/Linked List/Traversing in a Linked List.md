# Treaversing in a Linked List

<p> If you are new to **Linked List** not a issue first you have to learn about basic of **Linked List** then this discussion will be helpful for you. No worry I will discussed throughly about traversing in **Linked List** it may be reverse traversing or simple traversing from first to last element.</p>

## What is traversing ?
<p> In simple word traversing mean visiting each an every elements at once present in your set, for example of sets :- linked list,array,etc. In progmming world we used word traversing for this process. </p>

<p>Talking about traversing in your data structure that is Linked list is that we start from first Node or start Node or head Node and passing next Node address and till reach end of your List. Now you might have doubt about What is Node ?</p>

## What is Node ?
<p> Well Node is like userdefined data type . Node can be created by using structure in c and structure or class in c++ progmming languages. In Linked list we want Node which cointained two type of data members one for storing data and another is for storing address of next node.
<pre>For example;-
  struct Node  //we create structure Node using struct keyword                                                                                                                   
  {
    int data; // for storing integer datatype
    Node next; //for storing address haveing Node datatype
  };  // semi-colon is compulsory which show end of structure </pre>
  
  <p>Now using this concept of structure in our program we create linked list, don't worry about the creation of linked list your main focus on travelling in a linked list so you 
  can make focus on display function in given example code.</p>
  
<pre>#include <iostream>
using namespace std;

// for creating abstract datatype
struct Node
        {
    int data;
    Node *next;
        };

Node *first=NULL;

// creating a linked list
void create(int a[],int n)
{
    Node *t,*last;
    first=new Node;
    first->data=a[0];
    first->next=NULL;
    last=first;

    for(int i=1;i<n;i++ )
    {
        t=new Node;
        t->data=a[i];
        t->next=NULL;
        last->next=t;
        last=t;
    }
}

//For display a linked list
void Display(Node *p)
{
    while (p!=NULL)
    {
        cout<<p->data<<" ";
        p=p->next;
    }
}


int main()
{
    int a[]={1,4,6,8,10,12};

    create(a,6); //call for create function

    Display(first);  //call for Display function

    return 0;
}</pre>

<p>Here in display function we are using Traversing concept only. we start from first element and reach to last element using p->next pointer in while loop once we reach then we stop at that point. During that process we print p->data so finaly we print your entired linked list. </p>

### Thanks for reading give your precious feedback for my work and comment down your queries and out I will surely reach out
  
