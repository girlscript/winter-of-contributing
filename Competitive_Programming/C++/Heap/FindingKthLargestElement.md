# Heap in Competitive Programming

## Kth Largest Element

Find the kth largest element means that the output will be the kth largest element in the whole array.
<br>
eg : 8 3 5 9 1 2 5 6
<br>
if k = 2
<br>
output: 8 

explanation: 

 the second largest in the array is 8 ,
 sorted array: 1 2 3 5 5 6 8 9

similarily, 
 array[]= 8 3 5 9 1 2 5 6
 if k=5

 output: 3


The Brute Force method to find the kth largest element is to first sort and then find the k-1 index element. This will take O(n log n) time. 

```c++
//c++
#include <bits/stdc++.h>
using namespace std;
int main(){
vector<int> v={6,5,2,7,1,8,4,9,10,11};
int k=3;
sort(v.begin(),v.end());
cout<<"Kth largest element "<<v[n-k];
return 0;
}
```
>OUTPUT:
>
>Kth largest element 9
>

>
>*Time Complexity*
>
>*O(n log n)*
where n is the size of the array/vector and sorting takes O(n log n).
Optimized way to solve this is to use min-heap, and this will take O(n log K) time.

- *The property of the min-heap structure is that the minimum element remains at the top*

 - so since, we have to find only the kth largest element so after maintaining the heap of k size
 
  - we can just pop the next top element after we have maintain the k size heap, as the top will always be smaller than the elements below it.

- since we iterate to each element in the array , so it takes O(n) time and for heap function it takes O(log k) , 
so the total complexity becomes O(n log k).

The answer will be at the top of the min heap.

```c++
//c++
#include <bits/stdc++.h>
using namespace std;
int findKthLargest(vector<int>nums, int k) {
priority_queue<int, vector<int>, greater<int>> minh;
for (auto i = nums.begin(); i != nums.end(); i++){
 minh.push(*i);
 if(minh.size()>k){
        minh.pop();
    }
}
return minh.top();
}
int main(){
vector<int> v={6,5,2,7,1,8,4,9,10,11};
int k=3;
int ele;
ele=findKthLargest(v,k);
cout<<"Kth largest element "<<ele;
return 0;
}
```
>OUTPUT:
>
>Kth largest element 9
>

>
>*Time Complexity*
>
>*O(n log k)*

## Top K Frequent Elements

- In this the brute force approach, first form a map to keep the record of the frequency of each element. 
- then store the map values to the vector in the form of pair that is vector< pair <int,int>> .
-  sort the vector in decreasing order of frequency.
-now the first k elements of the sorted array , are the required result.

```c++
//c++
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
bool compare(pi p1,pi p2)
{
	if (p1.second==p2.second)
		return p1.first > p2.first;
	return p1.second > p2.second;
}
vector<int> topKFrequent(vector<int> nums, int k) {
    int n= nums.size();
    vector<int> r;
 	unordered_map<int, int> m;
	for (int i = 0;i < n;i++)
		m[arr[i]]++;
	vector<pi> tmp(m.begin(), m.end());
	sort(tmp.begin(), tmp.end(),compare);
	for (int i=0; i<k;i++){
		 r.push_back(tmp[i].first);
        
    }
}
int main(){
vector<int> v={1,1,1,2,2,2,3};
int k=2;
vector<int> r;
r=topKFrequent(v,k);
for(auto e:r){
    cout<<e<<" ";
}
return 0;
}
```
>OUTPUT:
>
> 1 2
>

>
>*Time Complexity*
>
>*O(d log d)*

 where d is the count of distinct elements in the vector/array.


The Optimize approach is to use heap,
-  after forming a map, we can insert the pair of the frequency and the element in the min heap.
- the element at the bottom will be the answer of the top k elements. 
- by this method it will take O(k log d) complexity.
where d is the count of distinct elements in the vector/array.
```c++
//c++
#include <bits/stdc++.h>
using namespace std;
typedef pair<int, int> pi;
vector<int> topKFrequent(vector<int> nums, int k) {
    priority_queue<pi, vector<pi>, greater<pi>> pr;
    unordered_map<int,int> mp;
    for(auto nm : nums){
         mp[nm]++;
    }
    vector<int> r;
    for(auto m: mp){
        pr.push({m.second,m.first});
        if(pr.size()>k)
            pr.pop();
    }
    while(pr.size()>0){
        r.push_back(pr.top().second);
        pr.pop();
    }
    return r;
}
int main(){
vector<int> v={1,1,1,2,2,2,3};
int k=2;
vector<int> r;
r=topKFrequent(v,k);
for(auto e:r){
    cout<<e<<" ";
}
return 0;
}
```
>OUTPUT:
>
> 1 2
>

>
>*Time Complexity*
>
>*O(k log d)*
