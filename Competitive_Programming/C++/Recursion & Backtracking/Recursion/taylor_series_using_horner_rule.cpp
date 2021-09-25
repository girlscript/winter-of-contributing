#include <iostream>
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