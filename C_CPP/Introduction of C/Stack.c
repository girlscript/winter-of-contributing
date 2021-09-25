#include <stdio.h>
#include <stdlib.h>
 
int top=-1,stack[100],n;
void push();
void pop();
void traverse();
 
void main()
{
int ch;
{
printf("\nEnter the size of Stack:");
scanf("%d",&n);
printf("\n\n1.Push\n2.Pop\n3.Traverse\n4.Exit");
do
{
printf("\n\nEnter your choice(1-4):");
scanf("%d",&ch);
switch(ch)
{
case 1: push();
break;
case 2: pop();
break;
case 3: traverse();
break;
case 4: exit(1);
default: printf("\nWrong Choice!!");
}
}
while (ch!=4);
}
}

void push()
{
int val;
if(top==n-1)
{
printf("\nStack is Overflow!!");
}
else
{
printf("\nEnter element to push:");
scanf("%d",&val);
top++;
stack[top]=val;
}
}
 
void pop()
{
if(top==-1)
{
printf("\nStack is Underflow!!");
}
else
{
printf("\nPopped element is %d",stack[top]);
top--;
}
}
 
void traverse()
{
int i;
if(top==-1)
{
printf("\nStack is empty!!");
}
else
{
for(i=top;i>=0;i--)
printf("\n%d",stack[i]);
}
}