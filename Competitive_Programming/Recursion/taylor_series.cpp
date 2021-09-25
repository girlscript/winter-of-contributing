#include <iostream>
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