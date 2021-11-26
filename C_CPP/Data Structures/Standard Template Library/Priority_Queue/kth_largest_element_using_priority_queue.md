## Find the kth largest element of a vector
---
Suppose we are asked to print the kth largest element with the following constraints:
* without sorting
* space complexity not more than O(k)

then, in this situation, we can use a priority queue

### Algorithm

* step 1: Create a min priority queue.
* step 2: Check if the priority queue has less than k elements.
    - if yes then insert the incoming element directly.
    - else, if the top element of the priority queue is less than the incoming element then pop the top element and insert the incoming element 
    - else continue next iteration.
* step 3: Repeat step 2.

### Implementation in C++

```C++
#include<iostream>
#include<vector>
#include<queue>

using namespace std;

int find_kth_largest(vector<int>&arr,int k,int n){
	priority_queue<int,vector<int>,greater<int>>pq;//create a min priority queue
	for(int i=0;i<n;i++){
		if(pq.size()<k)//if size of priority queue is less than k insert arr[i] directly
			pq.push(arr[i]);
		else if(pq.top()<arr[i]){//else insert only if top element of priority queue is less than arr[i]
			pq.pop();//first pop the top element of priority queue and then insert arr[i]
			pq.push(arr[i]);
		}
	}
	return pq.top();//the top element of priority queue is the kth largest element
}

int main(){
	int n,k;
	cout<<"Enter the limit: ";
	cin>>n;
	vector<int>vec;
	cout<<"Enter the elements: ";
	for(int i=0;i<n;i++){
		int num;
		cin>>num;
		vec.push_back(num);
	}
	cout<<"Enter the k value: ";
	cin>>k;
	if(k>=1 && k<=n)
		cout<<"The "<<k<<"th largest element is: "<<find_kth_largest(vec,k,n);
	else
		cout<<"The value of k is not valid";
	return 0;
}
```
### Output
```
Enter the limit: 7
Enter the elements: 29 46 97 36 4 90 76
Enter the k value: 5
The 5th largest element is: 36
```

Time complexity - O(nlogk) 

Space complexity - O(k)