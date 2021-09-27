#include<stdio.h>
 
int main()
{  
   // array is being initialized
   int arr[] = {2,9,6,5,6,0,-1}, n = 7;
   int i , j ;
   for(i = 0; i < n - 1; ++i)
   { 
      int swapped = 0;
      // this will perform the sorting procedure
      // here ++j will first increament the value and then pass it 
      for(j = 0; j < (n - i - 1); ++j)
         if(arr[j] > arr[j+1])
         {
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

            swapped = 1;
         }
      // if array is not swapped then it will return to the loop again due to break statement.  
      if(!swapped)
         break;
   }
   // this line of code will print the sorted array      
   printf("\nArray after sorting: ");
   for(i = 0; i < n; ++i)
   
   //arr[i] will print the index value of arr according to the value of i
      printf("%d ", arr[i]);
 
   return 0;
}
// FOR BETTER UNDERSTANDING PLS REFER sorting.md FILE