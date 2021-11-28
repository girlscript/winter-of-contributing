### Finding a maximum and minimum element of an array using the divide and conquer algorithm.

---
### Divide and Conquer algorithm

In the divide and conquer algorithm, we
* We will  **Divide** the main problem into smaller subproblems such that they are smaller instances of the same problem.
* We then **Conquer** the problem in a recursive manner. If the subproblem is small enough, solve the subproblems using base cases.
* Lastly, we will **Combine** the solution of the subproblem into the solution of the original problem.


#### Problem statement:

Finding a maximum and minimum element of an array

Solution:


To find maximum and minimum numbers in a given array (arr[]) of size n, the following algorithm can be used.

1. Naive approach
2. Using the divide and conquer approach

### Naive method

 In this method, we linearly iterate the array and find the maximum and minimum element.

```C++
Algorithm Naive_max_min(int arr[],int n,&max,&min){
    int max=arr[0];
    int min=arr[0];
    for (int i=1;i<n-1;i++){
        if(arr[i]>max) //comparison (n-1) times
            max=arr[i];//stores max element
        if(arr[i]<min)//comparison (n-1) times
             min=arr[i];//stores minimum element
    }
}
```
#### Analysis:


The for loop iterates n-1 times and in each iteration, two comparisons are made to find max and min elements. Therefore, number of comparisons made is 2n-2.

Time complexity is O(n)

The number of comparisons made can be reduced by the divide and conquer approach.

 **Using divide and conquer approach** :


In this approach, we divide the array into two halves. Then we find the maximum and minimum of two halves. Later we have to return maximum and minimum elements 

```C++
#include<bits/stdc++.h>
using namespace std;

void max_min(int arr[],int l,int r,int &min,int &max){
    
    if (l==r)//if only one element then l and r both will point to at same element
    {
        //no comparsion made since only one element is present
        max=arr[l];
        min=arr[l];
        return ;
    }
    else if(l==r-1)//if two elements are present
    {
        // One comparison made since two elements are only present
        if(arr[l]>arr[r])
        {
            max=arr[l];
            min=arr[r];
        }
        else{
            max=arr[r];
            min=arr[l];    
        }
        return;
    }

    else{
        //Divide the problem
        int mid=(l+r)/2;//Finding mid position of the array so that it can be divided into two halves
        int max1=INT_MIN,min1=INT_MAX;
        //solving sub problems
        max_min(arr,l,mid,min,max);
        max_min(arr,mid+1,r,min1,max1);
        //Combine the solutions
        if(max<max1) max=max1;//max stores maximum element
        if(min1<min) min=min1;//min stores minimum element
        return;
    }

}

int main(){
    int n;
    cout<<"Enter the size of array : ";
    cin>>n;
    int arr[n];
    cout<<"Enter elements to the array : "; 
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int min =INT_MAX,max=INT_MIN;

    max_min(arr,0,n-1,min,max);
    //displaying maximum and minimum elements
    cout<<"Maximum element is: "<<max<<"\n";
    cout<<"Minimum element is: "<<min;

    return 0;
}

```
#### Output

```
Enter the size of  array : 7
Enter elements to the array : 23 56 11 -34 0 98 3
Maximum element is: 98
Minimum element is: -34
```

#### Analysis:


Let T(n) be the number of comparisons made, where n is the number of comparisons then the recurrence relation is
|   n         |    T(n)     |
| :---------: | :---------: |
| 1           |     0       |
| 2           |     1       |
| >2          | 2T(n/2)+2   |

Let us assume that n is in the form of a power of 2. Hence, n=2<sup>k</sup> where k is some positive integer then,

T( n ) = 2 T ( n/2 ) + 2

After solving this recurrence relation we will get,

T ( n ) = 3n / 2 - 2

Therefore, the number of comparisons will be 3n / 2 - 2.

### Conclusion


* Though the number of comparisons in the recursive approach is less than the naive method, asymptotically both have linear time complexity.  
* Space complexity is large in the recursive approach compared to the naive method which uses  O(1) space.
 
