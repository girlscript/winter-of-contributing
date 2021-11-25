# Largest Prime Number possible from a Subsequence of a Binary String

Given a Binary string, We are required to find out the largest Prime Number possible in the decimal representation of a subsequence of the given binary string. If no prime number can be obtained, print -1.

**Note**: A Subsequence is defined as a sequence of characters of the given set which may or may not be continuous but should be in the same order as the original set.
```
Input 1: String: "1001"
Output 1: 5
Explanation: Since largest prime of all possible subsequence is 5 i.e, "101"

Input 2: String: "1000"
Output 2: 2
Explanation: Since largest prime of all possible subsequence is 2 i.e, "10"

Input 3: String: "1"
Output 3: -1
Explanation: Here No Possible Primes could be formed using all the subsequences of "1"
```

## Approach 💡 

- The idea is to generate all possible subsequences of the given string. 
- Convert each subsequence to its decimal representation 
- Now check if generated decimal representation [is prime or not](https://en.wikipedia.org/wiki/Primality_test)
- Initialize a Variable ans= -1
- If the Generated Number is Prime then take `ans=max(ans,number)`

## Code (C++) 💻

```c++
// Function for Checking if the given Number is Prime or Not 
bool isprime(int n) 
{ 
    if (n<=1)  return false; 
    if (n<=3)  return true; 
    if (n%2==0||n%3==0) return false; 
    for(int i=5; i*i<=n; i+=6) 
        if (n%i==0||n%(i+2)==0) return false; 
    return true; 
}

int largestPrime(string str) {
    int n=str.size();
    int ans=-1;
    // Generating all possible Subsequences 
    for(int i=0; i<(1<<n); ++i) {
        // Storing Generated Binary Subsequence 
        string temp;
        for(int j=0; j<n; ++j) {
            // Taking the ith character
            if(i&(1<<j)) {
                temp+=str[j];
            }
        }
        int len=temp.size(), number=0, cnt=0;
        // Converting to Decimal Number from generated Binary Number 
        for(int j=len-1; j>=0; --j) {
            if(temp[j]=='1') number+=(1<<cnt);
            cnt++;
        }
        // Checking if the decimal Number is prime and updating the answer 
        if(isprime(number)) {
            ans=max(ans,number);
        }
    }
    return ans;
}
```
Now, Since Generating all possible strings would take O(2<sup>n</sup>) while checking if the given number is prime or not would take O(√N) Time, Therefore, 

⏰ **Time Complexity: O(2<sup>N</sup> * √N)**, where N is the length of the string.

**Auxiliary Space: O(1)**

## Reference 📙

- https://www.geeksforgeeks.org/largest-prime-number-possible-from-a-subsequence-of-a-binary-string/
