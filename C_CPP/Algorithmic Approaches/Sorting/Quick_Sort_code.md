## Quick Sort

// I will write the code of quicksort below and explain it to you

// First we will select the first element of array and declare it to a variable pivot (we can take any element in pivot,

// but here we are going with first one)

// Then our job is to find where is the right place for pivot in array

// Using partition function we will find where is the right place of pivot and then swap it with that position element

// And then we divide our array in two parts 1st is from index 0 to index of pivot and in second from index pivot+1 to last

// And we calling this recursively untill at that call there were only two element left in that array 

//time complexiety of this sort is O(nlogn)

## Code

#include<bits/stdc++.h>
#include<climits>
using namespace std;


void swap(int *x,int *y){
    int temp= *x;
    *x= *y;
    *y=temp;
}

int partition(int a[],int low,int high){
    int pivot=a[low];      
int i=low,j=high;

do{
    do{i++;}while(a[i]<=pivot);
    do{j--;}while(a[j]>pivot);
    if(i<j){
        swap(&a[i],&a[j]);
        }
   }while(i<j);    
     

   swap(&a[low],&a[j]);    
return j;
}

void quicksort(int a[],int low,int high){
if(low<high){
int j=partition(a,low,high);


quicksort(a,low,j);
quicksort(a,j+1,high);
    }
}


int main(){ 
 int a[]={3,5,4,6,2,21,7,INT_MAX}; 
 quicksort(a,0,7);

 for(int i=0;i<7;i++){
     cout<<a[i]<<"  ";
    }

return 0;
}

# output

//OUTPUT:  2 3 4 5 6 7 21

