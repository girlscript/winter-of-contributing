## Selection Sort
<p> First, sorting means to arrange list of data elements in either increasing or decreasing order.</p>
<p> So one of the techinques to sort a list of data elements is "Selection Sort".</p>
<p> Let us first consider an array A with N elements.So, the data of N elements stored in memory is A[0],A[1]......A[N-1].
In selection sort,we first find the smallest element and swap it with the element at first position i.e A[0],then we find the second smallest element and swap it with the element at second position
i.e A[1] and this goes on.After (N-1) times swaps we get a sorted array A.</p>
<p>
Now lets see the algorithm :
</p>

First,Set LOC=0,LOCP=LOC+1,and consider the given array A:


1. Repeat steps (2),(3) for LOC=0 to N-2
2. Repeat steps (a) for LOCP=LOC+1 to N-1 Set min=A[LOC]
    - a)If min> A[LOCP] then min=A[LOCP]
3. Now swap min and A[LOC] 
4. Exit
<p>
    Now the array is sorted.
     Lets see the working code in c language.
    </p>
   
```
#include<stdio.h>
//function to swap two elements
void swap(int *x,int *y){
    int t=*x;
    *x=*y;
    *y=t;
}

int main(){
    //main working code
    int N,A[100],min;
    scanf("%d",&N);//to get the no. of elements of array
    int i,j;
    //to get the elements of array
    for(i=0;i<N;i++){
        scanf("%d",&A[i]);
    }
    for(i=0;i<N-1;i++){
        min=i;
        for(j=i+1;j<N;j++){
            if(A[min]>A[j]){
                min=j;
            }
        }
        swap(&A[min],&A[i]);
    }
    //to print the sorted array
    for(i=0;i<N;i++){
        printf("%d ",A[i]);
    }
    return 0;
    
}

```
#### For complexity of Selection Sort Algorithm
<p>Considering the above array A with N elements ,let there be f(N) no.of comparisons which is independent of the original order of elements.This means that while searching the smallest element in first case there will be(N-1) comparisions, then there will be (N-2) comparisions while looking for the second most smallest element in second case and so on.</p>
<p>So now f(N)= (N-1) + (N-2) ....+ 2 + 1 = (N(N-1)/2)= O(N^2)</p>
From this we get both the worst and average case for the selection sort algorithm is O(N^2).
Also,the number of swaps and assignments doesn't depend upon on the original order of elements of array and the sum of these operations doesn't exceed a factor of N^2.
