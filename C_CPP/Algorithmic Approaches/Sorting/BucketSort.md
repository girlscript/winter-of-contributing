# Bucket Sort Algorithm

## Description:

- Bucket sort is a sorting algorithm that works by distributing the elements of an array into a number of buckets.
- It is a distribution sort, and is a cousin of radix sort in the most to least significant digit flavour.

## Complexity:

Time Complexity: O(n + k) for best case, O(n) for average case and O (n^2) for worst case.

Space Complexity: O(nk) for worst case

## Implementation:

- Create an array of empty buckets.
- For each element in the input array, do the following:
  - Find the bucket where the element belongs.
  - Insert the element into the bucket.
  - Sort each bucket using the same algorithm.
  - Concatenate all the sorted buckets into a single list.

## C++ Program for Bucket Sort:

```cpp
#include <iostream>
#include <vector>
#include <algorithm>

    using namespace std;

        void bucketSort(vector<int>& arr) {
            int n = arr.size();
            vector<int> bucket[n];
            for (int i = 0; i < n; i++) {  //put elements into different buckets
                int bi = arr[i] / n;
                bucket[bi].push_back(arr[i]);
            }
            for (int i = 0; i < n; i++) {
                sort(bucket[i].begin(), bucket[i].end());  //sort individual vectors
            }
            int index = 0;
            for (int i = 0; i < n; i++) {
                for (int j = 0; j < bucket[i].size(); j++) {
                    arr[index++] = bucket[i][j];
                }
            }
        }

        int main() {
            vector<int> arr = {12, 11, 13, 5, 6, 7}; //create a vector of integers
            for (int i = 0; i < arr.size(); i++)
                cout << arr[i] << " "; //print unsorted array
                cout<<endl;
            bucketSort(arr); //call bucket sort function
            for (int i = 0; i < arr.size(); i++)
                cout << arr[i] << " "; //print sorted array
            return 0;
        }
```

Output for this program:

```cpp
12 11 13 5 6 7
5 6 7 11 12 13
```

