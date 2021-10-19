# Lower Bound in C++
**lower_bound()** is a method which works for vectors, maps, and sets in C++. 

In this documentation, we will understand it by taking example of lower_bound() in a vector. <br>
The method returns an iterator. It points to the index of the first such value if value is present in the vector. If the value is not present in the vector, it will point to the index of the next smallest value just greater than the key value.

The lower_bound() method works only if the elements are in sorted order.

**Syntax:**
```
// declaration
vector<datatype> v;
vector<datatype> :: iterator lower;

// calling
lower = lower_bound(v.begin(), v.end(), value);

// accessing (printing)
cout << "message" 
     << (lower - v.begin());
			// OR
cout << "message" 
     << (lower - v.end());	
```

Let's see an example program in C++ for better understanding.

**Code:**
```
// Program for using lower_bound() function

#include<iostream>
#include<vector>
using namespace std;

int main()
{
	// input for vector elements
	cout<<"Enter number of elements in vector: ";
	int n; cin>>n;
	vector<int> v;
	cout<<"Enter elements of vector: ";
	for(int i=0; i<n; i++)
	{
		int num; cin>>num;
		v.push_back(num);
	}
	
	// input for lower bound elements
	cout<<"Enter number of elements whose lower_bound has to be searched: ";
	int q; cin>>q;
	int qrr[q];
	cout<<"Enter elements whose lower_bound has to be searched: ";
	for(int j=0; j<q; j++)
		cin>>qrr[j];
	
	// finding lower bound
	vector<int>::iterator lower;
	for(int x=0; x<q; x++)
	{
		int flag=0, low=0, high=n, mid;
		while(low<=high)
		{
			mid = (low+high)/2;
			if(qrr[x]==v[mid])
			{
				flag=1;
				break;
			}
			else if(qrr[x]<v[mid])
				high=mid-1;	
			else
				low=mid+1;
		}

		if(flag==1)
		{
			lower = lower_bound(v.begin(), v.end(), qrr[x]);
			cout <<"\n\n"<<qrr[x]<<" is present in vector. \nIt's lower_bound is at index: " 
			<< (lower - v.begin()) << endl;
		}
		else
		{
			lower = lower_bound(v.begin(), v.end(), qrr[x]);
			cout <<"\n\n"<<qrr[x]<<" is not present in vector. \nIt's lower_bound is at index: "
			<< (lower - v.begin()) << endl;
		}
	} // for-loop ends
	
	return 0;
}
```

**Output:**

![output](https://user-images.githubusercontent.com/55057608/136691034-d8fd2918-0020-4464-bfee-b40ad55b9534.PNG)

