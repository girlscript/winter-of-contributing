# Divide and Conquer Algorithm
As its name suggest in this algorithmic approach we divide the given problem in to sub problem and then we solve each sub problem recursively and then we combine the result of each sub problem to get the solution.<br>
there are many algorith which are based on this technique but from those some of the important algorithm are:-<br>
1. Binary search 
2. Merge sort
3. Find max and min
4. Quick sort
## Binary seearch using DAC
```cpp
//binary search using DAC techinque
#include<bits/stdc++.h>
using namespace std;
int binary_DAC(int arr[],int i , int j,int key)
{  if(i==j){
     if(key==arr[i])
       return i;
     else
       return -1;
    }
   int mid=(i+j)/2;                     //Divide step
   if(key==arr[mid])
     return mid;
   if(key<arr[mid]) 
     return binary_DAC(arr,i,mid-1,key);  // solving each sub problem recursively
   else 
     return binary_DAC(arr,mid+1,j,key);  
}
int main()
{  int arr[]={10,20};
   int size=sizeof(arr)/sizeof(int),key=10;
   int index=binary_DAC(arr,0,size-1,key);
   if(index==-1)
     cout<<"element not found";
   else 
     cout<<"element is found at the index "<<index;
   return 0;
}
```
**Note** :- The combine step is not mandatory in DAC approach as u can see there is no combine step in this problem.
## Merge sort using DAC
```cpp
#include<bits/stdc++.h>
using namespace std;
void merge(int arr[],int beg,int mid,int end)
{  int l1=mid-beg+1,l2=end-mid;
   int left[l1],right[l2];
   for(int m=0 ; m<l1 ; m++)  left[m]=arr[beg+m];
   for(int m=0 ; m<l2 ; m++)  right[m]=arr[mid+m+1];
   int m=0,n=0,k=beg;
   while(m<l1 && n<l2)
   {  if(left[m]<right[n])
        arr[k++]=left[m++];
      else
        arr[k++]=right[n++];
   }
   while(m<l1) {arr[k++]=left[m++];}
   while(n<l2) {arr[k++]=right[n++];}
}
void mergesort(int arr[],int i,int j)
{  if(i<j){
    int mid=(i+j)/2;                  // divide step
    mergesort(arr,i,mid);             // solving each sub problem
    mergesort(arr,mid+1,j);           // solving each sub problem
    merge(arr,i,mid,j);               // combine step
   }
   else 
    return;
}
int main()
{  int arr[]={21,3,10,11,50,14,23};
   int size=sizeof(arr)/sizeof(int);
   mergesort(arr,0,size-1);
   for(auto it:arr)
      cout<<it<<" ";
   return 0;
}
```
This algorithmic approach has a time complixity of O(n log n) and space complixity of O(n). Majority portion of its time complixity is in **combine step** and this is one of the difference in the merge sort and quick sort as in quick sort major portion of its time complixity is in **divide step**.
## Find max and min in an array using DAC
```cpp
//use divide and conqure technique to find the maximum and minimum element in an array
#include<bits/stdc++.h>
using namespace std;
struct node{
    int max,min;
};
 node dac_max_min(int arr[],int i,int j)
 {  struct node s1,s2,s3;
    if(i==j){
     s1.max=s1.min=arr[i];
     return s1;
    }
    else if(j-i==1)
    { s1.max=arr[i]>arr[j]?arr[i]:arr[j];
      s1.min=arr[i]<arr[j]?arr[i]:arr[j];
      return s1;
    }
    else
    { int mid=(i+j)/2;                      // divide step
      s2=dac_max_min(arr,i,mid);            // solving each sub problem recursively
      s3=dac_max_min(arr,mid+1,j);          // solving each sub problem recursively
      s1.max=s2.max>s3.max?s2.max:s3.max;   // combine step
      s1.min=s2.min<s3.min?s2.min:s3.min;   // combine step
      return s1;
    }
}
int main()
{  int arr[20]={-2,5,1,-10,20,13,75,12,52,11};
   int i=0,size=sizeof(arr)/sizeof(int);
   struct node result=dac_max_min(arr,i,size-1);
   cout<<"maximun element is: "<<result.max<<endl;
   cout<<"minimun element is: "<<result.min;
   return 0;
}
```
## Quick sort using DAC
```cpp
// use quick sort (DAC) to sort an array
#include<bits/stdc++.h>
using namespace std;
void swap( int *a , int *b)
{  int temp;
   temp=*a;
   *a=(*b);
   *b=temp;
}
int partition(int arr[],int beg,int end)
{  int i=beg-1,j=beg,pivot;
   pivot=arr[end];
   while(j<end)
   {  if(arr[j]<pivot)
      { i++;
        swap(&arr[i],&arr[j]);
      }
      j++;
   }
   swap(&arr[i+1],&arr[end]);
   return (i+1);
}
void quicksort(int arr[],int beg,int end)
{  if(beg<end)
   {  int q=partition(arr,beg,end);        // divide step
      quicksort(arr,beg,q-1);              // solving each sub problem recursively
      quicksort(arr,q+1,end);              //solving each sub problem recursively
   }
}
int main()
{ int arr[]={10,60,12,56,54,25,41};
  int size=sizeof(arr)/sizeof(int); 
  quicksort(arr,0,size-1);
  for(auto it:arr)
     cout<<it<<" ";
  return 0;
}
```
In this approach  <br>
best time complexity is O(n log n)<br>
average case O(n log n)<br>
worst case O(n^2)