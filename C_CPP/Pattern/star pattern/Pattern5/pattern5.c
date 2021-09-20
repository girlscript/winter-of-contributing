#include<stdio.h>
void main()
{int j,i;
  for(i=1;i<=5;i++)
 {for(j=1;j<=4;j++)
  {if (j>=6-i&&j<=10-i)
    printf("*");
    else
        printf(" ");
  }
    printf("\n");
 }
}
