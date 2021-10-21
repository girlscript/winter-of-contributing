#include<stdio.h>
int main()
{

int a,b,res;
char op;
{


    printf("enter the expression\n");
    scanf("%d%c%d",&a,&op,&b);
}
if(op == '+')
    {
        res = a+b;
        printf("the sum of %d and %d is %d",a,b,a+b);
    }
else if (op == '-')
    {
        res = a-b;
        printf("the diff of %d and %d is %d",a,b,a-b);
    }
else if (op == '*')
    {
        res = a-b;
        printf("the p of %d and %d is %d",a,b,a*b);
    }
else if (op == '/')
    {
        res = a-b;
        printf("the diff of %d and %d is %d",a,b,a/b);
    }

else
{
    printf("wrong choice");
}
return 0;
}