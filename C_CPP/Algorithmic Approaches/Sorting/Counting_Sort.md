
# Documentation on Linear Sorting Algorithm (Counting Sort)

General sorting algorithms have  nlogn as best running time complexity

But for some kind of inputs which have a particular property like all the elements are in range of a small number then we can use the linear sort algos to solve them in very less time

### Counting Sort

#### Explanation-->

We apply counting sort when the elements are in a specific range

Step 1--> we count the number of occurences of each element and store it in an array whose index is same as element (if 5 is repeated 13 times then count[5]=13) 

Step 2--> we add the sum of previous element occurance to this position

```
array--> 1,12,1,9,3,4,2,8,3,4,5,6,6,6

index-->           0  1  2  3  4  5  6  7  8  9 10 11 12
count-->           0  2  1  2  2  1  3  0  1  1  0  0  1
after 2nd step-->  0  2  3  5  7  8 11 11 12 13 13 13 14
```

Step 3-->traverse through the input array and store the element at the index represented by the count array and decrement the value at that index by 1
Repeat this until all the elements are inserted

Counting sort is not an in-place algorithm because it takes extra space and it is stable (preserves the order of elements in the array)

##### C program-->

```c
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define n 10

void counting_non_decreasing(int a[]){
    int sort[n];
    int countt[n]={0};

    for(int i=0;i<n;i++){
        countt[a[i]]++;  // step 1
    }
    for(int i=1;i<n;i++){
        countt[i]+=countt[i-1];  // step 2
    }
    for(int i=n-1;i>=0;i--){
        sort[(--countt[a[i]])]=a[i]; // step 3
    }

    printf("\n\nNon-decreasingly-sorted: ");
    for(int i=0;i<n;i++){
        printf("%d ",sort[i]);
    }
}

void counting_non_increasing(int a[]){
    int count[n]={0};
    int sort[n];

    for(int i=0;i<n;i++){
        count[a[i]]++;
    }
    for(int i=1;i<n;i++){
        count[i]+=count[i-1];
    }
    for(int i=n-1;i>=0;i--){
        sort[n-1-(--count[a[i]])]=a[i];
    }
    printf("\n\nNon-Increasingly-sorted: ");
    for(int i=0;i<n;i++){
        printf("%d ",sort[i]);
    }
}

int main(){
    srand(time(0));
    int a[n];
    printf("random array: ");

    for(int i=0;i<n;i++){
        a[i]=rand()%10;
        printf("%d ",a[i]);
    }

    counting_non_decreasing(a);
    counting_non_increasing(a);
}
```