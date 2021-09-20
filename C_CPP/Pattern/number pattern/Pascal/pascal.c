#include<stdio.h>
int main()
{
    int i,j,num=1,n,k;
    printf("Enter the number of rows: ");
    scanf("%d",&n);    
    for (i=0;i<n;i++){  
        for (k=i;k<n;k++){ 
            printf("  ");
        }
        for (j=0;j<=i;j++){ 
            if (j==0||i==j)
                num=1;
            else
                num=num*(i-j+1)/j;
        printf("   %d",num); 
        }
        printf("\n");
    } 
    return 0;
 }

