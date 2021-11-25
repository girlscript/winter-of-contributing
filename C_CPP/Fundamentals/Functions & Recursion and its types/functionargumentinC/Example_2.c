#include <stdio.h>

void swap(int n1, int n2)
//Function have two parameter hence should have two argument
{
    int temp;
    printf("Before Swapping: %d , %d", n1, n2);
    temp = n1;
    n1 = n2;
    n2 = temp;
    printf("\nSwapping Number: %d , %d", n1, n2);
    //Since vallue is passed in argument, we can see function didn't changed a and b actual value but only a and b is swapped in the function
    return;
}

int main()
{
    int a = 10;
    int b = 11;
    swap(a, b); //Passing values directly as argument
    return 0;
}
