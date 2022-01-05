# Matrix multiplication of 2-D array

## Array
An array is the collection of items of similar datatypes stored at contiguous memory location. It is a derived datatype in c language. <br>
 An array in c language is declared as: <br>
`data_type array_name[size_of_array]`, <br>
For example: `int grade[5]`. <br>
Arrays can be one dimensional or multi-dimensional. Above given example is 1-D array.
### 2-D array
We can define 2-D array as the array of 1-D array. It is organized as a matrix which we can define using rows and columns. Syntax to declare 2-D array is <br>
`data_type array_name[array_size1][array_size2]` <br>
For example: `int matrix[3][3]`

## Matrix multiplication
If A is a m x n matrix and B is a n x p matrix <br>
![matrix](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcR8n9rAv2Sz052YgP5OKFhp92raK9H7_BDUeQ&usqp=CAU)

then multiplication of A and B, let say C, will be <br>
![matrix](https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcQ38N15gtaMKfrr_bY46hDTrD2UOWdTCeWtWk9IqPoc6jPulby_N2qbh3jCi_doKOjxBw&usqp=CAU) <br>
Here, C is a m x p matrix. To multiply two matrices, the column of first matrix should be equal to the row of second matrix.

## Algorithm for matrix multiplication of 2-D array

<pre>
1. Start
2. Declare required variables.
3. Take input from user for rows and columns of both matrices.
4. Compare for the equality of number of column of first matrix to the number of row of second matrix.
5. If condition in 4th step is true(equal), go to step 6, otherwise print given matrices can't be multiplied.
6. Multiply the matrices using nested loops, and print the result in matrix form as console output.
7. Stop.
</pre>
### Time Complexity: O(n<sup>3</sup>)

## Program in c

```C
#include <stdio.h>

// Driver function
int main()
{
    int i, j, r1, c1, r2, c2, k; //Declaring variables

    // taking inputs for number of rows and columns of two matrices
    printf("Enter no. of rows of 1st matrix: ");
    scanf("%d", &r1);
    printf("Enter no. of columns of 1st matrix: ");
    scanf("%d", &c1);
    printf("Enter no. of rows of 2nd matrix: ");
    scanf("%d", &r2);
    printf("Enter no. of column of 2nd matrix: ");
    scanf("%d", &c2);

    // conditional statments
    if (c1 != r2) //if number of columns of 1st matrix is not equal to no. of rows of 2nd matrix
    {
        printf("\nIt is not possible to multiply these two matrices,\n");
        printf("because to multiply two matrices, \n");
        printf("column of first matrix should be equal to \n");
        printf("row of second matrix.");
    }
    else // condition if above condition does not satisfy
    {
        int m1[r1][c1], m2[r2][c2], m3[r1][c2]; //declaring varibles for matrices

        printf("Enter matrix 1: \n");

        for (i = 0; i < r1; i++) //loop to take input for elements of 1st matrix
        {
            for (j = 0; j < c1; j++)
                scanf("%d", &m1[i][j]);
        }

        printf("Enter matrix 2: \n");

        for (i = 0; i < r2; i++) //loop to take input for elements of 2nd matrix
        {
            for (j = 0; j < c2; j++)
                scanf("%d", &m2[i][j]);
        }

        printf("Multplication of m1 and m2 is: \n");

        //loop to multiply matrices m1 and m2
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c2; j++)
            {
                int sum = 0;
                for (k = 0; k < c1; k++)
                {
                    //multiplying two matrices and then adding with sum variable
                    sum += m1[i][k] * m2[k][j];
                }
                m3[i][j] = sum; //storing final result of matrix multiplication in m3
                printf("%d ", m3[i][j]);
            }
            printf("\n");
        }
    }
    return 0;
}
```

## Sample tests

1. if column of 1<sup>st</sup> matrix is not equal to row of 2<sup>nd</sup> matrix

```
Enter no. of rows of 1st matrix: 2
Enter no. of columns of 1st matrix: 2
Enter no. of rows of 2nd matrix: 3
Enter no. of column of 2nd matrix: 2

It is not possible to multiply these two matrices,
because to multiply two matrices,
column of first matrix should be equal to
row of second matrix.
```

2. if column of 1<sup>st</sup> matrix and row of 2<sup>nd</sup> matrix are equal

```
Enter no. of rows of 1st matrix: 2
Enter no. of columns of 1st matrix: 2
Enter no. of rows of 2nd matrix: 2
Enter no. of column of 2nd matrix: 2
Enter matrix 1: 
1 2
3 4
Enter matrix 2: 
5 6
7 8
Multplication of m1 and m2 is: 
19 22
43 50
```


# References

[Wikipedia](https://en.wikipedia.org/wiki/Matrix_multiplication)

[Codewithc](https://www.codewithc.com/matrix-multiplication-algorithm-flowchart/)