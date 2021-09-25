#include <iostream>
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