# HIDDEN NUMBER

## PROBLEM
Naman and Raman play a game of numbers. Raman gives Naman two number N and K. There is a number g(g < N) given to him which is hidden to him. The challenge is to find g but he cannot move in linear way. Instead he can move in a modular fashion. So first, he starts from indices i(0 <= i < N) and selects all indices i in increasing order(upto N-1) such that i mod K = 0 and tells number i to Raman, then all indices i(starting form i = 0) in increasing order(upto N-1) such that i mod K = 1, and tells number i to Raman again, and so on. Given N, the index g that will work, and K, find after how many turns will Naman be able to guess the correct hidden number(g). The first and only line of the test case contains three space-separated integers N(1 <= N <= 10^9), g(0 <= g < N), and K(1 <= K <= 10^9). Output For each test case, print a single line containing one integer — after how many turns will Naman be able to guess the correct hidden number.

## TEST CASES

### Input:
```
11 10 3
```
### Output:
```
8
```

### Input:
```
10 4 5
```
### Output:
```
9
```

### Input:
```
5 2 3
```
### Output:
```
5
```
### CODE 💻
```cpp

#include <bits/stdc++.h>
using namespace std;
int main()
{
	long long int N,K,g,a,b,s,j;
    //takes input
	cin>>N>>g>>K;          
    //for storing final answer
	s=0;        
    //stores remainder
	a=g%K;         
    //stores last multiple of K within range of 0 to (N-1)
	b=(N/K)*K;         
    //number of times each remainder less than a would be repeating in range 0 to b
	j=b/K;         
    //total numbers with remainder less than a
	s=j*a;         
    //answer has the number upto b and not beyond it
	s=s+g/K;         
    //adding numbers from (b+1) to (N-1) which heve remainder less than a
	s=s+min(a,N%K);         
    //printing final answer after incrementing 1, so we also include g
	cout<<s+1<<endl;
	return 0;
}
```
## EDITORIAL

### PROBLEM:

We are given N, K and g. First, Naman tries all indices from 0 to N-1 one by one, such that i mod K = 0 in increasing order, then all indices with i mod K = 1 and so on.
We have to find number of turns after which he reaches a given index g.

### EXPLANATION:

1. We group the indices having same value of i mod K, we get K different groups. Now, these groups are processed one by one.
2. We can get the group in which g is present by computing g mod K.
3. First, N mod K groups have (N/K)+1 elements, and rest (K-N) mod K groups have N/K elements.
4. We have to count all elements in first g mod K groups ,and then we have to count the number of indices in the group same as that of g, which will be tested before g.

## TIME COMPLEXITY: O(N)
