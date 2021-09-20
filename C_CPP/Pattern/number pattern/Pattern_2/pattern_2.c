#include<stdio.h>
void main()
{
	int l,i,j;
	printf("Enter the line number:");
	scanf("%d",&l);
	for(i=1;i<=l;i++)
{
	for(j=1;j<=i;j++)
	printf("%d",i);
	printf("\n");
}
}
