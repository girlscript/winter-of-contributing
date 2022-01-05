# Brian Kernighan’s Algorithm

## Problem Statement 
Given an integer number, the task is to find the number of 1's in the binary representation of the given number efficiently!

#### Example
```
Input: 8
Output: 1

Input: 7
Output: 3
```

#### Algorithm
```
1. Initialize count: = 0
2. While n is not zero:
   (a) Do bitwise & with (n-1) and assign the value back to n
       n: = n&(n-1)
   (b) Increment count by 1
3. Print the value of count
```
#### Dry Run
```
Let's take n = 10 and initialize count to 0

n = 10 --> n is not equal to zero
n = n&(n-1) = 10 & 9 = 8, count = count + 1 = 1.

n = 8 --> n is not equal to zero
n = n&(n-1) = 8 & 7 = 0, count = count + 1 = 2.

n = 0 --> n is equal to zero
terminate the loop

So, count = 2, which is our required result.
The Binary Representation of 10 is 1010 --> number of 1's are 2 
```
#### C++ Implementation
```
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int count = 0; // initializing count to 0
    while(n) // run a loop till n is not equal to zero
    {
        n = n&(n-1);
        count++;
    }
    cout<<count<<"\n";
    return 0;
}
```
**Input** \
9 \
**Output** \
2 
#### Complexity:
***Time Complexity:*** O(logN) \
***Space Complexity:*** O(1)

