#include <stdio.h>

void swap(int *n1, int *n2)
{
    int temp;
    temp = *n1;
    *n1 = *n2;
    *n2 = temp;
    return;
}

int main()
{
    int a = 3;
    int b = 6;
    printf("Before Swap: %d , %d", a, b);
    swap(&a, &b);
    //Passing reference to the function as argument
    printf("\nAfter Swap: %d , %d", a, b);
    //Due to using reference as argument, a and b value is directly changed by the function
    return 0;
}