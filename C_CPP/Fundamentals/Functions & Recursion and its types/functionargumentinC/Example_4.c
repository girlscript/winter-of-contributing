#include <stdio.h>

void calculate(int n1, int n2, int *add, int *minus) //Defined in Function header
//Here n1, n2, *add, *minus are parameter
//They receive values from argument
{
    //Parameter can be used locally in function but argument can't
    *add = n1 + n2;
    *minus = n1 - n2;
    return;
}

int main()
{
    //Arguments are not defined in function prototype
    int a = 37;
    int b = 23;
    int sum = 0;
    int subt = 0;

    printf("Numbers :\na = %d\nb = %d", a, b);

    calculate(a, b, &sum, &subt);
    //Here a, b, &sum, &subt is argument
    //They pass values to parameter

    printf("\nCalculation :\na + b = %d\na - b = %d", sum, subt);
    return 0;
}