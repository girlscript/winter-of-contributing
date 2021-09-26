
// Search In Infinite Sorted Array

#include<bits/stdc++.h>
using namespace std;

int BinarySearch(int arr[],int l,int h ,int key)
{        
// int l=0,h=n-1;
        while(l<=h)
        { int mid = l +(h-l)/2;
         
         if (arr[mid]==key)
         return mid;
         
         if(arr[mid]<=key)
        l=mid+1;
         
         else //(arr[mid]>key)
         h=mid-1;
        }
 return -1;
}

int FindPosition(int arr[],int key)
{ int l=0,h=1;
    int val=arr[0];
 
    while(key>val) 
    {         
        l=h;
      h=h*2;
            val = arr[h];
        }
 
  return BinarySearch(arr,l,h,key);
 }

int main() {
        int arr[] = {3,5,7,9,10,90,100,130,140,160,170};
        int n = sizeof(arr)/sizeof(arr[0]);
        int key = 140;
         cout << "Element found at index = " << FindPosition(arr,key);
    return 0;
}



