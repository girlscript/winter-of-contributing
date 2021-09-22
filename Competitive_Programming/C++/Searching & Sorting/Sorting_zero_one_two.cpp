//Sort 0's, 1's and 2's in a given array
#include <bits/stdc++.h>
using namespace std;

void sort(int a[],int arr_size){
	int low=0,mid=0,high=arr_size-1;	//initially low and mid point at 0th position and high point at end of the array

	while(mid<=high){
		switch(a[mid]){
			case 0:				//if the value is 0
					swap(a[low],a[mid]);
					mid++;low++;		//incrementing
					break;
			case 1:				// if the vallue is 1
				mid++;
				break;
			case 2:				// if the value is 2
					swap(a[mid],a[high]);
					high--;		//decrement
					break;
		}
	}
	for(int i=0;i<arr_size;i++)
	cout<<a[i]<<" ";				//output
}
int main()
{
	int arr_size;
	cin>>arr_size;			
	int a[arr_size];
	for(int i=0;i<arr_size;i++){
		cin>>a[i];						//input
	}		
								
	sort(a,arr_size);					//calling function				
}