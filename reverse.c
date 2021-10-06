#include <stdio.h>     
int main()    
{    
    //array initialization
    int a[] = {10,11,12,13,14,15};     
    int i;   
    //length of array   
    int len = sizeof(a)/sizeof(a[0]);    
        
    printf("Array: \n");    
    for (i = 0; i < len; i++) 
	{     
        printf("%d ", a[i]);     
    }      
        
    printf("\n");    
        
    printf("Array in reverse order: \n");  
	  
    //Array in reverse order    
    for ( i = len-1; i >= 0; i--) {     
        printf("%d ", a[i]);     
    }     
    return 0;    
}  
