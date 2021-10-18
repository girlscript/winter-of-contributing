# Randomized Algorithm
*Randomised algorithm* is that in srand using rand() funtion generating random number to decide what is do next.
Example:- **Randomised in QuickSort**
- Random number to peck the next pivit or randomly suffle array.
- In QuickSort using random pivoting. we first parttion the array in place such that all element to the left of the pivot elements are smaller, while all elements to the right of  the pivoit are greater that the pivoit. Then we recursively call the same procedure for left and right sub array.

```cpp
#include<bits/stdc++.h>
using namespace std;
void Rand_Suffle(int *data, int s, int e){
    srand(time(NULL));
    int i,j,temp;
    for(i=e; i>0; i--){
        j=rand()%(i+1);
        swap(data[i], data[j]);
    }
 }

int Partition(int *data, int s, int e){
    int i= s-1;
    int j= s;
    int pivoit = data[e];
    for( ; j<e; j++){
        if(data[j]<= pivoit){
            i++;
            swap(data[i],data[j]);
        }
    }
    swap(data[i+1], data[e]);
    return (i+1);
}
void RandmisedQuickSort(int *data, int s, int e){
    if(s>=e){
        return;
    }
    int p= Partition(data, s, e);
    RandmisedQuickSort(data, s, p-1);
    RandmisedQuickSort(data, p+1, e);
}
int main(){
    int data[]={8,5,9,4,6,1,12};
    int n = sizeof(data)/sizeof(int);
    Rand_Suffle(data ,0 , n-1);
    cout<<"Data is : ";
    for(int i=0; i<n; i++){
        cout<<data[i]<<"  ";
    }
    RandmisedQuickSort(data, 0 ,n-1);
    cout<<"\n";
    cout<<"Sorted Data is : ";
    for(int i=0; i<n; i++){
        cout<<data[i]<<"  ";
    }

    return 0;
}
```
## Advantage
- QuickSort require lesser auxillary space than **MergeSort**.
- This Sorting algorithm work on **Divided** and **Concer** technique.
- Here QuickSort average time complesity is **O(n log(n))**   