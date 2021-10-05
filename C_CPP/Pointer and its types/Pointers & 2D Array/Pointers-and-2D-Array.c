#include<stdio.h>
#include<stdlib.h>

int main()
{
    int m, n;

    printf("Input dimensions:\n");
    printf("\n");

    printf("m --> ");
    scanf("%d", &m);

    printf("n --> ");
    scanf("%d", &n);

    // Pointer to store base addredd of allocated memory
    int *iptr;

    // Allocating memory for (m * n) elements of 2D array
    iptr = (int *)malloc((m * n) *sizeof(int));

    printf("\n");

    printf("Input %d elements row-wise:\n", (m * n));
    printf("\n");

    // Loop to read elements as input from user
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            // Accessing address of element a[i][j] using pointer arithemetic
            scanf("%d", (iptr + (i * n) + j));
        }
    }

    printf("\n");

    printf("2D Array is:\n");
    printf("\n");

    // Loop to print 2D array in matrix form
    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            // Accessing element by dereferencing the address of element a[i][j]
            printf("%d\t", *(iptr + (i * n) + j));
        }

        printf("\n");
    }

    printf("\n");
    return 0;
}
