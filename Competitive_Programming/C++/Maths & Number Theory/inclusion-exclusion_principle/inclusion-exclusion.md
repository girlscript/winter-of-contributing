
<h1><b>INCLUSION-EXCLUSION PRINCIPLE</b></h1>


The principle of inclusion-exclusion says that in order to count only unique ways of doing a task, we must add the number of 
ways to do it in one way and the number of ways to do it in another and then subtract the number of ways to do the task that 
are common to both sets of ways. 

The principle of inclusion-exclusion is also known as the ***subtraction principle***.

🔵 To compute the size of a union of multiple sets, it is necessary to sum the sizes of these sets separately, and then subtract 
  the sizes of all pairwise intersections of the sets, then add back the size of the intersections of triples of the sets, 
  subtract the size of quadruples of the sets, and so on, up to the intersection of all sets.

🔵 <b>In brief, Union of events = ∑ (Odd-size events - Even-size events).</b>

🔵 Use Venn - Diagram to solve these kinds of problems.

<br/>
<hr>


## Example:
~~~~~~~ 

Given N and R, compute the number of integers in the interval [ 1,R] that are relatively prime to N. 
Formally, you need to calculate S,

    R
 S= ∑  (gcd(i,N) = = 1? 1 : 0)
   i=1
Constraints : 

1<=N<=1e6
1<=R<=1e18
Time Limit : 1 second

~~~~~~~
## Solution:


### Observations : 

- We can construct sieve in <b>O(N*(log(log N)))</b> time complexity i.e. 1e6 x loglog1e6 = 778152. We can do 2*1e8
computations in 1 second. Thus, we can use sieve to find the prime factors of N.

- N<= 1e6.
How many distinct prime can N have ? Ans = 7</br>
2 * 3 * 5 * 7 * 11 * 13 * 17 * 19 = 9699690 ( > 1e6)

- We need ***O(N * 2^N)*** to generate all subsets.
Thus, we will do at max 7 * 2^7 = 896 computations.Conclusion, we can apply inclusion - exclusion here.

Overall time complexity of the code will be <b>O(N*(log(log N)))</b>

<br/>
<hr>

### Implementation:
~~~~~~~~~~~~~~

#include <bits/stdc++.h>
using namespace std;
 
const int maxN = 1e6 + 2;

// The vector is_prime stores true if a number is prime otherwise false. 
vector<bool> is_prime(maxN);
 

//sieve function to check if a number is prime or not.

void sieve()
{
   is_prime = vector<bool>(maxN, true);
 
   is_prime[0] = is_prime[1] = false;
 
   for(int i = 2; i * i < maxN; ++i) {
      if(is_prime[i]) {
         for(int j = i * i; j < maxN; j+=i) {
            is_prime[j] = false;
         }
      }
   }
}
 
int main()
{
   sieve();
 
   int N;
   long long R;
 
   cin >> N >> R;
 
   //The vector pf stores the prime factors of N
   vector<int> pf; 
 
 
  //Pushing all prime factors of N in pf
   for(int i = 2; i <= N; ++i) {
      if(N % i == 0 && is_prime[i]) // If i is a prime factor of N
         pf.push_back(i); 
   }
 
   int sz = pf.size();
 
 //It stores the count of number which are not relatively prime to N.
   long long ans = 0;
 
 
 //Loop to generate all the subsets of pf vector
 //The idea behind this is that all the combination of prime factors of N will not be realtively prime to N 
 //nor does their multiple.
   for(int i = 1; i < (1 << sz); ++i) {
 
      int res = 1, cnt = 0;
 
      for(int j = 0; j < sz; ++j) {
         if(i & (1 << j)) {
            res *= pf[j];
            ++cnt;
         }
      }
 
 //here variable stores the no. of numbers that are multiple of res in the given range 
      long long here = R / res;
 
 
 //Here we use inclusion-exclusion principle to remove all commom multiples so that they are counted only once.
 //Union of events = ∑ (Odd-size events - Even-size events)

      if(cnt % 2 == 1)
         ans += here;
      else
         ans -= here;
   }
 
 
 //No. of numbers relatively prime to N =Total no. of numbers - no. of numbers which are not relatively prime to N
   cout << R - ans << '\n';
 
   return 0;
}
~~~~~~~~~~~~~~
## Inclusion Exclusion principle and programming applications

<hr>

### Example 1:
How many binary strings of length 8 either start with a '1' bit or end with two bits '00'? 

### Solution: 
If the string starts with one, there are 7 characters left which can be filled in 27 = 128 ways. 
If the string ends with '00' then 6 characters can be filled in 2^6 = 64 ways. 

Now if we add the above sets of ways and conclude that it is the final answer, then it would be wrong. This is because there are strings with start with ‘1’ and end with ’00’ both, and since they satisfy both criteria they are counted twice. 
So we need to subtract such strings to get a correct count. 
Strings that start with '1' and end with '00' have five characters that can be filled in 25=32 ways. 
So by the ***inclusion-exclusion principle*** we get:
*Total strings = 128 + 64 – 32 = 160*

<hr>

### Example 2:
How many numbers between 1 and 1000, including both, are divisible by 3 or 4? 

 ### Solution:
 
<div align="center">
<img width="50%" height = "300px" src="https://media.geeksforgeeks.org/wp-content/uploads/Screen-Shot-2018-03-14-at-12.45.32-PM.png" />
</div>

 Number of numbers divisible by 3 (A1)= floor(1000/3)=333
       
 Number of numbers divisible by 4 (A2) = floor(1000/4)=250
 
 Number of numbers divisible by 3 and 4 (A3)= floor(1000/12)=83      

 Therefore, number of numbers divisible by 3 or 4 (A1 + A2 - A3) = 333 + 250 – 83 = 500 

<hr>


