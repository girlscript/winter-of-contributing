#include<stdio.h>
 
int main()
{  
   // Array is being initialized
   // N is the total number of elements present in the array
   // ++i operator will first execute and then increament the value.
   int arr[] = {2,9,6,5,6,0,-1}, n = 7;
   int i , j ;
   for(i = 0; i < n - 1; ++i)
   { 
      int swapped = 0;
      // This will perform the sorting procedure
      // Here ++j will first increament the value and then pass it 
      // The loop will iterate upto n-1 length because the indexing of elements starts from 0 to n and from backwards it will start from -1
      for(j = 0; j < (n - i - 1); ++j)
         if(arr[j] > arr[j+1])
         {
            // For an instance , temp will store the array and then swapped will be stored.
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;

            swapped = 1;
         }
      // if array is not swapped then it will return to the loop again due to break statement.  
      // !swapped means not swapped . NOT operator used here.
      if(!swapped)
         break;
   }
   // this line of code will print the sorted array
   //      
   printf("\nArray after sorting: ");
   for(i = 0; i < n; ++i)
   
   //arr[i] will print the index value of arr according to the value of i
   // For example arr[2] will print the 3rd element of the array.
      printf("%d ", arr[i]);
 
   return 0;
}
// FOR BETTER UNDERSTANDING PLS REFER sorting.md FILE