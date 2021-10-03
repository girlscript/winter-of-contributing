# Binary Exponentiation
Binary exponentiation is an algorithm to find the power of any number a raise to an number n (a^n) in logarithmic time O(log n).

# Algorithm
Raising a to the power of n is expressed naively as <code>a<sup>n</sup> = a⋅a⋅…⋅a</code>. However, this approach is not practical for large a or n.

The idea of binary exponentiation is, that we split the power using the binary representation of the exponent.

Writing n in base 2, for example: 5<sup>13</sup> = 5<sup>(1101)<sub>2</sub></sup> = (5<sup>8</sup>).(5<sup>4</sup>).(5<sup>1</sup>)

Since the number n has exactly ⌊log<sub>2</sub>n⌋+1 digits in base 2, we only need to perform <code>O(log n)</code> multiplications, if we know the powers a<sup>1</sup>, a<sup>2</sup>, a<sup>4</sup>, a<sup>8</sup>,…,a<sup>⌊logn⌋</sup>.

So, a fast way to compute those is that an element in the sequence is just the square of the previous element.

5<sup>1</sup> = 5

5^2 = (5^1)^2 = 25

5^4 = (5^2)^2 = 625

5^8 = (5^4)^2 = 390625

**The final complexity of this algorithm is O(logn):** we have to compute logn powers of a, and then have to do at most logn multiplications to get the final answer from them.

Finally, the idea is as follows:

* if <code>n = 0</code>
     * <code>a<sup>n</sup> = 1</code>

* if <code>n is odd</code>
     * <code>a<sup>n</sup> = (a<sup>((n-1)/2)</sup>)<sup>2</sup> * a</code>

* if <code>n is even</code>
     * <code>a<sup>n</sup> = (a<sup>(n/2)</sup>)<sup>2</sup></code>


# Implementation
Below is the recursive approach to calculate the power a<sup>n</sup> in complexity O(log n):

```cpp

int binpower(int a, int n)
{
    int temp;
    if( n == 0)
        return 1;
    temp = binpower(a, n / 2);
    if (n % 2 == 0)
        return temp * temp;
    else
        return a * temp * temp;
}

```

We have discussed recursive O(log n) solution for power. The recursive solutions are generally not preferred as they require space on call stack and they involve function call overhead.

Following is iterative approach to compute a<sup>n</sup>:

```cpp

int binpower(int a, int n)
{
    int res = 1;
    while (n > 0) {
        // If y is odd, multiply x with result
        if (n & 1)
            res = res * a;
 
        // y must be even now
        n = n >> 1; // y = y/2
        a = a * a; // Change x to x^2
    }
    return res;
}


```

# Time Complexity Analysis
The basic brute force approach takes O(n) nultiplications to calculate a<sup>n</sup>.

With our optimized binary exponentiation approach, we do the following operations:

- O(log n) multiplication to keep track of powers
- Maximum O(log n) multiplications to get final result
- (log n) left shift operations

Hence, from the point of time complexity, this is O(log n) multiplications. Usually, multiplication of two numbers say a and a takes O( loga * loga) considering it has loga digits. In most cases, multiplication is considered to be a constant time operation.

Hence, in reality, following is the actual time complexity comparison:

- Brute force: (n * loga * loga)
- Binary exponentiation: (logn * loga * loga)

This improves the performance greatly.

# Applications
Note that Binary Exponentiation can be used in any problem where the power needs to be calculated. This will improve the performance greatly of the sub-routine that is concerned with the calculation of the power.

## Computation of large exponents modulo a number (x<sup>n</sup> mod m):
Since we know (a.b ≡ (a mod m)⋅(b mod m) (mod m)), we can directly use the same code, and just replace every multiplication with a modular multiplication:

```cpp

int binpower(int a, int n, int m)
{   
    a = a % m;
    int res = 1;
 
    while (n > 0) {
        if (n & 1)
            res = res * a % m;
 
        n = n >> 1;
        a = a * a % m;
    }
    return res;
}

```

## Computing n-th Fibonacci number F<sub>n</sub>:
To compute the next Fibonacci number, only the two previous ones are needed, as F<sub>n</sub>=F<sub>n-1</sub>+F<sub>n-2</sub>. We can build a 2×2 matrix that describes this transformation: the transition from F<sub>i</sub> and F<sub>i+1</sub> to F<sub>i+1</sub> and F<sub>i+2</sub>. For example, applying this transformation to the pair F<sub>0</sub> and F<sub>1</sub> would change it into F<sub>1</sub> and F<sub>2</sub>. Therefore, we can raise this transformation matrix to the n-th power to find F<sub>n</sub> in time complexity O(logn).

The relation is:

<code>( F<sub>n</sub> &emsp; F<sub>n+1</sub> ) = ( F<sub>0</sub> &emsp; F<sub>1</sub> ) ⋅ P<sup>n</sup></code>

where,

```
P = [0   1]
    [1   1]
```
Thus, in order to find F<sub>n</sub>, we must raise the matrix P to n. This can be done in O(logn).

```cpp

int fib(int n)
{
    int F[2][2] = {{1, 1}, {1, 0}};
    if (n == 0)
        return 0;
    power(F, n - 1);
 
    return F[0][0];
}
 
void power(int F[2][2], int n)
{
    if(n == 0 || n == 1)
       return;
    int M[2][2] = {{1, 1}, {1, 0}};
     
    power(F, n / 2);
    multiply(F, F);
     
    if (n % 2 != 0)
        multiply(F, M);
}
 
void multiply(int F[2][2], int M[2][2])
{
    int x = F[0][0] * M[0][0] + F[0][1] * M[1][0];
    int y = F[0][0] * M[0][1] + F[0][1] * M[1][1];
    int z = F[1][0] * M[0][0] + F[1][1] * M[1][0];
    int w = F[1][0] * M[0][1] + F[1][1] * M[1][1];
     
    F[0][0] = x;
    F[0][1] = y;
    F[1][0] = z;
    F[1][1] = w;
}

```

## Variation of binary exponentiation:
### Multiplying two numbers a and b modulo m, given that their product is too big to fit in a 64-bit integer.
We simply apply the binary construction algorithm described above, only performing additions instead of multiplications. In other words, we have "expanded" the multiplication of two numbers to O(log m) operations of addition and multiplication by two (which, in essence, is an addition).

* if <code>b=0</code>
     * <code>a⋅b = 0</code>

* if <code>b>0 and an even</code>
     * <code>a⋅b = 2⋅(b/2)⋅a</code>

* if <code>b>0 and a odd</code>
     * <code>a⋅b = 2⋅((b−1)/2)⋅a + a</code>


```cpp

long long moduloMulti(long long a, long long b, long long m)
{
    long long res = 0;
 
    // update a If it is more than OR equal to mod
    a = a % m;
 
    while (b)
    {
        // If b is odd, add a with result
        if (b & 1)
            res = (res + a) % m;
 
        a = (2 * a) % m;
 
        b >>= 1;   // b = b / 2
    }
 
    return res;
}

```

