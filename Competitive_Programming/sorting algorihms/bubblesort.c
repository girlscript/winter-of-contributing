//bubblesort
#include <stdio.h>
int main () {
    int t , i , j , k;
    printf("enter the total number to sort and all numbers\n") ;
    scanf("%d",&t) ; 
    int a[t] ;
    for(i=0;i<=t-1;i++) {
        scanf("%d",&a[i]) ;
    }
    for(i=0;i<=t-1;i++) {
        for(j=0;j<=t-i-1;j++) {
            if(a[j]>=a[j+1]) {
                k = a[j] ;
                a[j] = a[j+1] ;
                a[j+1] = k ;
            }
        }
    }
    for(i=0;i<=t-1;i++) {
        printf("%d\n",a[i]) ;
    }
}
