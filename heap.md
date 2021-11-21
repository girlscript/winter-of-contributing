# Heap Application in Competitive Programming

## Kth Largest Element

The Brute Force method to find the kth largest element is to first sort and then find the k-1 index element. This will take O(n log n) time. 
Optimized way to solve this is to use min-heap, and this will take O(n log K) time.

The property of the min-heap structure is that the minimum element remains at the top as we have to find only the kth largest element so after maintaining the heap of k size we can just pop the next top element, as it will be smaller than the kth element. 

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

In this the brute force approach, first form a map to keep the record of the frequency of each element. then Iterate to each element to check which element is are coming frequently, return top k element this will take almost O(n^2) time. 

The Optimize approach is to use heap, after forming a map, we can insert the pair of the frequency and the element in the min heap and the element at the bottom will be the answer of the top k elements. by this method it will take O(n log k) complexity.
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
>*O(n log k)*
