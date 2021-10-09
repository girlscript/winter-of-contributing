//Program implementing the concept of  stack in palindrome 

#include<stdio.h>
#include<string.h>


char stack[50];
int top=-1;

void push(char arg)
{
    top=top+1;
    stack[top]=arg;
}

char pop()
{
    char c;
    c=stack[top];
    top=top-1;
    return c;
}

int main()
{
    char str[30];
    int  count=0, len;

    printf("Enter the String:");
    scanf("%s", str);

    len=strlen(str);

    for(int i=0;i<len;i++)
    {
        push(str[i]);
    }

    for(int i=0;i<len;i++)
    {
        if(str[i]==pop())
        {
            count++;
        }
    }
    if(len==count)
    printf("String is Palindrome");
    else
    printf("Try Again");
}