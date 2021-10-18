# Documentation on Linear Sorting Algorithms (Radix Sort)

General sorting algorithms have  nlogn as best running time complexity

But for some kind of inputs which have a particular property like all numbers have a small number of digits in them we can use the linear sort algos to solve them in very less time

### Radix Sort

#### Explanation-->

We can use Radix sort when all the given elements have number of digits in a specific range (all elements are either 3-digit or 4-digit or 5-digit or any digited number)

We take help of counting sort in this algorithm 

First we sort the elements according to the last digit of the given elements using counting sort

Then we sort them using the tens place digit and then hundreds place and so on untill the right most digit is also used 

```
    if the array is {123,345,672,784,791}
ones digit--> 791,672,123,784,345
next digit-->123,345,672,784,791
last digit-->123,345,672,784,791
```

Radix sort is not an in-place algorithm because it uses counting sort which is not in place algorithm and it is stable (preserves the order of elements in the array)

##### C program-->

```c
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void non_decreasing_counting_sort(int a[],int n,int k){
    int b[n],op[n];
    for(int i=0;i<n;i++) b[i]=0;

    for(int i=0;i<n;i++) b[(a[i]/k)%10]++;

    for(int i=1;i<n;i++) b[i]+=b[i-1];

    for(int i=n-1;i>=0;i--) op[--b[(a[i]/k)%10]]=a[i]; 

    for(int i=n-1;i>=0;i--) a[i]=op[i];
}

void radix_sort(int a[],int n,int max){
    for(int i=1;max/i>0;i*=10) 
        non_decreasing_counting_sort(a,n,i);
}

int main(){
    srand(time(0));
    int n=15,max=0;
    int arr[n];
    printf("Random values: ");
    for(int i=0;i<n;i++){
        arr[i]=rand()%1000+21;
        if(max<arr[i]) max=arr[i];
        printf("%d ",arr[i]);
    }
    radix_sort(arr,n,max);
    printf("\n\nSorted: ");
    for(int i=0;i<n;i++) printf("%d ",arr[i]);
}
```