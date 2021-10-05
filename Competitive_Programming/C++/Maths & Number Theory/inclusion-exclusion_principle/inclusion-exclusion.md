
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

- We can construct sieve in ***O(NloglogN)*** time complexity i.e. 1e6 x loglog1e6 = 778152. We can do 2*1e8
computations in 1 second. Thus, we can use sieve to find the prime factors of N.

- N<= 1e6.
How many distinct prime can N have ? Ans = 7</br>
2 * 3 * 5 * 7 * 11 * 13 * 17 * 19 = 9699690 ( > 1e6)

- We need ***O(N * 2^N)*** to generate all subsets.
Thus, we will do at max 7 * 2^7 = 896 computations.Conclusion, we can apply inclusion - exclusion here.

Overall time complexity of the code will be ***O(NloglogN)***

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

