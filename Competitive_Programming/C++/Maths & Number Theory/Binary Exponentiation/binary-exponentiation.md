# Binary Exponentiation
Binary exponentiation is an algorithm to find the power of any number N raise to an number `M (N^M)` in logarithmic time `O(log M)`.

```
A^N = 1                      if N = 0
A^N = (A^((N-1)/2))^2 * A    if N is odd
A^N = (A^(N/2))^2            if N is even
```
### Example:
5^13.
Here we can represent 13 as a sum of power of two.

- 13 = 1101 = 2^3 + 2^2 + 0 + 2^0 = 8 + 4 + 0 + 1

If B1 + B2 = B, then
- A ^ B = A ^ (B1+B2) = A ^ B1 * A ^ B2

Similarly,
- 5^13 = 5^8 * 5^4 * 5^1

- A^N << 1 = A^2N

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
#### Similar Example:<br>
![image](https://user-images.githubusercontent.com/56961626/136423559-29fc4e07-f17f-40da-bf15-e7717c4b4f5f.jpg)

## Complexity
The basic brute force approach takes O(M) multiplications to calculate N^M.
But multiplication takes O(log N) time and, Binary exponentiation takes `O(logN * logM)` time and the normal one takes `O(M * logN)`.

Following is the actual time complexity comparison:

- Brute force: `(M * logN * logN)`
- Binary exponentiation: `(logM * logN * logN)`  
 This improves the performance.

## Implementation
#### Example: LASTDIG PROBLEM 
- Given two integer numbers: the base a (0 <= a <= 20) and the index b (0 <= b <= 2,147,483,000), a and b both are not 0. You have to find the last digit of ab.
```cpp

#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, a, ans;
    long long int b;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%d %lld", &a, &b);
        if (a == 0 && b > 0)
            ans = 0;
        else if (a > 0 && b == 0)
            ans = 1;
        else
        {
            if (b % 4 == 0)
                b = 4;
            else
                b = b % 4;
            long long int temp = pow(a, b);
            ans = temp % 10;
        }
        printf("%d\n", ans);
    }
    return 0;
}
```
