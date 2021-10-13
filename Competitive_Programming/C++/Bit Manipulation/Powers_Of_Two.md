# Powers of "2"!

## Problem Statement 
Given an integer, the task is to determine whether this number is a power of 2 or not.

#### Example
```
Input: 7
Output: No

Input: 8
Output: Yes
```

#### Algorithm
```
- An interesting property of numbers which are powers of two is that they only have a single set bit i.e, "1" in their binary representation. 
                                eg: 4 --> 100 in binary
- Also, the numbers which are one less than the powers of two have all their bits as one in their binary representation. 
                                eg: 3 --> 11 in binary
- So, one common pattern we can observe is that suppose we have a number which is power of two say, 2^x and if we take "BITWISE AND" of it with the number which one less than this number i.e, 2^x-1 then, we will get our result as zero!
- Hence, the final algorithm boils down to the fact that if n&(n-1) [here n is the given integer] is zero then it is a power of 2 else it is not!
- Note: if n is zero then we have to handle it separately as it is not a power of two!!
```
#### Dry Run
```
Let's say we have a number 8 --> 1000 in binary and we know that it is a power of two.
So, the number which is one less than 8 is 7 --> 111 in binary.
                        Now, 8&7 = (1000)&(0111) = 0
Hence, this confirms our algorithm!

Let's say we have a number 6 --> 110 in binary and we know that it is not a power of two.
So, the number which is one less than 6 is 5 --> 101 in binary.
                        Now, 6&5 = (110)&(101) = 100 = 4 in decimal != 0
Hence, this also confirms our algorithm!
```
#### C++ Implementation
```
#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cout<<"Enter an Integer: \n";
    cin>>n;
    int t=n&(n-1); // checking for the power of 2
    if(t==0&&n)      // it is the power of 2 ensuring that n is not zero 
    {
        cout<<"The number entered is a power of 2\n";
    }
    else        // it is not the power of 2
    {
        cout<<"The number entered is not a power of 2\n";
    }
    return 0;
}
```
**Input 1** \
Enter an Integer: 64 \
**Output 1** \
The number entered is a power of 2

**Input 2** \
Enter an Integer: 31 \
**Output 2** \
The number entered is not a power of 2
#### Complexity:
***Time Complexity:*** O(1) \
***Space Complexity:*** O(1)


