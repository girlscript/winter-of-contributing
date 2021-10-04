# B - Frog 2
## Problem Statement

There are **N** stones, numbered *1,2,…,N*. For each **i** &nbsp;*(1≤i≤N)*, the height of Stone i is h<sub>i</sub>​.

There is a frog who is initially on Stone 1. He will repeat the following action some number of times to reach Stone N:

- If the frog is currently on Stone i, jump to **one of the following: Stone i+1,i+2,…,i+K**. Here, a **cost of ∣hi​−hj​∣** is incurred, where j is the stone to land on.

Find the minimum possible total cost incurred before the frog reaches Stone N.

#### <u>Constraints</u>
1. All input values are integers.
2. 2≤N≤10<sup>5</sup>
3. 1≤K≤100
4. 1≤hi​≤10<sup>4</sup>

---

## Hint
Similar to **Task A - Frog 1** we have to go over all K possiblities at the i<sup>th</sup> rock and pick the one with the minimum cost among them. Make sure *i+k* does not exceed *N*. 

---

## Explanation

To find the minimum cost among all K possibillities, we need a for loop:
```Java
for(int j = i+1; j <= i+k ; j++)
```
We will continue the for loop untill we cross N, and keep track of the minimum.
```Java
if(j>=arr.length)
    break;
min = Math.min(min, Math.abs(arr[j]-arr[i])+foo(arr,j,k));
```
Finally we return the minimum.