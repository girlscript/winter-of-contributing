/*    Source code to implement a Queue over 2 Stacks contained as components
      inside the Queue 
      
      Stack -1 is the Primary Stack that contains the data elements of the Queue
      Stack -2 is the auxillary Stack used as a buffer (intermediate) storage
      while performing the dequeue operation on the Queue
      
*/

#include<stdio.h>
#define MAX 5 // size of arrray ( capacity of Stack)
#define TRUE 1 
#define FALSE 0


/************    Implementation of Stack over array ******************/
struct Stack
{
    int data[MAX]; // will store the elements of the Stack
    int top; // store the index of top element ( recent most)
}typedef Stack;

// Standart interface functions for the Stack ADT
int isEmpty(Stack); //return TRUE if Stack is empty 
int isFull(Stack);// returnn FALSE if Stack is full 
int push(Stack*, int); // push ( return TRUE on success) an element onto the top of Stack 
int pop(Stack*); // pop the top element from Stack and return 
int peek(Stack); // return the top element of Stack without removing it 

//function definitions
int isEmpty(Stack s)
{
    if(s.top == -1)
        return TRUE;
    return FALSE;
}//end of isEmpty

int isFull(Stack s)
{
    if(s.top == MAX-1)
        return TRUE;
    return FALSE;
}//end of isFull

int push(Stack* sp, int element)
{
    if( isFull(*sp)) // if the Stack is Full 
        {
            printf("\nStack Overflow, can't push %d ", element);
            return FALSE; // indicates a failure of current call to push
        }
        sp->top = sp->top + 1; // increment top to next vacant location
        sp->data[sp->top] = element; // add the element to new top location
        return TRUE;// successfully pushed the element
  
}//end of push 

int pop(Stack *sp)
{
    if( isEmpty(*sp)) // if the Stack is empty 
    {
        printf("\nStack Underflow");
        return -1; // indicates a failure for the current call to Pop
    }
    else
    {
        int top_element;
        top_element = sp->data[sp->top]; // hold the top element 
        sp->top = sp->top - 1;//decrement top 
        return top_element; // return the stored top element for this pop
    }
}//end of pop 

int peek(Stack s)
{
    if( isEmpty(s))// is Stack is empty can't peek 
        return -1; // indicates failure for current call to peek
    return s.data[s.top]; // return the top element but with no changes in state of Stack
}


/*************************** Stack Implementation Ends *****************/


/**********  Implementation of Queue using 2 Stack components ****************/
struct Queue
{
     Stack s1;  // primary stack used for storage
     Stack s2; // auxillary stack used as buffer while dequeue operation
}typedef Queue;


enqueue(Queue *q, int element)
{
   if( !isFull(q->s1)) // if the primary stack is NOT full
       push(&q->s1,element);
    else
      printf("\nQueue Overflow .. can't add %d to Queue", element);
          
}//end of enqueue

dequeue(Queue *q)
{
  if(isEmpty(q->s1))
    {
        printf("\nUnderflow ..");
        return -1; // return value for dequque on empty stack
    }
   while(!isEmpty(q->s1))    
   {
      int x = pop(&q->s1);// pop from stack s1 (primary stack component of queue)
      push(&q->s2,x); // push to auxillary stack component
   }
   
  // now pop from auxillary stack for returning as a result of dequeue
       int front_element = pop(&q->s2);
       
    // transfer back the remaining contents from auxillary stack to primary stack
    while( !isEmpty(q->s2))
    {
          int y = pop(&q->s2); // pop from auxillary stack 
          push(&q->s1,y);
    }          
    
    return front_element;
    
}//end of dequque
   
//driver code 
void main()
{
    Queue q;
    // initialization of the stack components of the queue
    q.s1.top = -1;
    q.s2.top = -1;
    
    printf("\n Dequeue return value %d ", dequeue(&q));// Underflow ... -1
    enqueue(&q, 100); //  [ 100 ]
    enqueue(&q, 200); //  [ 100 200]
    enqueue(&q, 300); //  [ 100 200 300]
    enqueue(&q, 400); //  [ 100 200 300 400]
    printf("\n Dequeue return value %d ", dequeue(&q)); // [ 200 300 400]
    printf("\n Dequeue return value %d ", dequeue(&q)); // [ 300 400 ]
    enqueue(&q, 500);  // [ 300 400 500]
    enqueue(&q, 600); // [ 300 400 500 600]
    enqueue(&q, 700); // [ 300 400 500 600 700]
    enqueue(&q, 800); // Overflow
    printf("\n Dequeue return value %d ", dequeue(&q)); // [ 400 500 600 700 ]
    
}//end of main
