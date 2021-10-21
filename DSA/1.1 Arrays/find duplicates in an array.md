# Find duplicates in an array in O(n)

Given an array a[] of size N which contains elements from 0 to N-1, you need to find all the elements occurring more than once in the given array.
print a list of elements that occur more than once in the given array in sorted manner. If no such element is found return -1. 

### example 1
```
Input:
N = 4
a[] = {0,3,1,2}
Output: -1
Explanation: N=4 and all elements from 0
to (N-1 = 3) are present in the given
array. Therefore output is -1.
```

### example 2
```
Input:
N = 5
a[] = {2,3,1,2,3}
Output: 2 3 
Explanation: 2 and 3 occur more than once
in the given array.
```

## solution 
```
#include <bits/stdc++.h>
using namespace std;

class Solution{
  public:
    vector<int> duplicates(int arr[], int n) {
        // code here
        vector<int> v(n,0);
        for(int i=0; i<n; i++){
            v[arr[i]]++;
        }
        vector<int> ans;
        for(int i=n-1; i>=0; i--){
            if(v[i]>=2){
                ans.push_back(i);
            }
            v.pop_back();
        }
        reverse(ans.begin(), ans.end());
        
        if(ans.size()==0){
            ans.push_back(-1);
        }
        return ans;
        
    }
};
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}
  
  ```
