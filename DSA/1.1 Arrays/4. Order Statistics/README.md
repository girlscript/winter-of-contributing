## Finding the Kth smallest element in Unsorted arrays


Given an array and a number k where k is smaller than the size of the array, we need to find the k’th smallest element in the given array. It is given that all array elements are distinct.
There are multiple possible solutions for this problem:-
1.  Brute Force approach : Using sorting
2.  Using Min-Heap
3.  Using Max-Heap
4.  Quick select : Approach similar to quick sort
5.  Using Map STL

**Using Map STL**
A map based STL approach is although very much similar to the quickselect and counting sort algorithm but much easier to implement. We can use an ordered map and map each element with it’s frequency. And as we know that an ordered map would store the data in an sorted manner, we keep on adding the frequency of each element till it does not become greater than or equal to k so that we reach the k’th element from the start i.e. the k’th smallest element.

Eg –

Array=**{7,0,25,6,16,17,0}**

k=**3**
| No | Frequency |
|--|--|
| 0 | 2 |
| 6 | 1 |
|7 | 1 |
|16 | 1 |
|17 |1 |
| 25 | 1 |
 
```
#include<bits/stdc++.h>
using namespace std;
int Kth_smallest(map<int,int>m,int k)
{
int freq = 0;
for(auto it = m.begin(); it != m.end(); it++) {
freq += (it->second);// adding the frequencies of`
// each element`
if(freq >= k)// if at any point frequency becomes greater than or equal to k then return that element
{
return it->first;
}
}
return -1;// returning -1 if k>size of the array which is an impossible scenario
}

int main()
{
int n = 5;
int k = 2;
vector<int> arr = { 12, 3, 5, 7, 19 };
map<int,int> m;
for(int i = 0; i < n; i++) {
m[arr[i]] += 1;// mapping every element with it's`
// frequency
}
intans = Kth_smallest(m, k);
cout <<"The "<< k <<"rd smallest element is "<< ans
<< endl;
return 0;
}
```

## Finding the Kth Largest element in Unsorted arrays

Now in order to get the k’th largest element, we need to add the frequencies till it becomes **greater than or equal to k.** It is clear from the above example that the frequency of 0 + frequency of 6 will become equal to k so the third smallest number in the array will be 6.
