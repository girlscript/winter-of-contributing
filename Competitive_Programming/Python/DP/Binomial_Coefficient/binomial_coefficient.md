# Binomial Coefficient Using Bottom-Up Tabularization:

Here, firstly we will see the conventional method to obtain the binomial coefficient and how we can reduce the complexity of it using bottom-up tabularization.

The expression to obtain binomial coefficient is given as:

<img src='https://user-images.githubusercontent.com/65852362/142717568-8816fda5-63af-4e44-88fd-1cbf7eed6f1e.png'>

## Algorithm to obtain binomial coefficient:

```
function C(n, k)
    if k=0 or k=n
        then return 1
    else 
        return C(n-1, k-1)+ C(n-1, k)
```

## Time Complexity Analysis:

The time complexity of the above algorithm will be <b>O(2<sup>n</sup>)</b>. Here, this much high time complexity is not feasible, so to reduce the complexity, we will store the value of each computation in a tabular form.

## Bottom-Up Tabularization Approach:

Here, <b>bottom-up approach means to first solve smaller subproblems and then to use the solution of those smaller subproblems to get the solution of larger subproblems.</b>

We will also form a table to obtain the value of C(n, k) whose columns will represent the k-value and rows will represent the n-values. 

<b>C(n,k) returns the number of ways to form an unordered collection of k-items selected from a collection of n-distinct items.</b>

Consider the below table for calculation of C(n, k):

<img src='https://user-images.githubusercontent.com/65852362/142717582-551212e7-2bc2-4a62-9ebe-66c6f236b5d4.png' style='height: 50%; width: 50%'>

Here, if k = 0 or k = n, we will store value '1' in the cell corresponding to that n and k values.

<img src='https://user-images.githubusercontent.com/65852362/142717592-7d210bc6-8494-4dcd-9cb6-2baf79f7a520.png' style='height: 50%; width: 50%'>

Now, for other cells, having n-value as 'i' and k-value as 'j', where <b>j != 0 and j != i</b>, C(i,j) will be the sum of <b>C(i-1, j-1)</b> and <b>C(i-1, j)</b>.

For example, 
```
C(2,1) = C(1,1) + C(2, 0)
C(2, 1) = 1 + 1
C(2, 1) = 2
```
<img src = '(https://user-images.githubusercontent.com/65852362/142717603-5b95a41f-ab49-4347-9210-47ff9aa3d4c4.png' style='height: 50%; width: 50%'>

Similarly, we will compute values for C(3,1), C(3,2), C(4,1), C(4,2), C(4,3), ... till we obtain the value for C(n, k).

You can see in the below table, that it is gradually forming a <b>Pascal's triangle</b>.

<img src = 'https://user-images.githubusercontent.com/65852362/142717613-f2ba9100-6134-41a2-8ea7-e54f28c027c8.png' style='height: 50%; width: 50%'>

The algorithm to represent the above solution will be:

```
Algorithm Binomial(n, k)
for i = 0 to n
    for j = 0 to k
	    if j==0 or j==i 
            then C[i, j] = 1  // IC
	    else 
            C[i, j] = C[i-1, j-1] + C[i-1, j]
    return C[n, k]
```

## Time Complexity Analysis:

The complexity of the above algorithm will be <b>O(n*k)</b> as there the outer for-loop is running from i = 0 to n and the nested for-loop is running from j = 0 to k.

## Implementation in Python:

```Python3
def binomial_coefficient(n, k):
    # initializing the table cells with '0'
	C = [[0 for x in range(k+1)] for x in range(n+1)]

	# Calculating the value of Binomial Coefficient using bottom-up apprach
	for i in range(n+1):
		for j in range(min(i, k)+1):
			# Base Cases
			if j == 0 or j == i:
				C[i][j] = 1

			# Calculating using previously computed values
			else:
				C[i][j] = C[i-1][j-1] + C[i-1][j]

	return C[n][k]


# Input
n = 6
k = 3
print(f"C[{n},{k}] = {binomial_coefficient(n, k)}")
```

### Output:

C[6,3] = 20

#### Thus, in this manner, by storing the values of smaller sub-computations in a tabular form, we can reuse them to obtain the values for larger sub-computation, which will ultimately reduce the complexity.
