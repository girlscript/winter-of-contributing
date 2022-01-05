# Recursion

<p> Let's have a look on the definition : </p>
<p>A function that calls itself is known as a recursive function. And, this process is known as recursion. </p>

<hr>

## Working of Recursion

```
void GWOC()
{
    ....
    ....
    GWOC(); // function calling itself called recursive function
    ....
}

// driver code
int main()
{
    GWOC(); // function call
}
```

<br>


<p align = "center">
    <img src = "https://user-images.githubusercontent.com/83535682/134781509-5a86d32e-aa08-41dc-8d76-7289080696de.jpg" />
</p>

<hr>

### In this documentation, we'll discuss 3 methods to solve TAYLOR SERIES using Recursion

1. Normal Recursion
2. Iterative Method
3. Horner's Rule

## 1. Normal Recursion
<p> In this method, we'll use recursive function to recurse the program for solving. </p>

```
#include<bits/stdc++.h>
using namespace std;

// Taylor Series
// e^x = 1 + x/1 + x^2/2! + x^3/3! + ...... + x^n/n!

double taylorSeries(int x, int n)
{
    static double p = 1, f = 1;
    double r;

    if (n == 0)
    {
        return 1;
    }
    else
    {
        r = taylorSeries(x, n - 1); // recursive function
        p = p * x;
        f = f * n;

        return (r + p / f);
    }
}

// driver code
int main()
{
    double a = taylorSeries(4, 20); // function call
    cout << a;
    return 0;
}
```

### Output

```
54.5981
```

<hr>

## 2. Iterative Method
<p> In this method, we'll use iteration (for loop) to add each term one by one. </p>

```
#include<bits/stdc++.h>
using namespace std;

// Taylor Series
// e^x = 1 + x/1 [1 + x/2 [1 + x/3 [1 + x/4] ] for n=4

double taylorSeries(int x, int n)
{
    double s = 1;
    for (; n > 0; n--)
    {
        s = 1 + x * s / n;
    }
    return s;
}

// driver code
int main()
{
    double a = taylorSeries(4, 20); // function call
    cout << a;
    return 0;
}
```

### Output

```
54.5981
```

<hr>

## 3. Horner's Rule
<p> In this method, we'll use Horner's Rule to recurse the program. </p>

```
#include<bits/stdc++.h>
using namespace std;

// Taylor Series
// e^x = 1 + x/1 [1 + x/2 [1 + x/3 [1 + x/4] ] for n=4

double taylorSeries(int x, int n)
{
    static double s = 1;

    if (n == 0)
    {
        return s;
    }

    s = 1 + x * s / n;

    return taylorSeries(x, n - 1); // recursive call
}

// driver code
int main()
{
    double a = taylorSeries(4, 20); // function call
    cout << a;
    return 0;
}
```

### Output

```
54.5981
```

<hr>

## Advantages and Disadvantages of Recursion Over Iterative Functions :

### Advantages :

- Recursion adds clarity and reduces the time needed to write and debug code.
- Recursion is better at tree traversal and Tower of Hanoi.

### Disadvantages :

- It takes a lot of stack space compared to an iterative program
- It can be slow.
- It can be more difficult to debug compared to an equivalent iterative program

<hr>

## Maintainer

<a href="https://github.com/ankushsingh24">
  <img src="https://contrib.rocks/image?repo=ankushsingh24/ankushsingh24" />
</a>
