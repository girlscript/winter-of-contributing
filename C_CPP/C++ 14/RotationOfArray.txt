                                                       < CLOCKWISE ARRAY ROTATION > 
                                            --------------------------------------------------
There are many approaches you will find in internet , But I will explain here the easiest way to rotate (Clockwise) the Array with minimum time complexity and I will
use only reversning technique to do this.
lets take an Array ,   Arr[]={10, 20, 30, 40, 50};
Given an number K, that means we have to shift K number of elements from right side or from end side of array to the starting part of Array. (For Clockwise Rotation)

Lets suppose , K=2  
so, after rotation array will be like Arr[]= {40, 50, 10, 20 , 30}

For, k=0 ,  Arr[]= {10,20,30,40,50}
For, k=1 ,  Arr[]= {50,10,20,30,40}
For, k=2 ,  Arr[]= {40,50,10,20,30}
For, k=3 ,  Arr[]= {30,40,50,10,20}
For, k=4 ,  Arr[]= {20,30,40,50,10}
For, k=5 ,  Arr[]= {10,20,30,40,50}
For, k=6 ,  Arr[]= {50,10,20,30,40}
For, k=7 ,  Arr[]= {40,50,10,20,30}
..................... So on 
Array Size, N=5
If you kindly observe in Above chart that result for K and K+N are same .
So, if a Large K value is given 1st do k=k%N or if k<0 do 1st k=k+n


** APPROACH  TO SOLVE :
--------------------------
 Arr[]= {10  ,  20  , 30  , 40  , 50}

 Lets Take , K=2

 STEP 1 >   Reverse The complete Array

 Arr[]= {50  ,  40  , 30  , 20  , 10}
                ^
                |
                K=2

 STEP 2 >  Reverse The 1st K elements 
  
  Arr[]= {40  ,  50  , 30  , 20  , 10}
         <---------->
         1st K elements
         Reversed

STEP 3 >  Reverse the rest Array elements from Index K to N-1

Arr[]= {40  ,  50  , 10  , 20  , 30}
                    <-------------->
                    k -> N-1 Reversed
So the Rotation is Completed.
Final Array ,  Arr[]= {40  ,  50  , 10  , 20  , 30}
---------------------------------------------------------------------------------------------------------------------------------------------------------------



** CODE(CPP) >>
---------------


#include <bits/stdc++.h>
using namespace std;

void reverse(int a[], int left, int right){   // Reverse Function
    while(left<right){
        int temp=a[left];  //3rd variable to swap
        a[left]=a[right];
        a[right]=temp;
        left++;
        right--;
    }
}

void rotate(int arr[], int n, int k) //Rotate Function to do the operation
{
      
        k=k%n;  // For Large Value of K
         if(k<0){
              k+=n; // For negative Value of K
            }

    reverse(arr, 0, n-1); // Reverse The complete Array
    reverse(arr, 0, k-1); // Reverse The 1st K elements 
    reverse(arr, k, n-1); //  Reverse the rest Array elements from Index K to N-1
}

int main(){
    int N; // size of array = N
    cin>>N;
    int Arr[N];
    for(int i=0;i<N;i++) {cin>>Arr[i];}  //Array input
    int k ;
    cin>>k; 
    
    rotate(Arr, N, k); //Calling Rotate function

    for(int i=0;i<N;i++){
        cout<<Arr[i]<<" ";  //Printing Array elements
    }
    
}












