# Longest common subsequence in the 2 given sequences
---
In order to find out the complexity of brute force approach, we need to first know the number of possible different subsequences of a string with length n,
i.e., find the number of subsequences with lengths ranging from 1,2,..n-1. Recall from theory of permutation and combination that number of combinations with 1 element are nC1. 
Number of combinations with 2 elements are nC2 and so forth and so on. We know that nC0 + nC1 + nC2 + … nCn = 2n. 
So a string of length n has 2n-1 different possible subsequences since we do not consider the subsequence with length 0. 
This implies that the time complexity of the brute force approach will be O(n * 2n). Note that it takes O(n) time to check if a subsequence is common to both the strings.
This time complexity can be improved using dynamic programming.
It is a classic computer science problem, the basis of diff (a file comparison program that outputs the differences between two files), and has applications in bioinformatics.
The naive solution for this problem is to generate all subsequences of both given sequences and find the longest matching subsequence. 
> **This solution is exponential in term of time complexity. Let us see how this problem possesses both important properties of a Dynamic Programming (DP) Problem.**
**1) Optimal Substructure:** 
Let the input sequences be `X[0..m-1] and Y[0..n-1] of lengths m and n respectively. And let L(X[0..m-1], Y[0..n-1]) be the length of LCS of the two sequences X and Y.
Following is the recursive definition of L(X[0..m-1], Y[0..n-1]).`
If last characters of both sequences match (or X[m-1] == Y[n-1]) then 
L(X[0..m-1], Y[0..n-1]) = 1 + L(X[0..m-2], Y[0..n-2])
If last characters of both sequences do not match (or X[m-1] != Y[n-1]) then 
L(X[0..m-1], Y[0..n-1]) = MAX ( L(X[0..m-2], Y[0..n-1]), L(X[0..m-1], Y[0..n-2]) )

## Examples: 
> 1) Consider the input strings “AGGTAB” and “GXTXAYB”. Last characters match for the strings. So length of LCS can be written as: 
L(“AGGTAB”, “GXTXAYB”) = 1 + L(“AGGTA”, “GXTXAY”) 
![](https://user-images.githubusercontent.com/55615219/136835494-2633f6ae-df5c-4dca-8846-f62251d44c70.png)
> 2) Consider the input strings “ABCDGH” and “AEDFHR. Last characters do not match for the strings. So length of LCS can be written as: 
L(“ABCDGH”, “AEDFHR”) = MAX ( L(“ABCDG”, “AEDFHR”), L(“ABCDGH”, “AEDFH”) )
So the LCS problem has optimal substructure property as the main problem can be solved using solutions to subproblems.
**2) Overlapping Subproblems:**
Following is simple recursive implementation of the LCS problem. The implementation simply follows the recursive structure mentioned above.
> **Java code**
```Java
/* A Naive recursive implementation of LCS problem in java*/
public class LongestCommonSubsequence
{

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs( char[] X, char[] Y, int m, int n )
{
	if (m == 0 || n == 0)
	return 0;
	if (X[m-1] == Y[n-1])
	return 1 + lcs(X, Y, m-1, n-1);
	else
	return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}

/* Utility function to get max of 2 integers */
int max(int a, int b)
{
	return (a > b)? a : b;
}

public static void main(String[] args)
{
	LongestCommonSubsequence lcs = new LongestCommonSubsequence();
	String s1 = "AGGTAB";
	String s2 = "GXTXAYB";

	char[] X=s1.toCharArray();
	char[] Y=s2.toCharArray();
	int m = X.length;
	int n = Y.length;

	System.out.println("Length of LCS is" + " " +
								lcs.lcs( X, Y, m, n ) );
}

}

// This Code is Contributed by Saket Sagar
```
> **C++ Code;**
``` C++
/* A Naive recursive implementation of LCS problem */
#include <bits/stdc++.h>
using namespace std;

int max(int a, int b);

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs( char *X, char *Y, int m, int n )
{
	if (m == 0 || n == 0)
		return 0;
	if (X[m-1] == Y[n-1])
		return 1 + lcs(X, Y, m-1, n-1);
	else
		return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}

/* Utility function to get max of 2 integers */
int max(int a, int b)
{
	return (a > b)? a : b;
}

/* Driver code */
int main()
{
	char X[] = "AGGTAB";
	char Y[] = "GXTXAYB";
	
	int m = strlen(X);
	int n = strlen(Y);
	
	cout<<"Length of LCS is "<< lcs( X, Y, m, n ) ;
	
	return 0;
}
```
> **C Code;**
``` C 
/* A Naive recursive implementation of LCS problem */
#include<bits/stdc++.h>

int max(int a, int b);

/* Returns length of LCS for X[0..m-1], Y[0..n-1] */
int lcs( char *X, char *Y, int m, int n )
{
if (m == 0 || n == 0)
	return 0;
if (X[m-1] == Y[n-1])
	return 1 + lcs(X, Y, m-1, n-1);
else
	return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));
}

/* Utility function to get max of 2 integers */
int max(int a, int b)
{
	return (a > b)? a : b;
}

/* Driver program to test above function */
int main()
{
char X[] = "AGGTAB";
char Y[] = "GXTXAYB";

int m = strlen(X);
int n = strlen(Y);

printf("Length of LCS is %d", lcs( X, Y, m, n ) );

return 0;
}
```
> **Python Code;**
``` Python
# A Naive recursive Python implementation of LCS problem

def lcs(X, Y, m, n):

	if m == 0 or n == 0:
	return 0;
	elif X[m-1] == Y[n-1]:
	return 1 + lcs(X, Y, m-1, n-1);
	else:
	return max(lcs(X, Y, m, n-1), lcs(X, Y, m-1, n));


# Driver program to test the above function
X = "AGGTAB"
Y = "GXTXAYB"
print "Length of LCS is ", lcs(X , Y, len(X), len(Y))
```
> **PHP**
```PHP
<?php
// A Naive recursive PHP
// implementation of LCS problem
function lcs($X, $Y, $m, $n)
{
	if($m == 0 || $n == 0)
	return 0;
	else if ($X[$m - 1] == $Y[$n - 1])
		return 1 + lcs($X, $Y,
					$m - 1, $n - 1);
	else
		return max(lcs($X, $Y, $m, $n - 1),
				lcs($X, $Y, $m - 1, $n));
}

// Driver Code
$X = "AGGTAB";
$Y = "GXTXAYB";
echo "Length of LCS is ";
echo lcs($X , $Y, strlen($X),
				strlen($Y));
?>
```
