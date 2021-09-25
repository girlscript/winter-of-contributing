#include <stdio.h>
#include <stdlib.h>

int main()
{
    int m;

    printf("Input size:\n");
    printf("\n");

    printf("m --> ");
    scanf("%d", &m);

    // Pointer to store base addredd of allocated memory
    int *iptr;

    // Allocating memory for m elements of 1D array
    iptr = (int *)malloc(m * sizeof(int));

    printf("\n");

    printf("Input %d elements:\n", m);
    printf("\n");

    // Loop to read elements as input from user
    for (int i = 0; i < m; i++)
    {
        // Accessing address of element a[i] using pointer arithemetic
        scanf("%d", (iptr + i));
    }

    printf("\n");

    printf("1D Array is:\n");
    printf("\n");

    // Loop to print 1D array
    for (int i = 0; i < m; i++)
    {
        // Accessing element by dereferencing the address of element a[i]
        printf("%d\t", *(iptr + i));
    }

    printf("\n");
    return 0;
}