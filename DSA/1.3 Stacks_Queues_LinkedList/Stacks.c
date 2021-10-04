//To implement stack over an array
#include<stdio.h>

#define TRUE 1
#define FALSE 0
#define MAX 5

struct stack
{
    int data[MAX];
    int top;
} typedef Stack;

int isEmpty(Stack s)
{
    if (s.top== -1 )
        return TRUE;
    else
        return FALSE;
}

int isFull(Stack s)
{
    if (s.top== MAX)
        return TRUE;
    else
        return FALSE;
}

void push(Stack *sp, int element)
{
    if(isFull(*sp))
    {
        printf("OVERFLOW");
    }
    else
    {
        //add the new element at the top of stack
        sp->top+=1;
        sp->data[sp->top]=element;
    }
}


int pop(Stack *sp)
{
    if(isEmpty(*sp))
    {
        printf("UNDERFLOW");
        return -1;
    }
    //delete the new element at the top of the stack
    int top_element=sp->data[sp->top]; //gives the top element to a temporary variable
    sp->top-=1;
    return top_element;
}

int main()
{
    Stack s;
    s.top=-1;
    printf("\n isEmpty() returning : %d",isEmpty(s));
    printf("\n Popped Element is : %d",pop(&s));    //UNDERFLOW
    push(&s,100);
    push(&s,200);
    printf("\n Popped Element is : %d",pop(&s));
    push(&s,300);
    printf("\n Popped Element is : %d",pop(&s));
    push(&s,400);
    push(&s,500);
    push(&s,600);
    push(&s,700);
    printf("\n isFull() returning : %d\n",isFull(s));
    return 0;
}
