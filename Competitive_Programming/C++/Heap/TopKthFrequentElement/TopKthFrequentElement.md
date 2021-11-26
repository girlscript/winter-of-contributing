# Top K Frequent Elements

## Brute Force Approach
- In this the brute force approach, first form a map to keep the record of the frequency of each element. 
- then store the map values to the vector in the form of pair that is vector< pair <int,int>> .
-  sort the vector in decreasing order of frequency.
-now the first k elements of the sorted array , are the required result.

```c++
     //c++
    #include <bits/stdc++.h>
    
    using namespace std;
    typedef pair < int, int > pi;
    
    bool compare(pi p1, pi p2) {
      if (p1.second == p2.second)
        return p1.first > p2.first;
      return p1.second > p2.second;
    }
    
    vector < int > topKFrequent(vector < int > nums, int k) {
      int n = nums.size();
      vector < int > r;
      unordered_map < int, int > m;
      for (int i = 0; i < n; i++)
        m[arr[i]]++;
      vector < pi > tmp(m.begin(), m.end());
      sort(tmp.begin(), tmp.end(), compare);
      for (int i = 0; i < k; i++) {
        r.push_back(tmp[i].first);
    
      }
    }
    
    int main() {
      vector < int > v = { 1, 1, 1, 2, 2, 2, 3 };
      int k = 2;
      vector < int > r;
      r = topKFrequent(v, k);
      for (auto e: r) {
        cout << e << " ";
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
In the brute force approach we are maintaining a map with its frequency count .
and then we are iterating to each element of the map and 
then create a vector that has **all the elements** and then from that map,
we are printing starting k elements.

by creating a vector with all the elements in their decreasing frequency is the extra work done in brute force.

So heap can be used to maintain only k size for maintaining frequency and element , this will save time as it is not doing extra work.

## The Optimize approach is to use heap,

-  after forming a map, we can insert the pair of the frequency and the element in the min heap.
- the element at the bottom will be the answer of the top k elements. 
- by this method it will take O(k log d) complexity.
where d is the count of distinct elements in the vector/array.
```c++
    //c++
    #include <bits/stdc++.h>
    
    using namespace std;
    typedef pair < int, int > pi;
    
    vector < int > topKFrequent(vector < int > nums, int k) {
      priority_queue < pi, vector < pi > , greater < pi >> pr;
      unordered_map < int, int > mp;
      for (auto nm: nums) {
        mp[nm]++;
      }
      vector < int > r;
      for (auto m: mp) {
        pr.push({
          m.second,
          m.first
        });
        if (pr.size() > k)
          pr.pop();
      }
      while (pr.size() > 0) {
        r.push_back(pr.top().second);
        pr.pop();
      }
      return r;
    }
    
    int main() {
      vector < int > v = { 1, 1, 1, 2, 2, 2, 3};
      int k = 2;
      vector < int > r;
      r = topKFrequent(v, k);
      for (auto e: r) {
        cout << e << " ";
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
