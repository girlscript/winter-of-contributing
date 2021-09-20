#include<stdio.h>
void main()
{
  int i,j;
  for(i=1;i<=6;i++)
    {
     for(j=1;j<=11;j++)
        if(j>=7-i&&j<=5+i)


        printf("*");


        else
        printf(" ");
        printf("\n");

}
}
