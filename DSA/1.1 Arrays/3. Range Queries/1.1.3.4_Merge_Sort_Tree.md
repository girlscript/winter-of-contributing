## Problem Statement
Explanation of Merge Sort Tree and its Implementation.


## Example
Given an array of N elements and you have to answer Q queries of the form L R K , To Count the numbers 
smaller than K in range L to R.
```
Input:-

Length of array = 10
Number of queries = 2
arr[ ] = {1 4 3 5 6 4 3 2 4 1}
Query = {3 7 4} 
	   {6 10 6}
```
```
Output

2
5
```

## Explanation
The given array is:-
1    4    3    5    6    4    3    2    4    1


The first query  {3   7   4}  says we have to find the number of elements smaller that 4 between the 3rd and the 7th element (inclusive) of the array.

1    4    3    5    6    4    3    2    4    1
     —Elements smaller than 4 are 3 (3rd element) and 3 (7th element) so answer is 2.



The second query  {6   10   6}  says we have to find the number of elements smaller that 6 between the 6th and the 10th element (inclusive) of the array.

1    4    3    5    6    4    3    2    4    1
	—Elements smaller than 6 are all the elements from the 6th element to the 10th element i.e. last element so the answer is 5



## Algorithm

1. Declare two arrays one of integer type and one of vector<int> type (integer for user input array vector for merge sort tree)

2. Declare following variables:-
	
    —> n length of the input array
	
    —> q number of queries
	
    —> r starting index of query
	
    —> l ending index of query 
	
    —> k number with which comparison is to be done

3. Build a **segment tree** but replace every node with a vector of integer and divide the right half and left only on the basis if starting index of the array is not equal to the end index.

4. Input in the tree should be done in a sorted manner for the respective half.

5. After tree is completely build take input for queries.

6. In queries function check few conditions
	
	—> if the range of query lies outside the range of vector return 0
	
	-> if the range of query lies completely within the range of vector binary search is done in order to find the number of elements smaller than k and the 	    result is returned.
	
	-> if the range of query is overlapping with two ranges of vector then searching is done seperately in the left and the right subtree then the result is 	     added and returned.

7. Finally the output from the query function is displayed.


## Code

```C++

#include<bits/stdc++.h>
using namespace std;

typedef vector<int>                vi;
#define inp1(a, n)                 for(int Ele=1; Ele<=(n); Ele++)cin>>a[Ele]
#define pb push_back


#define max_N 1000
vi st[4 * max_N];
int arr[max_N];

/*Constructing a segment tree with vector at each node*/
void buildTree(int si, int ss, int se) {
	if (ss == se) {
		st[si].pb(arr[ss]);
		return;
	}

	int mid = (ss + se) / 2;
	
	/* building left subtree */
	buildTree(2 * si, ss, mid);
	
	/* building right subtree */
	buildTree(2 * is + 1, mid + 1, se);

	int i = 0, j = 0;

	/* merging left and right child in sorted order */
	while (i < st[2 * si].size() && j < st[2 * si + 1].size()) {
		if (st[2 * si][i] <= st[2 * si + 1][j]) {
			st[si].pb(st[2 * si][i]), i++;
		}
		else {
			st[si].pb(st[2 * si + 1][j]), j++;
		}
	}

	/*Input the remaining elements*/
	while (i < st[2 * si].size())
		st[si].pb(st[2 * si][i]), i++;


	while (j < st[2 * si + 1].size())
		st[si].pb(st[2 * si + 1][j]), j++;

}

int query(int si, int ss, int se, int qs, int qe, int k) {

	/*if range of query is out of range of the vector*/
	if (ss > qe || se < qs)
		return 0;
	/*if range of query is completely with the range of the vector*/
	if (ss >= qs && se <= qe) {
		
		/*binary search upper_bound() returns the position of the first element greater than the target element (in this case k) */
		/*binary search to count the number smaller than k*/
		int res = upper_bound(st[si].begin(), st[si].end(), k - 1) - st[si].begin();
		return res;
	}
	
	/*if overlapping of range of query occurs then*/
	int mid = (ss + se) / 2;

	/*Searching in the right subtree*/
	int l = query(2 * si, ss, mid, qs, qe, k);

	/*Searching in the left subtree*/
	int r = query(2 * si + 1, mid + 1, se, qs, qe, k);
	
	/*Adding the total number of counts*/
	return l + r;

}


int main() {
	int n, q, l, r, k;
	
	/*Input length of array and number of queries*/
	cin >> n >> q;
	
	/*Input Array*/
	inp1(arr, n);

	/*Construct tree*/
	buildTree(1, 1, n);
	while (q--) {
		/*Input Queries*/
		cin >> l >> r >> k;
		
		/*Execution of queries and displaying Output*/
		cout << query(1, 1, n, l, r, k) << endl;
	}
	return 0;
}
```


## Output
```
2
5
```
