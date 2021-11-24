# Josephus Problem

## Problem Description

This task was set by Flavius Josephus in the 1st century.

A group of 'N' people stand in a circle numbered consecutively from 1 to N waiting to be executed. The counting begins at some point in the circle and proceeds in a fixed direction. Every Kth person is executed and the circle keeps getting smaller until only 1 person remains who is granted freedom.

**Given N and K, the task is to choose the safe place in initial circle.**

## Example

Consider N = 5 and K = 2.

If we start from 1, first the person at position 2 is executed. Then then person at position 4 is killed, then person at position 1 is killed. Finally, the person at position 5 is executed.

Hence, the person at position *3* survives.

Given Array: 1 2 3 4 5

Step 1: 1 ~~2~~ 3 4 5

Step 2: 1 ~~2~~ 3 ~~4~~ 5

Step 3: ~~1~~ ~~2~~ 3 ~~4~~ 5

Step 4: ~~1~~ ~~2~~ **3** ~~4~~ ~~5~~

## Approach

A simple **brute force approach** would be to mark all elements from 1 to N. Run a loop and cancel out the Kth element each time until only 1 element is left.

To obtain the ordered list of men who are consecutively slaughtered, InversePermutation can be applied to the output of the function `Josephus(int, int)`. A recursive or iterative approach is adopted.

1. Josephus(N, K) returns the position with N persons.

2. The starting position each time would be K % N + 1 (i.e. the number next to the previously executed number).

3. Hence suitable adjustment is made and the final formula comes out to be `(Josephus(N - 1, K) + K - 1) % N + 1` (1 indexed).

4. The function is recursed until N is 1.


## Code

1.  Recursive 

```C++
#include <bits/stdc++.h>
using namespace std;

int josephus(int n, int k){
	if (n == 1)
		return 1;
	else
		return (josephus(n - 1, k) + k - 1) % n + 1;   // 1 indexing
}

int main(){
	int n = 14;
	int k = 2;
	cout << "The chosen place is " << josephus(n, k);
	return 0;
}

```

2. Iterative

```C++
#include <bits/stdc++.h>
using namespace std;

int josephus(int n, int k) {
    int res = 0;
    for (int i = 1; i <= n; ++i)
      res = (res + k) % i;
    return res + 1;
}

int main(){
	int n = 14;
	int k = 2;
	cout << "The chosen place is " << josephus(n, k);
	return 0;
}

```
You can read about the origin and history of Josephus problem [here](https://mathworld.wolfram.com/JosephusProblem.htmlhttps://www.gleammath.com/post/solve-this-deadly-puzzle-investigating-the-josephus-problem).

## Complexity Analysis

* Time Complexity: O(N)

* Auxiliary Space: O(N)

The complexity can be further simplified using binary search approach. In this case the time complexity will be *O(KlogN)*, for K << N.

### Optimised Code Snippet

```C++
int josephus(int n, int k) {
    if (n == 1)
        return 0;
    if (k == 1)
        return n-1;
    if (k > n)
        return (josephus(n-1, k) + k) % n;   // 0 indexing
    int cnt = n / k;
    int res = josephus(n - cnt, k);
    res -= n % k;
    if (res < 0)
        res += n;
    else
        res += res / (k - 1);
    return res;
}
```
**Explanation:**  
As K is significantly smaller than N, we can delete multiple numbers in ⌊n/k⌋ in one run of the loop.  
Each time we will have (n - ⌊n/k⌋) numbers left and we will start with (⌊n/k⌋ * k).

[Simulation of the Problem](https://www.geogebra.org/m/ExvvrBbR)

## References

* [CP-Algorithms](https://cp-algorithms.com/others/josephus_problem.html)

* [GFG](https://www.geeksforgeeks.org/josephus-problem-set-1-a-on-solution/#)
