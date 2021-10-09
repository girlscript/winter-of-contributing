<h1> Pointers and Two Dimensional Arrays </h1>

<p>

In C programming, pointers and arrays are closely related. We can access a 2D array using pointers.

</p>

<p>

Elements of a 2D array are stored in consecutive memory locations in ```Row Major``` order, i.e., rows are placed next to each other. If we create a 2D array of dimension ```(m × n)```, there will be a consecutive memory allocation for ```m``` rows and each row will contain ```n``` elements. Therefore, there will be a consecutive memory allocation for ```m × n``` elements.

</p> <br>

![Diagram](https://github.com/kashyap1905/winter-of-contributing/blob/Pointer-and-Two-Dimentional-Array/C_CPP/Diagrams/Diagram.png)

<br>

<h2> Allocation of memory for the elements of a 2D array using pointer - </h2>

<p>
    
Suppose we want to create a 2D array of integer type with dimension ```(m × n)``` in C language. This basically means we need memory allocation for ```(m × n)``` elements. Therefore, we can use ```malloc()``` function provided by ```stdlib.h``` header file to generate memory for ```(m × n)``` elements. Since ```malloc()``` function return a pointer to the base address of allocated memory, we have to store that in a ```pointer variable```, so that we can access the allocated memory using that ```pointer variable```.

<br>

    int *iptr;
    iptr = (int *)malloc((m * n) * sizeof(int));

</p>

<br>

<h2> Accessing elements of a 2D array using pointer - </h2>

<p>

Suppose we want to access the ```j-th``` element of ```i-th``` row (assuming row number & element number is starting from 0) of a 2D array having dimension ```(m × n)```, then we need to move ```((i * n) + j)``` elements ahead of base address.

Let's understand how it works -

Since the memory is allocated for ```m × n``` elements arranged in a linear order, each of ```n``` element will make a row (since each row contains ```n``` elements. Just refer to the above diagram for better visualisation). So, if we need to access ```zeroth``` element of ```i-th``` row, it will be represented by ```(i * n)-th``` element ahead of base element.

Therefore, if we need to access ```j-th``` element of ```i-th``` row, we need to move to ```((i * n) + j)``` elements ahead of base elemet.

<br>

    for(int i = 0; i < m; i++)
    {
        for(int j = 0; j < n; j++)
        {
            printf("%d\t", *(iptr + (i * n) + j));
        }

        printf("\n");
    }

</p> <br> <br>

<h2>

<u> Below is the implementation of above explained concept using C language - </u>

</h2> <br>

<p>

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
    
</p>

<h3> <u> Output - </u> </h> <br>

<p>

    Input dimensions:

    m --> 3
    n --> 4

    Input 12 elements row-wise:

    10 11 12 13 14 15 16 17 18 19 20 21

    2D Array is:

    10      11      12      13
    14      15      16      17
    18      19      20      21

</p>
