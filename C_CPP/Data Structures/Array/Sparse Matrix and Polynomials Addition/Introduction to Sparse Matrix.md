<h1 align="center">Sparse Matrix</h1>

When we talk about matrix in C, we imagine a <em>```2D Array```</em> with a dimension <em>```m × n```</em>. Which means, array contains <em>```m × n```</em> elements. So, if we want to create a simple matrix of order <em>```m × n```</em>, we need to allocate memory for <em>```m × n```</em> elements.

Now, if we think about a situation where maximum elements in a matrix is ```0```, then when we allocate memory for simple matrix, most of our memory will be of no use (since maximum elements are ```0```).

> <em> A <strong>Sparse Matrix</strong> is a structure which is used to represent a matrix (or a 2D Array) in which maximum elements are 0.</em>

It stores only non-zero elements of a matrix and thus, uses <em>```less memory```</em> as compared to a simple matrix.

<br>

## <em><u> Advantages of using Sparse matrix </u></em>

### &nbsp; &nbsp; &nbsp; &nbsp; <em>1. <u>Storage -</u></em>

&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Since there are lesser non-zero elements, thus <em>```lesser memory```</em> can be used to store only those elements. 
<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Therefore, less memory is consumed.

### &nbsp; &nbsp; &nbsp; &nbsp; <em>2. <u>Computation Time -</u></em>

&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; <em>```Sparse Matrix```</em> stores only non-zero elements.
<br>
&nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; &nbsp; Therefore, it takes relatively <em>```less time```</em> (and some times less steps) to do computations.

<hr> 

