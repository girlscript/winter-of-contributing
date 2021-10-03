# Linear Diophantine Equations

A Diophantine equation is a polynomial equation with two or more variables which only has integers as its solutions. A linear Diophantine equation equates to a constant the sum of two or more monomials, each of degree one.<br>
<br>
Consider a linear equation of the form `ax + by = c` where a, b and c are integers and x and y are variables. We have to determine if the equation has at least one solution such that x and y are both integral values.

## Examples :

```
3x + 6y = 9 is a diophantine equation because it has x = 1 , y = 1 as one integral solution
```

```
3x + 6y = 8 is a not a diophantine equation because it has no integer value as a solution
```

```
1027x + 712y = 1 has a solution x = -165, y = 238. Therefore it's a linear diophantine equation
```

## Solution :

For linear Diophantine equations, integral solutions exist if and only if, the GCD of coefficients of the two variables perfectly divides the constant term i.e. the integral solution exists if, GCD(a, b) divides c with remainder being zero.

## Algorithm :

Find GCD of a and b <br>
Check if c % GCD(a ,b) == 0 <br>
If yes then print Yes <br>
Else print No <br>

## Implementation :

```bash
#include <bits/stdc++.h>
using namespace std;

int gcd(int a, int b) //to find the GCD of two numbers
{
    if(a%b == 0)
    {
        return abs(b);
    }
    else
    {
        return gcd(b,a%b);
    }
}


bool isPossible(int a, int b, int c) //to check if integral solutions are possible
{
    return (c%gcd(a,b) == 0);
}


//driver function
int main()
{
    int a = 3, b = 6, c = 9;
    int x = 3, y = 6, z = 8;
    if(isPossible(a, b, c))
        cout << "Yes\n";
    else
        cout << "No\n";

    if(isPossible(x, y, z))
        cout << "Yes\n";
    else
        cout << "No\n";

    return 0;
}
```

Output :

```bash
Yes
No
```

## How does this work?

If GCD of ‘a’ and ‘b’ perfectly divides a and b then it also divides (ax + by) perfectly which means x and y are integers. This implies gcd also divides ‘c’ using the relation that ax + by = c.

# Finding a solution for a Linear Diophantine Equation

Given three integers a, b, and c representing a linear equation of the form: ax + by = c. The task is to find a solution of the given equation if a finite solution exists.

## Examples :

```
Input: a = 4, b = 18, c = 10 <br>
Output: x = -20, y = 5
Explanation: (-20)*4 + (5)*18 = 10
```

```
Input: a = 9, b = 12, c = 5
Output: No Solution exists
```

## Approach :

1. First, check if a and b are non-zero.
2. For given a and b, calculate the value of x1 and y1, and gcd using Extended Euclidean Algorithm.
3. Now, gcd(a, b) should be multiple of c.
4. Calculate the solution of the equation as follows:

```
x = x1 * ( c / gcd )
y = y1 * ( c / gcd )
```

Note : If a and b are zero and c is non-zero then solution doesn't exists. If c is also zero then infinite solution exits.

## Implementation :

```bash
#include <bits/stdc++.h>
using namespace std;

//extended euclid algorithm
int gcd_extend(int a, int b, int &x, int &y)
{
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    else {
        int g = gcd_extend(b, a % b, x, y);
        int x1 = x, y1 = y;
        x = y1;
        y = x1 - (a / b) * y1;
        return g;
    }
}

// print the solution
void print(int a, int b, int c)
{
    int x, y;
    if (a == 0 && b == 0) {

        // Condition for infinite solutions
        if (c == 0) {
            cout << "Infinite Solutions Exist\n";
        }

        // Condition for no solution exist
        else {
            cout << "No Solution exists\n";
        }
    }

    int gcd = gcd_extend(a, b, x, y);

    // Condition for no solutions exist
    if (c % gcd != 0) {
        cout<< "No Solution exists\n";
    }
    else {
        // Print the solution
        cout << "x = " << x * (c / gcd) << ", y = " << y * (c / gcd);
    }
}


int main()
{
    int a, b, c;

    a = 4;
    b = 18;
    c = 10;

    print(a, b, c);
    return 0;
}
```

## Output :

```bash
x = -20, y = 5
```

