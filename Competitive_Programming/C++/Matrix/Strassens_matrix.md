# Strassen's Matrix Multiplication 

Strassen algorithm is an algorithm for matrix multiplication that is much faster than the naive/standard matrix multiplication algorithm for larger matrices, with a better asymptotic complexity.

To show how strassen's approach has a better time complexity, let’s compare both of these algorithms.

## Naive Approach

If we consider 2 matrices A and B having dimensions n x n then their resultant matrix multiplication by naive method is given by 

<div align ="center">
    <img src="https://miro.medium.com/max/390/1*gLP52rgHhuOGi402RtKlMg.png" width="180" height ="60">
</div>
<div align ="center">
    for i = 1,...n and j = 1,...n
</div>

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

***Time Complexity : O(n³).***

---
## Strassen Algorithm

Strassen algorithm is a recursive method for matrix multiplication where we divide the matrix into 4 sub-matrices of dimensions n/2 x n/2 in each recursive step.

For Eg: Consider two 4 x 4 matrices A and B and a resultant matrix C. In Strassen's algorithm a 4 x 4 matrix is reduced to four 2 x 2 matrices. 

<div  align ="center">
    <img  src="https://encrypted-tbn0.gstatic.com/images?q=tbn:ANd9GcR0xM759268ZUcy12YuTwduGsZkx66CitlrPA&usqp=CAU" width="400" height="200">
</div>
<div  align ="center">
    Here, Aᵢⱼ and Bᵢⱼ are 2 x 2 matrices.
</div>

<br/>

A and B are now reduced to 2 x 2 matrices.
<div  align ="center">
    <img  src="https://miro.medium.com/max/589/1*DjllqTzt8ISw0izw4wT3jQ.png">
</div>

<br/>

Now, this is where Strassen came up with an idea to improve the asymptotic complexity. He came up with 7 formulas which reduces the number of recursive calls from standard 8 to 7 recursive calls.

<div  align ="center">
    <img  src="https://miro.medium.com/max/628/1*GlqAVmRYXDjuQFEg6G0OkQ.png" width="400" height="200">
</div>

After using the above 7 formulas, we replace the resultant matrix C with 

C11 = P5 + P4 – P2 + P6

C12 = P1 + P2

C21 = P3 + P4

C22 = P1 + P5 - P3 - P7

So the final matrix C becomes 
```
Resultant Matrix C = |p5+p4-p2+p6    p1+p2   |
                     |   p3+p4    p1+p5-p3-p7| 
```

### Time Complexity for Strassens Algorithm
The algorithm makes seven recursive calls while calculating P1 to P7. After each recursive call the matrix size is divided by 2 and the work done to add, subtract and copy values to resultant matrix C is O(n²).

Therefore, the the master’s equation is: 
``` 
T(n) = 7T(n/2) + O(n²) 
```

***Time Complexity : O(n^log2(7)) = O(n^2.81).***

---
So as we can see from the above comparison, the Time Complexity of Strassens algorithm is slightly less than the naive method. It might seem insignificant but for larger n x n matrices it makes a big difference.
This is how Strassen's algorithm helps to improve the asymptotic complexity.