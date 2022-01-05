#include <stdio.h>

int add(int a, int b)
{
    return a + b;
}

int main()
{
    int n1 = 2, n2 = 3;
    printf("%d \n", add(n1, n2));
    //n1 and n2 are arguments here
    return 0;
}