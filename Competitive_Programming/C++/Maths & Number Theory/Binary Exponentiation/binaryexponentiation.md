# Binary Exponentiation
Binary exponentiation is an algorithm to find the power of any number N raise to an number M (N^M) in logarithmic time O(log M). The normal approach takes O(M) time provided multiplication takes constant time.

```
A^N = 1                      if N = 0
A^N = (A^((N-1)/2))^2 * A    if N is odd
A^N = (A^(N/2))^2            if N is even
```
example:
5^13.

In ordinary method, we will have to do 12 multiplications (5 * 5 * ... * 5) which is costly. This will improve with Binary Exponentiation.
So represent 13 as a sum of power of two.

`13 = 1101 = 2^3 + 2^2 + 0 + 2^0 = 8 + 4 + 0 + 1`

If B1 + B2 = B, then
`A ^ B = A ^ (B1+B2) = A ^ B1 * A ^ B2`<br>

Similarly, <br>
`5^13 = 5^8 * 5^4 * 5^1`<br>

`A^N << 1 = A^2N`

```
5 = 5
5^2 = 5 << 1 = 25
5^4 = 5^2 << 1 = 625
5^8 = 5^4 << 1 = 390625
```
Hence, we needed 3 left shift operations.

```
5^13 = 5^(8+4+1)
5^13 = 5^8 * 5^4 * 5^1
5^13 = 390625 * 625 * 5
5^13 = ‭1220703125‬
```

## Complexity
The basic brute force approach takes O(M) multiplications to calculate N^M.
In reality, multiplication takes O(log N) time and, Binary exponentiation takes O(logN * logM) time and the normal approach takes O(M * logN) time.

Following is the actual time complexity comparison:

Brute force: (M * logN * logN)<br>
Binary exponentiation: (logM * logN * logN)<br>
This improves the performance.



## Implementation
```
#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
int t,a,ans;
long long int b;
scanf("%d",&t);
while(t--)
{
scanf("%d %lld",&a,&b);
if(a==0 && b>0)
ans=0;
else if(a>0 && b==0)
ans=1;
else
{
if(b%4==0)
b=4;
else
b=b%4;
long long int temp=pow(a,b);
ans=temp%10;

}

printf("%d\n",ans);
}
return 0;
}
```
