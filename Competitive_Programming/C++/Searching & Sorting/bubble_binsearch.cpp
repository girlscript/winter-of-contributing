#include<iostream>
using namespace std;
int main()
{
    int n, temp, num, first, last, middle;
    cout<<"Enter number of elements: ";
    cin>>n;
    int arr[n];
    cout<<"Enter all elements one by one: ";
    //entering the array
    for(int i=0; i<n; i++)
        cin>>arr[i];
    //bubble sort
    for (int i=0; i<n; i++)
    {
    	for (int j=0; j<n; j++)
    	{
    		if (arr[i]<arr[j])
    		{
    			temp = arr[i];
    			arr[i] = arr[j];
    			arr[j] = temp;
			}
		}
	}
	//printing sorted array
	for(int i=0; i<n; i++)
        cout<<arr[i]<<"\t";
	//binary search
    cout<<"\nEnter Element to be Search: ";
    cin>>num;
    first = 0;
    last = n-1;
    middle = (first+last)/2;
    while(first <= last)
    {
        if(arr[middle]<num)
            first = middle+1;
        else if(arr[middle]==num)
        {
            cout<<"\nNumber "<<num<<" found at Position "<<middle+1;
            break;
        }
        else
            last = middle-1;
        middle = (first+last)/2;
    }
    if(first>last)
        cout<<"\nNumber "<<num<<" is not found in given Array";
    cout<<endl;
    return 0;
}
