# To Convert Infix Expression To Postfix Expression In C

## CODE:

```cpp
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

#define size 100

//stack intialization and declaration of stack related functions
char stack[size] = {'\0'};
int top = -1;

int overflow()
{
    if (top == (size - 1))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int underflow()
{
    if (top == -1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push(char n)
{
    if (!overflow())
    {
        top += 1;
        stack[top] = n;
    }
    else
    {
        printf("Stack Overflow!\n");
    }
}

void pop()
{
    if (!underflow())
    {
        top -= 1;
    }
    else
    {
        printf("Stack Underflow!\n");
    }
}

void peak()
{
    printf("%c\n", stack[top]);
}

//input precedence function - f
int f(char char1)
{
    if (char1 == '+' || char1 == '-')
    {
        return 1;
    }
    else if (char1 == '*' || char1 == '/')
    {
        return 3;
    }
    else if (char1 == '^')
    {
        return 6;
    }
    else if (isdigit(char1) || isalpha(char1))
    {
        return 7;
    }
    else if (char1 == '(')
    {
        return 9;
    }
    else if (char1 == ')')
    {
        return 0;
    }
    else
    {
        printf("Invalid Character %c", char1);
    }
}

//stack precedence function - g
int g(char char2)
{
    if (char2 == '+' || char2 == '-')
    {
        return 2;
    }
    else if (char2 == '*' || char2 == '/')
    {
        return 4;
    }
    else if (char2 == '^')
    {
        return 5;
    }
    else if (isdigit(char2) || isalpha(char2))
    {
        return 8;
    }
    else if (char2 == '(')
    {
        return 0;
    }
    else
    {
        printf("Invalid Character %c", char2);
    }
}

//rank function - r to check whether the character is a valid operator
int r(char c3)
{
    if (c3 == '^' || c3 == '*' || c3 == '/' || c3 == '+' || c3 == '-')
    {
        return -1;
    }
    else if (isdigit(c3) || isalpha(c3))
    {
        return 1;
    }
}

//function to convert infix to postfix
void InfixtoPostfix(char infix_exp[], char postfix_exp[])
{
    int i, j, rank = 0;
    char c, temp;
    push('(');                                                  //pushing ( into the stack
    strcat(infix_exp, ")");                                     //appending the infix expression with ) to balance the ( added above
    i = 0;
    j = 0;
    c = infix_exp[i];                                          //accessing the first character
    printf("----------------------------------------------------------");
    printf("\nCharacter Scanned  Contents of Stack  Postfix Exp  Rank\n");
    while (c != '\0')                                         //running the loop till whole string is traversed
    {
        //popping symbols with greater precedence in stack
        while (f(c) < g(stack[top]))
        {
            temp = stack[top];
            postfix_exp[j] = temp;
            j++;
            pop();
            rank += r(temp);
            if (rank < 1)
            {
                printf("INVALID!\n");
                exit(1);
            }
        }
      
        //looking for matching parentheses
        if (f(c) != g(stack[top]))
        {
            push(c);
        }
        else
        {
            pop();
        }

        printf("%9c  %10s  %20s  %10d\n",c,stack,postfix_exp,rank);
        //getting the next character in infix expression
        i++;
        c = infix_exp[i];
    }
  
    //checking whether the expression is valid
    if (top != -1 || rank != 1)
    {
        printf("INVALID!\n");
        exit(1);
    }
    else
    {
        //closing the postfix expression if it is valid
        postfix_exp[j] = '\0';
    }
    printf("----------------------------------------------------------");
}

int main()
{
    char infix[size], postfix[size] = {'\0'};
    printf("Enter the infix expression - ");
    scanf(" %s", infix);

    InfixtoPostfix(infix, postfix); //function call

    printf("\nPostfix expression of the infix expression is - ");
    printf("%s", postfix);

    return 0;
}
```

## OUTPUT:
![image](https://user-images.githubusercontent.com/89743157/140655017-e5509d24-5dc4-4819-a487-5bbd086e2339.png)
![image](https://user-images.githubusercontent.com/89743157/140655067-6cdda709-d9a1-4e09-beec-2cbaa08d414b.png)
