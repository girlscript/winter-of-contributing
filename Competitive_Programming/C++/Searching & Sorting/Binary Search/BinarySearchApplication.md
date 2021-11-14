# Binary Search Application

## Linear Search

### Explanation 
In this the iterator visit one by one to each element of the array to search the element to be seached , so the complexity in Worst case is O(n) where n is the size of array
The most simple way to search is linear search , as
```c++
//c++
int arr[10]={6,5,2,7,1,8,4,9,10,11};
int search_element=7;
int indx,f=0;
for(int i=0;i<10;i++)
{
  if(arr[i]==search_element)
  {
      f=1;
      indx=i;
  }
  if(f)
  {
      cout<<"element found"<<indx;
  }
  else
  cout<<"element not present";
}
```
>Time Complexity O(n)   , where n is the size of array

We should use linear search incases where the array is not sorted neither monotonic nor bitonic way.
## Binary Search

### Explanation

In Binary Search we divide the array in *two halves* and then one half is decided and the searching is done on that half only similarily this divide take place till the element is not found.
so the the time complexity in Worst Case is *O(log n)* where n is the size of array.


```c++
//c++
int arr[10]={1,2,3,4,5,6,7,8,9,10};
int search_element=7;
int start=0;
int end=arr.size()-1;
while(start<=end)
{
 int mid= start+(end-start)/2;  // safe from overflow
 if(arr[mid]==search_element)
 return mid;   // index where the element is found
 else if(arr[mid]<search_element)
 start=mid+1;
 else
 end=mid-1;
}
return -1;  // not found
```
>Time Complexity O(log n)  , where n is the size of array

Binary Search can solve various other problem in Competitive Programming where we have to print result in specific time otherwise TLE comes. 

##  Find the first and last occurence

### Explanation

- In the case of first occurence we search the element and when we find that the mid calculated is the index that has the same element so this can be a answer , that is why we save the index in a varible and move the end pointer to mid-1 , to serach if the element is present before the index stored.
- This way after the binary search the result will have the index of first occurence of that element.
- Similarily in Last occurence we search the element and when we find that the mid calculated is the index that has the same element so this can be a answer , that is why we save the index in a varible and move the start pointer to mid+1 , to serach if the element is present after the index stored.
- This way after the binary search the result will have the index of last occurence of that element.

In this we can find the occurence of element in array in O(log(n)) time where n is the size of array. we can find the total number of time the element comes in the array if we know the first and last occurence . 

>count= first_occurence - last_occurence

```c++
#include<bits/stdc++.h>
using namespace std;
int first_occurence(int arr[],int n, int search_element){
int start=0;
int end=n-1;
int indx;
while(start<=end)
{
 int mid= start+(end-start)/2;  
 if(arr[mid]==search_element){
     indx=mid;  // found element and move in the left side to search if any occurence of same element is in the left side
     end=mid-1;
 }
 else if(arr[mid]<search_element)
 start=mid+1;
 else
 end=mid-1;
}
return indx;  
}
int last_occurence(int arr[],int n,int search_element){
int start=0;
int end=n-1;
int indx;
while(start<=end)
{
 int mid= start+(end-start)/2;  
 if(arr[mid]==search_element){
     indx=mid; // found element and move in the right side to search if any occurence of same element is in the right side
    start=mid+1;
 }
 else if(arr[mid]<search_element)
 start=mid+1;
 else
 end=mid-1;
}
return indx;   
}
int main(){
int arr[]={12,23,34,34,34,45,46,55,67};
int search_element=34;
int n=(sizeof(arr)/sizeof(int));
cout<<"First occurence"<<first_occurence(arr,n,search_element);
cout<<endl<<"Last occurence"<<last_occurence(arr,n,search_element);
return 0;
}
```
>Output :
>
>First occurence 2
>
>Last occurence 4

>Time Complexity O(log n)   , where n is the size of array


## Find Floor and Ceil of a element from a given array in O(log n) time complexity


Floor *is the gretest element in the array smaller than the element we want to find floor.*

Ceil *is the smallest element in the array greater than the element we want to find ceil.*


## Explanation:
- In floor of an element in the array we need to find the greatest element samaller than the element we wish to find the floor.
- example:
 array =[1,2,3,5,6,7,8] element = 4 for which we have to find the floor , 
 1. why Binary Search ?  because the array is sorted and we know that the element floor will be present in the array (ie. from start=0 to end=n-1 where n is the size of array)
2. so we find the mid element using start and end of the array index till the time start <= end.
3. then we compare array[mid] with the element for which we have to find floor.
4. and whenever we find any smaller element than 4 ,then we save it in a variable indx(as that can be a possible answer) and move the start to mid+1 , to find if other greater element that is smaller than the element (in this case 4).
5. After Binary Search, we will return the indx as it will have the floor of the element.
- Similarily we can approach ceil, as we know ceil is the smallest greater element than the element for which we want to find ceil.


```c++
#include<bits/stdc++.h>
using namespace std;
int find_floor(int arr[],int n, int element){
int start=0;
int end=n-1;
int indx;
while(start<=end)
{
 int mid= start+(end-start)/2;  
 if(arr[mid]==element){
     return arr[mid];
 }
 else if(arr[mid]<element){
 indx=mid;
 start=mid+1;
 }
 else
 end=mid-1;
}
return arr[indx];  
}
int find_ceil(int arr[],int n,int element){
int start=0;
int end=n-1;
int indx;
while(start<=end)
{
 int mid= start+(end-start)/2;  
 if(arr[mid]==element){
    return arr[mid];
 }
 else if(arr[mid]<element)
 start=mid+1;
 else{
 indx=mid;
 end=mid-1;
 }
}
return arr[indx];   
}
int main(){
int arr[]={1,2,3,5,6,7,8};
int element=4;
int n=(sizeof(arr)/sizeof(int));
cout<<"Floor of the element"<<find_floor(arr,n,element);
cout<<endl<<"Ceil of the element"<<find_ceil(arr,n,element);
return 0;
}
```
>Output:
>
>Floor of the element 3
>
>Ceil of the element 5

>Time Complexity O(log n)    , where n is the size of array

## Complexity
These are some of the programs that can be solve by Binary Search , Binary search is really important in competitve programming as it do the searching in ```O(log (n))``` time .