## Time Complexity :

O(log(max(A, B))), where A and B are the coefficient of x and y in the given linear equation.<br>
Auxiliary Space: O(1)

# Finding all solutions of a Linear Diophantine Equation

All the solutions of the given equation can be obtained from one solution.

Let g = GCD(a,b) and let x0,y0 be integers which satisfy the following:
`a⋅x0+b⋅y0=c`
Now, we should see that adding b/g to x0, and subtracting a/g from y0 will not break the equality:

```
a⋅(x0+b/g)+b⋅(y0−a/g)=a⋅x0+b⋅y0+a⋅b/g−b⋅a/g=c
```

All the numbers of the following form are solutions of the given Diophantine equation.

```
x=x0+k⋅b/g
y=y0−k⋅a/g
```

Let's say we only want to find the solutions in [minx;maxx] and [miny;maxy] intervals.

Note: if a or b is 0, then the problem only has one solution. We don't consider this case here.

First, we can find a solution which have minimum value of x, such that x ≥ minx. To do this, we first find any solution of the Diophantine equation. Then, we shift this solution to get x ≥ minx. This can be done in O(1). Denote this minimum value of x by lx1.

Similarly, we can find the maximum value of x which satisfy x ≤ maxx. Denote this maximum value of x by rx1.

Similarly, we can find the minimum value of y (y ≥ miny) and maximum values of y (y ≤ maxy). Denote the corresponding values of x by lx2 and rx2.

The final solution is all solutions with x in intersection of [lx1, rx1] and [lx2, rx2]. Let denote this intersection by [lx, rx].

Following is the code implementing this idea. Notice that we divide a and b at the beginning by g. Since the equation `ax + by = c` is equivalent to the equation `(a/g)x + (b/g)y = c/g`, we can use this one instead and have `gcd(a/g,b/g) = 1`, which simplifies the formulas.

```bash
void shift_solution(int & x, int & y, int a, int b, int cnt) {
    x += cnt * b;
    y -= cnt * a;
}

int find_all_solutions(int a, int b, int c, int minx, int maxx, int miny, int maxy) {
    int x, y, g;
    if (!find_any_solution(a, b, c, x, y, g))
        return 0;
    a /= g;
    b /= g;

    int sign_a = a > 0 ? +1 : -1;
    int sign_b = b > 0 ? +1 : -1;

    shift_solution(x, y, a, b, (minx - x) / b);
    if (x < minx)
        shift_solution(x, y, a, b, sign_b);
    if (x > maxx)
        return 0;
    int lx1 = x;

    shift_solution(x, y, a, b, (maxx - x) / b);
    if (x > maxx)
        shift_solution(x, y, a, b, -sign_b);
    int rx1 = x;

    shift_solution(x, y, a, b, -(miny - y) / a);
    if (y < miny)
        shift_solution(x, y, a, b, -sign_a);
    if (y > maxy)
        return 0;
    int lx2 = x;

    shift_solution(x, y, a, b, -(maxy - y) / a);
    if (y > maxy)
        shift_solution(x, y, a, b, sign_a);
    int rx2 = x;

    if (lx2 > rx2)
        swap(lx2, rx2);
    int lx = max(lx1, lx2);
    int rx = min(rx1, rx2);

    if (lx > rx)
        return 0;
    return (rx - lx) / abs(b) + 1;
}
```

# Find the solution with minimum value of x + y

Here, x and y also need to be given some restriction, otherwise, the answer may become negative infinity.

The idea is to find any solution of the Diophantine equation, and then shift the solution to satisfy some conditions.

Finally, use the knowledge of the set of all solutions to find the minimum:

```
x′ = x + k⋅b/g
y′ = y − k⋅a/g
```

Note that x+y change as follows:

```
x′ + y′ = x + y + k ⋅((b/g)−(a/g)) = x + y + k ⋅(b−a)/g
```

- If a < b, we need to select smallest possible value of k.
- If a > b, we need to select the largest possible value of k.
- If a = b, all solution will have the same sum `x + y`.

## References

- [GeeksforGeeks](https://www.geeksforgeeks.org/linear-diophantine-equations/)
- [CP-Algorithms](https://cp-algorithms.com/algebra/linear-diophantine-equation.html)
