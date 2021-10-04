//Circular Queue over an array 
#include<stdio.h>

#define MAX 5
#define TRUE 1
#define FALSE 0

struct cqueue
{
    int data[MAX];
    int front;
    int rear;
}typedef cqueue;

int isEmpty(cqueue s)
{
    if(s.front==-1)
        return TRUE;
    else
        return FALSE;
}

int isFull(cqueue s)
{
    if((s.rear+1)%MAX==s.front) //to check if front is 1 step ahead of rear
        return TRUE;
    else
        return FALSE;
}

int add(cqueue *s,int element)
{
    if(isFull(*s))
    {
        printf("\nCannot add in queue, queue full!\n");
        return 0;
    }
s->rear=(s->rear+1)%MAX; // move rear one step ahead and % is because to move in circular path
s->data[s->rear]=element; //add element
if(s->front==-1) //bringing front to 0, if first element added
    s->front=0; //set to 0th position in array
printf("\nAdded element is : %d",element);
}

int delete(cqueue *s)
{
    if(isEmpty(*s))
    {
        printf("\nCannot delete, queue empty!\n\n");
        return -1;
    }
int rem_element=s->data[s->front]; //to capture removed element
if(s->front==s->rear)   //if only one element present
{   
    //reset to initial conditions, as queue is empty
    s->front=-1;
    s->rear=-1;
}
else //move front to 1 step ahead
    s->front=(s->front+1)%MAX;
return rem_element;
}

int main()
{
    cqueue s;
    s.front=-1;
    s.rear=-1;
    isEmpty(s);
    add(&s,100);
    printf("\nFront at = %d and Rear at = %d,",s.front,s.rear);
    add(&s,200);
    printf("\nFront at = %d and Rear at = %d",s.front,s.rear);
    add(&s,300);
    printf("\nFront at = %d and Rear at = %d",s.front,s.rear);
    printf("\nDeleted element is : %d\n",delete(&s));
    printf("\nFront at = %d and Rear at = %d",s.front,s.rear);
    add(&s,400);
    printf("\nFront at = %d and Rear at = %d",s.front,s.rear);
    add(&s,500);
    printf("\nFront at = %d and Rear at = %d",s.front,s.rear);
    add(&s,600);
    printf("\nFront at = %d and Rear at = %d",s.front,s.rear);
    add(&s,700);
    printf("\nFront at = %d and Rear at = %d",s.front,s.rear);
    printf("\nDeleted element is : %d\n",delete(&s));
    printf("\nFront at = %d and Rear at = %d",s.front,s.rear);
    printf("\nDeleted element is : %d\n",delete(&s));
    printf("\nFront at = %d and Rear at = %d\n",s.front,s.rear);
}