&nbsp;[`↑ Go to Top`](#Sparse-Matrix)
&nbsp;&nbsp;&nbsp;[`↓ Sparse Matrix Representations`](#Sparse-Matrix-Representations)
&nbsp;&nbsp;&nbsp;[`↓ Co-ordinate List Representation`](#Coordinate-List-Representation)
&nbsp;&nbsp;&nbsp;[`↓ Compressed Sparse Row`](#Compressed-Sparse-Row-Representation)
&nbsp;&nbsp;&nbsp;[`Go to Polynomials →`](Polynomials%20Representation%20and%20Evaluation.md)  


<hr><br>

<h2 align="center"><em>Sparse Matrix Representations</em></h2>

Let us take a look at the example matrix given below:<br>

```C
0   0   0   3   0
0   5   0   0   2
0   1   0   0   0
4   0   0   0   0
0   0   7   0   0
0   2   0   0   0
```

Above given matrix is of order <em>```6 × 5```</em>. That is, it contains ```30``` elements. But when we look at the <em>```non-zero elements```</em>, it's only ```7```. So, we just need to store the information about those ```7``` non-zero elements.

For representing a <em>[`sparse matrix`](#Sparse-Matrix)</em>, we generally use following ```2``` methods -
 
 1. <em>[`Co-ordinate List Representation`](#Coordinate-List-Representation) or [`3 Column Representation`](#Coordinate-List-Representation)</em>
 2. <em>[`Compressed Sparse Row`](#Compressed-Sparse-Row-Representation)</em>

<br>

> <em>Among the above two representation types, [Co-ordinate List Representation](#Coordinate-List-Representation) is most common in use. We will also use this method for representing and evaluating <strong>[Polynomials](Polynomials%20Representation%20and%20Evaluation.md#polynomial-representation-and-evaluation)</strong>, later in this topic.</em>

<hr>

&nbsp;[`↑ Go to Top`](#Sparse-Matrix)
&nbsp;&nbsp;&nbsp;[`↑ Sparse Matrix Representations`](#Sparse-Matrix-Representations)
&nbsp;&nbsp;&nbsp;[`↓ Co-ordinate List Representation`](#Coordinate-List-Representation)
&nbsp;&nbsp;&nbsp;[`↓ Compressed Sparse Row`](#Compressed-Sparse-Row-Representation)
&nbsp;&nbsp;&nbsp;[`Go to Polynomials →`](Polynomials%20Representation%20and%20Evaluation.md)  

<hr><br><br>



<h2 align="center"><em>Coordinate List Representation</em></h2>

This method is also known as <em>[`3 Column Representation`](#Coordinate-List-Representation)</em>. To creat a <em>[`sparse matrix`](#Sparse-Matrix)</em> using <em>[`Co-ordinate List Representation`](#Coordinate-List-Representation)</em>, we require ```3``` information about a non-zero elements -

1. <em>```Row Number```</em>
2. <em>```Column Number```</em>
3. <em>```Value of Element```</em>

Therefore, a <em>[`sparse matrix`](#Sparse-Matrix)</em> can be represented in the tabular form using triplets, i.e., <em>```row```</em>, <em>```column```</em>, and <em>```value```</em>. 

Below is the representation of the matrix shown in above example using <em>[`Co-ordinate List Representation`](#Coordinate-List-Representation)</em> -

<br>

<p align="center"> <img src="https://user-images.githubusercontent.com/87887741/134774259-6e91b353-5408-45da-89ad-8ab177458618.png" height="400"> </p>

<br>

In the above table, the first row represents <em>```total rows```</em>, <em>```total colomn```</em> & <em>```total non-zero values```</em> of original matrix. Rest of the rows represents the information about all non-zero values. Therefore, the size of the tabel will be ```1``` more than the number of non-zero elements.

This is one of way in which we can represent a <em>[`sparse matrix`](#Sparse-Matrix)</em>. We will later use this representation to perform <em>[`Polynomial Addition Using Sparse Matrix`](Polynomials%20Representation%20and%20Evaluation.md#addition-of-polynomials)</em>.

<br>

```Code Snippet:```

```C
/* Structure declarations for storing non-zero elements */

struct Element
{
    int i, j, x;            // Variables to store row number, column number & value of non-zero element
};

struct Sparse
{
    int m, n, num;          // Variables to store total row, total column & total number of non-zero
    struct Element *E;      // Pointer varibale to store all the non-zero elemets
};

/* Function to create a new sparse matrix */

void Input (struct Sparse *S)
{
    printf("m, n, num --> ");
    scanf("%d%d%d", &(S->m), &(S->n), &(S->non_zero));

    S->E = (struct Element *)malloc((S->non_zero) * sizeof(struct Element)); // Allocation of memeory for non-zero elements

    /* Loop to input non-zero elements of sparse matrix */

    for (int i = 0; i < (S->non_zero); i++)
    {
        printf("Element %d:\n", (i + 1));

        printf("Row, column, Element --> ");
        scanf("%d%d%d", &(S->E[i].i), &(S->E[i].j),  &(S->E[i].x));
    }
}

/* Function definition to display a sparse matrix */

void Display (struct Sparse S)
{
    int k = 0;

    /* Loop to display sparse matrix */

    for (int i = 0; i < (S.m); i++)
    {
        for (int j = 0; j < (S.n); j++)
        {
            /* Condition to check if the element present at index (i, j) in sparse matrix is non-zero or not. */
            /* If the element is non non-zero, print the element, otherwise print '0' */
            
            if (((i + 1) == (S.E[k].i)) && ((j + 1) == (S.E[k].j)))
            {
                printf("%d\t", S.E[k++].x);
            }
            else
            {
                printf("0\t");
            }
        }

        printf("\n");
    }

    return;
}
```

<hr>

&nbsp;[`↑ Go to Top`](#Sparse-Matrix)
&nbsp;&nbsp;&nbsp;[`↑ Sparse Matrix Representations`](#Sparse-Matrix-Representations)
&nbsp;&nbsp;&nbsp;[`↑ Co-ordinate List Representation`](#Coordinate-List-Representation)
&nbsp;&nbsp;&nbsp;[`↓ Compressed Sparse Row`](#Compressed-Sparse-Row-Representation)
&nbsp;&nbsp;&nbsp;[`Go to Polynomials →`](Polynomials%20Representation%20and%20Evaluation.md)  

<hr><br><br>



<h2 align="center"><em>Compressed Sparse Row Representation</em></h2>

This method of representation is also known as <em>[`The Yale Formate`](#Compressed-Sparse-Row-Representation)</em>. We represent a matric of dimension <em>```m × n```</em> by three <em>```1-D arrays```</em> called as <em>```A, IA, JA```</em>.

Let ```N``` denote the number of non-zero elements in matrix and there is <em>```0-based indexing```</em> is used.

<br>
 
> <em>The <strong>A</strong> array is of size <strong>N</strong> and it stores the values of the non-zero elements of the matrix. The values appear in the order of traversing the matrix row-by-row.</em><br><br>
> <em>The <strong>IA</strong> array is of size <strong>m + 1</strong> and it stores the <strong>cumulative number</strong> of non-zero elements upto the i-th row.</em>

```C

IA[0] = 0   // It shows that there is no any element in Sparse Matrix initially.

IA[i] = IA[i-1] + (no of non-zero elements in the i-th row of the Matrix)

Therefore, the i-th row will contain IA[i+1] – IA[i] non-zero elements.
```

> <em>The <strong>JA</strong> array stores the <strong>column index</strong> of each element in the array <strong>A</strong>. Thus it is of size <strong>N</strong> as well.</em>

<br>

```
Example:

Input:  0   0   0   3   0
        0   5   0   0   2
        0   1   0   0   0
        4   0   0   0   0
        0   0   7   0   0
        0   2   0   0   0

        m = 6
        n = 5

        Non-zero elememts = 7


Representation of arrays (A, IA, JA) for above given matrix:

A  = {3, 5, 2, 1, 4, 7, 2}  <-- Values of the non-zero elements (total non-zero elements = 7)
IA = {0, 1, 3, 4, 5, 6, 7}  <-- Cumulative number of non-zero elements. (Notice IA[0] = 0)
JA = {3, 1, 4, 1, 0, 2, 1}  <-- Column index of each element in the array A (total values = 7)
```

<br>

<p align="center"> <img src="https://user-images.githubusercontent.com/87887741/134774289-4a744030-a053-4368-bcd6-ee9feeecfa32.png" height="350"> </p>

<br>

### <em><u> Algorithm for storing sparse matrix using compressed row method - </u></em>

```
Step 1: Set m to number of row in matrix M

Step 2: Set n to number of columns matrix M

Step 3: I = 0, J = 0, N = 0. Declare A, JA, and IA. 
        Set IA[0] to 0

Step 4: for I = 0 ... m-1
            Add (N + IA[previuos]) to IA

Step 5: for J = 0 ... n-1

Step 5: If M[I][J] is not zero

           Add MATRIX[I][J] to A
           Add J to JA
           N = N + 1

        [End of IF]

Step 6: [End of J loop]

        [End of I loop]

Step 7: Print vectors A, IA, JA

Step 8: END
```

<br>

### <em><u> Function to implement above algorithm - </u></em>

```C
void Sparse_Matrix (int *M, int R, int C, int N)
{
    int m = R;
    int n = C;
    
    /* Memory allocation for A, IA, IJ */

    int A  = (int *)malloc(N * sizeof(int));
    int IA = (int *)malloc((m + 1) * sizeof(int));
    int JA = (int *)malloc(N * sizeof(int));

    int I = 0, J = 0;   // Variables used as index variable for A, IA, IJ
 
    /* Loop to store information about non-zero elements in A, IA, JA */
    
    for (int i = 0; i < m; i++)
    {
        IA[I++] = N;
        
        for (int j = 0; j < n; j++)
        {
            if (M[i][j] != 0)
            {
                A[J] = M[i][j];
                J[J] = j;

                N++;
                J++;
            }
        }
    }
 
    /* Loop to print A */

    printf("A  --> [ ");
    for(int i = 0; i < J; i++)
    {
        printf("%d ", A[i]);
    }
    printf("]");

    /* Loop to print IA */

    printf("IA --> [ ");
    for(int i = 0; i < I; i++)
    {
        printf("%d ", IA[i]);
    }
    printf("]");

    /* Loop to print JA */

    printf("JA --> [ ");
    for(int i = 0; i < J; i++)
    {
        printf("%d ", JA[i]);
    }
    printf("]");
}
```
```
Input:

0   0   0   0   1 
5   8   0   0   0 
0   0   3   0   0 
0   6   0   0   1 

Output:

A  = [ 1 5 8 3 6 1 ]
IA = [ 0 1 3 4 6 ]
JA = [ 4 0 1 2 1 4 ]
```

<hr>

&nbsp;[`↑ Go to Top`](#Sparse-Matrix)
&nbsp;&nbsp;&nbsp;[`↑ Sparse Matrix Representations`](#Sparse-Matrix-Representations)
&nbsp;&nbsp;&nbsp;[`↑ Co-ordinate List Representation`](#Coordinate-List-Representation)
&nbsp;&nbsp;&nbsp;[`↑ Compressed Sparse Row`](#Compressed-Sparse-Row-Representation)
&nbsp;&nbsp;&nbsp;[`Go to Polynomials →`](Polynomials%20Representation%20and%20Evaluation.md) 

<hr>
