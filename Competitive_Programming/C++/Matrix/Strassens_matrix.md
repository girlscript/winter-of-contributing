# Strassen's Matrix Multiplication 

Strassen algorithm, is an algorithm for matrix multiplication which is much faster than the naive/standard matrix multiplication algorithm for larger matrices, with a better asymptotic complexity.

To show how strassen's approach has a better time complexity, let’s compare both of these algorithms along with the their implementation in C.

## Naive Approach

If we consider 2 matrices A and B having dimensions n x n then their resultant matrix multiplication by naive method is given by 

<div align ="center">
    <img src="https://wikimedia.org/api/rest_v1/media/math/render/svg/ee372c649dea0a05bf1ace77c9d6faf051d9cc8d">
</div>

### The C++ Implementation of this is
``` C++
//Taking 3 input matrices

void Naive(int A[][n], int B[][n], int C[][n])
{
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			C[i][j] = 0;
			for (int k = 0; k < n; k++)
			{
                //Using the matrix multiplication formula 
				C[i][j] += A[i][k]*B[k][j];
			}
		}
	}
}
```
### Time Complexity for Naive Method
In Naive algorithm, “C[i][j] += A[i][k] * B[k][j]” executes n³ times as evident from the three nested for loops. So, the time complexity of the naive algorithm is O(n³).

Time Complexity : O(n³).



