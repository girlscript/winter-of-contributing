//code_for_permutation
#include<bits/stdc++.h>//by including this header file we dont need to add the seperate header file
using namespace std;
int main()
{ cout<<"enter the size af array"<<endl;
int n;
cin>>n;
 int arr[n];
 cout<<"enter the elements in the array"<<endl;
 for(int i = 0;i<n;i++)
 {
     cin>>arr[i];
 }cout<<"now we will discuss the all the possible permutations"<<endl;
 do{
     for(int i = 0;i<n;i++)
     {
         cout<<arr[i]<<"\t";
     }cout<<endl;
 }while (next_permutation(arr,arr+n));//it is the main function that is used to find the next possible permutation
return 0 ;
}