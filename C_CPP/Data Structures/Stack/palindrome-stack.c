//Program implementing the concept of  stack in palindrome 

#include<stdio.h>
#include<string.h>


char stack[50];
int top=-1;

//PUSH is used to add an item to a stack.   
void push(char arg)
{
    top=top+1;
    stack[top]=arg;
}

//POP is used to remove an item to the stack.
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

    len=strlen(str);        //len is used to find the length of the string 

    for(int i=0;i<len;i++)          //Using for loop is to traverse input string from index 0 to length-1 and push all characters in stack
    {
        push(str[i]);
    }

    for(int i=0;i<len;i++)
    {
        if(str[i]==pop())           //Poping characters from stack returs the characters of input string in reverse order.
        {
            count++;
        }
    }
    if(len==count)              //Now we compare the string with its correspondence characters  and we see any mismatch with the characters the string won't be palindrome
    printf("String is Palindrome");
    else
    printf("Try Again");
}

//Time Complexity: O(N)
