# A - Frog 1
## Problem Statement

There are **N** stones, numbered *1,2,…,N*. For each **i** &nbsp;*(1≤i≤N)*, the height of Stone i is h<sub>i</sub>​.

There is a frog who is initially on Stone 1. He will repeat the following action some number of times to reach Stone N:

- If the frog is currently on Stone i, jump to Stone i+1 or Stone i+2. Here, a **cost of ∣hi​−hj​∣** is incurred, where j is the stone to land on.

Find the minimum possible total cost incurred before the frog reaches Stone N.

#### <u>Constraints</u>
1. All input values are integers.
2. 2≤N≤105
3. 1≤hi​≤104

---

## Hint
Simply write a recursive solution to the problem and memoize it. Take care that the frog does not go over the last stone.

---

## Explanation

We have to find the minimum cost in a sequence of moves where, in one move, the frog can go either 1 step forward, or 2 steps forward. Let us declare variables **onejump** and **twojump** to calculate the costs.

The minimum cost for jumping 1 stone in the i<sup>th</sup> jump: 

``` Java
onejump = Math.abs(arr[i+1]-arr[i]) + foo(arr, i+1);
```

The minimum cost for jumping 2 stones in the i<sup>th</sup> jump: 

``` Java
twojump = Math.abs(arr[i+2]-arr[i]) + foo(arr, i+2);
```

Finally, we find the minimum of the two jumps and return it.

Note: If, in a particular sequence of jumps, the frog crosses over the N stones, then that sequence is discarded by making the cost maximum.

``` Java
if(i>=arr.length)
    return Integer.MAX_VALUE;
```