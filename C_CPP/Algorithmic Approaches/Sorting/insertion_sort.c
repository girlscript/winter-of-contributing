#include<stdio.h>
int main(){

   // Here i & j for loop counters, temp for swapping,
   // count for total number of elements, number[] to
   // store the input numbers in array. You can increase
   // or decrease the size of number array as per requirement
    
   int i, j, count, temp, number[20];

   printf("How many numbers u are going to enter?: ");
   scanf("%d",&count);

   printf("Enter %d elements: ", count);

   // This loop would store the input numbers in array
   // here i will first implement and then increament by i++ then pass it over
   for(i=0;i<count;i++)
      scanf("%d",&number[i]);

   // Implementation of insertion sort algorithm
   for(i=1;i<count;i++){
      temp=number[i];
      j=i-1;
      //by using && operator it will work until the condition is true,it will terminate if one of the comparision become false.
      while((temp<number[j])&&(j>=0)){
         number[j+1]=number[j];
         j=j-1;
      }
      number[j+1]=temp;
   }
   //this line of code will the sorted array
   printf("elements after sorting: ");
   for(i=0;i<count;i++)
      printf(" %d",number[i]);

   return 0;
}
// FOR BETTER UNDERSTANDING PLS REFER sorting.md FILE