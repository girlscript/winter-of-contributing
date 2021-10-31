# Technical Interview - Arrays and Strings 
## Arrays
## Program to cyclically rotate an array by one
- Given an array, cyclically rotate the array clockwise by one. <br>
**Input:  arr[] = {1, 2, 3, 4, 5}** <br>
**Output: arr[] = {5, 1, 2, 3, 4}** <br>
- Following are steps :- 
1) Store last element in a variable say x. 
2) Shift all elements one position ahead. 
3) Replace first element of array with x.
### C++ Code :- 
```C++
// C++ code for program
// to cyclically rotate
// an array by one
# include <iostream>
using namespace std;

void rotate(int arr[], int n)
{
	int x = arr[n - 1], i;
	for (i = n - 1; i > 0; i--)
	arr[i] = arr[i - 1];
	arr[0] = x;
}

// Driver code
int main()
{
	int arr[] = {1, 2, 3, 4, 5}, i;
	int n = sizeof(arr) /
			sizeof(arr[0]);

	cout << "Given array is \n";
	for (i = 0; i < n; i++)
		cout << arr[i] << ' ';

	rotate(arr, n);

	cout << "\nRotated array is\n";
	for (i = 0; i < n; i++)
		cout << arr[i] << ' ';

	return 0;
}

// This code is contributed by jit_t
```
### Java Code :- 
```Java
import java.util.Arrays;

public class Test
{
	static int arr[] = new int[]{1, 2, 3, 4, 5};
	
	// Method for rotation
	static void rotate()
	{
	int x = arr[arr.length-1], i;
	for (i = arr.length-1; i > 0; i--)
		arr[i] = arr[i-1];
	arr[0] = x;
	}
	
	/* Driver program */
	public static void main(String[] args)
	{
		System.out.println("Given Array is");
		System.out.println(Arrays.toString(arr));
		
		rotate();
		
		System.out.println("Rotated Array is");
		System.out.println(Arrays.toString(arr));
	}
}
```
**Output** <br>
Given array is <br>
`1 2 3 4 5` <br>

Rotated array is <br>
`5 1 2 3 4` <br>
- Time Complexity: O(n) As we need to iterate through all the elements 
- Auxiliary Space: O(1)
## Given a sorted and rotated array, find if there is a pair with a given sum
- Given an array that is sorted and then rotated around an unknown point. Find if the array has a pair with a given sum ‘x’. It may be assumed that all elements in the array
are distinct. <br>

Input: arr[] = {11, 15, 6, 8, 9, 10}, x = 16 <br>
Output: true <br>
There is a pair (6, 10) with sum 16 <br>

Input: arr[] = {11, 15, 26, 38, 9, 10}, x = 35 <br>
Output: true <br>
There is a pair (26, 9) with sum 35 <br>

Input: arr[] = {11, 15, 26, 38, 9, 10}, x = 45 <br>
Output: false <br>
There is no pair with sum 45. <br>
### C++ Code :- 
```C++
// C++ program to find a pair with a given sum in a sorted and
// rotated array
#include<iostream>
using namespace std;

// This function returns true if arr[0..n-1] has a pair
// with sum equals to x.
bool pairInSortedRotated(int arr[], int n, int x)
{
	// Find the pivot element
	int i;
	for (i=0; i<n-1; i++)
		if (arr[i] > arr[i+1])
			break;
	int l = (i+1)%n; // l is now index of smallest element
	int r = i;	 // r is now index of largest element

	// Keep moving either l or r till they meet
	while (l != r)
	{
		// If we find a pair with sum x, we return true
		if (arr[l] + arr[r] == x)
			return true;

		// If current pair sum is less, move to the higher sum
		if (arr[l] + arr[r] < x)
			l = (l + 1)%n;
		else // Move to the lower sum side
			r = (n + r - 1)%n;
	}
	return false;
}

/* Driver program to test above function */
int main()
{
	int arr[] = {11, 15, 6, 8, 9, 10};
	int sum = 16;
	int n = sizeof(arr)/sizeof(arr[0]);

	if (pairInSortedRotated(arr, n, sum))
		cout << "Array has two elements with sum 16";
	else
		cout << "Array doesn't have two elements with sum 16 ";

	return 0;
}
```
### Java Code :- 
```Java
// Java program to find a pair with a given
// sum in a sorted and rotated array
class PairInSortedRotated
{
	// This function returns true if arr[0..n-1]
	// has a pair with sum equals to x.
	static boolean pairInSortedRotated(int arr[],
									int n, int x)
	{
		// Find the pivot element
		int i;
		for (i = 0; i < n - 1; i++)
			if (arr[i] > arr[i+1])
				break;
				
		int l = (i + 1) % n; // l is now index of										
							// smallest element
						
		int r = i;	 // r is now index of largest
						//element
	
		// Keep moving either l or r till they meet
		while (l != r)
		{
			// If we find a pair with sum x, we
			// return true
			if (arr[l] + arr[r] == x)
				return true;
	
			// If current pair sum is less, move
			// to the higher sum
			if (arr[l] + arr[r] < x)
				l = (l + 1) % n;
				
			else // Move to the lower sum side
				r = (n + r - 1) % n;
		}
		return false;
	}

	/* Driver program to test above function */
	public static void main (String[] args)
	{
		int arr[] = {11, 15, 6, 8, 9, 10};
		int sum = 16;
		int n = arr.length;
	
		if (pairInSortedRotated(arr, n, sum))
			System.out.print("Array has two elements" +
							" with sum 16");
		else
			System.out.print("Array doesn't have two" +
							" elements with sum 16 ");
	}
}
```
**Output :** <br>
- Array has two elements with sum 16
- The time complexity of the above solution is O(n). 
- The step to find the pivot can be optimized to O(Logn) using the Binary Search approach

## Block swap algorithm for array rotation
- Write a function rotate(ar[], d, n) that rotates arr[] of size n by d elements. <br>
![Array1](https://user-images.githubusercontent.com/55615219/139572795-e6feeb2c-f0a2-4841-a9f1-795efa91bbe3.gif)
- Rotation of the above array by 2 will make array <br>
![ArrayRotation1](https://user-images.githubusercontent.com/55615219/139572813-ace2b5a0-10dd-4bd9-b9f0-4b7dcf0a3021.gif)
### Algorithm : 

**Initialize A = arr[0..d-1] and B = arr[d..n-1]** <br>
**1) Do following until size of A is equal to size of B** <br>

  a)  If A is shorter, divide B into Bl and Br such that Br is of same 
       length as A. Swap A and Br to change ABlBr into BrBlA. Now A
       is at its final place, so recur on pieces of B.  

   b)  If A is longer, divide A into Al and Ar such that Al is of same 
       length as B Swap Al and B to change AlArB into BArAl. Now B
       is at its final place, so recur on pieces of A.

**2)  Finally when A and B are of equal size, block swap them.** <br>
### Recursive Implementation:
### C++ Code :- 
```C++
#include <bits/stdc++.h>
using namespace std;

/*Prototype for utility functions */
void printArray(int arr[], int size);
void swap(int arr[], int fi, int si, int d);

void leftRotate(int arr[], int d, int n)
{
	/* Return If number of elements to be rotated
	is zero or equal to array size */
	if(d == 0 || d == n)
		return;
		
	/*If number of elements to be rotated
	is exactly half of array size */
	if(n - d == d)
	{
		swap(arr, 0, n - d, d);
		return;
	}
		
	/* If A is shorter*/	
	if(d < n - d)
	{
		swap(arr, 0, n - d, d);
		leftRotate(arr, d, n - d);	
	}
	else /* If B is shorter*/	
	{
		swap(arr, 0, d, n - d);
		leftRotate(arr + n - d, 2 * d - n, d); /*This is tricky*/
	}
}

/*UTILITY FUNCTIONS*/
/* function to print an array */
void printArray(int arr[], int size)
{
	int i;
	for(i = 0; i < size; i++)
		cout << arr[i] << " ";
	cout << endl;
}

/*This function swaps d elements starting at index fi
with d elements starting at index si */
void swap(int arr[], int fi, int si, int d)
{
	int i, temp;
	for(i = 0; i < d; i++)
	{
		temp = arr[fi + i];
		arr[fi + i] = arr[si + i];
		arr[si + i] = temp;
	}
}

// Driver Code
int main()
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	leftRotate(arr, 2, 7);
	printArray(arr, 7);
	return 0;
}
```
### Java Code :- 
```Java
import java.util.*;

class GFG
{
	// Wrapper over the recursive function leftRotateRec()
	// It left rotates arr[] by d.
	public static void leftRotate(int arr[], int d,
												int n)
	{
		leftRotateRec(arr, 0, d, n);
	}

	public static void leftRotateRec(int arr[], int i,
								int d, int n)
	{
		/* Return If number of elements to be rotated
		is zero or equal to array size */
		if(d == 0 || d == n)
			return;
		
		/*If number of elements to be rotated
		is exactly half of array size */
		if(n - d == d)
		{
			swap(arr, i, n - d + i, d);
			return;
		}
		
		/* If A is shorter*/
		if(d < n - d)
		{
			swap(arr, i, n - d + i, d);
			leftRotateRec(arr, i, d, n - d);	
		}
		else /* If B is shorter*/
		{
			swap(arr, i, d, n - d);
			leftRotateRec(arr, n - d + i, 2 * d - n, d); /*This is tricky*/
		}
	}

/*UTILITY FUNCTIONS*/
/* function to print an array */
public static void printArray(int arr[], int size)
{
	int i;
	for(i = 0; i < size; i++)
		System.out.print(arr[i] + " ");
	System.out.println();
}

/*This function swaps d elements
starting at index fi with d elements
starting at index si */
public static void swap(int arr[], int fi,
						int si, int d)
{
	int i, temp;
	for(i = 0; i < d; i++)
	{
		temp = arr[fi + i];
		arr[fi + i] = arr[si + i];
		arr[si + i] = temp;
	}
}

// Driver Code
public static void main (String[] args)
{
	int arr[] = {1, 2, 3, 4, 5, 6, 7};
	leftRotate(arr, 2, 7);
	printArray(arr, 7);	
}
}
```
**Output**
`3 4 5 6 7 1 2`
### Iterative Implementation: 
### C++ Code :- 
```C++
// C++ code for above implementation
void leftRotate(int arr[], int d, int n)
{
	int i, j;
	if (d == 0 || d == n)
		return;
		
	i = d;
	j = n - d;
	while (i != j)
	{
		if (i < j) /*A is shorter*/
		{
			swap(arr, d - i, d + j - i, i);
			j -= i;
		}
		else /*B is shorter*/
		{
			swap(arr, d - i, d, j);
			i -= j;
		}
		
		// printArray(arr, 7);
	}
	
	/*Finally, block swap A and B*/
	swap(arr, d - i, d, i);
}
```
### Java Code :- 
```Java
//Java code for above implementation
static void leftRotate(int arr[], int d, int n)
{
int i, j;
if(d == 0 || d == n)
	return;
i = d;
j = n - d;
while (i != j)
{
	if(i < j) /*A is shorter*/
	{
	swap(arr, d-i, d+j-i, i);
	j -= i;
	}
	else /*B is shorter*/
	{
	swap(arr, d-i, d, j);
	i -= j;
	}
	// printArray(arr, 7);
}
/*Finally, block swap A and B*/
swap(arr, d-i, d, i);
}
```
- Time Complexity: O(n)

## Reverse digits of an integer with overflow handled
- Write a program to reverse an integer assuming that the input is a 32-bit integer. If the reversed integer overflows, print -1 as the output.
### C++ Code :- 
```C++
// A simple C program to reverse digits of
// an integer.
#include <stdio.h>

int reversDigits(int num)
{
	int rev_num = 0;
	while (num > 0)
	{
		rev_num = rev_num*10 + num%10;
		num = num/10;
	}
	return rev_num;
}

/* Driver program to test reversDigits */
int main()
{
	int num = 5896;
	printf("Reverse of no. is %d", reversDigits(num));
	return 0;
}
```
### Java Code :- 
```Java
// Java program to reverse a number

class GFG
{
	/* Iterative function to reverse
	digits of num*/
	static int reversDigits(int num)
	{
		int rev_num = 0;
		while(num > 0)
		{
			rev_num = rev_num * 10 + num % 10;
			num = num / 10;
		}
		return rev_num;
	}
	
	// Driver code
	public static void main (String[] args)
	{
		int num = 4562;
		System.out.println("Reverse of no. is "
						+ reversDigits(num));
	}
}
```
**Output:** <br>
`6985`
- However, if the number is large such that the reverse overflows, the output is some garbage value. If we run the code above with input as any large number say 1000000045,
then the output is some garbage value like 1105032705 or any other garbage value. 

How to handle overflow? 
The idea is to store previous value of the sum can be stored in a variable which can be checked every time to see if the reverse overflowed or not.
Below is the implementation to deal with such a situation.
### C++ Code :- 
```C++
// C++ program to reverse digits
// of a number
#include <bits/stdc++.h>

using namespace std;

/* Iterative function to reverse
digits of num*/
int reversDigits(int num)
{
	// Handling negative numbers
	bool negativeFlag = false;
	if (num < 0)
	{
		negativeFlag = true;
		num = -num ;
	}

	int prev_rev_num = 0, rev_num = 0;
	while (num != 0)
	{
		int curr_digit = num % 10;

		rev_num = (rev_num * 10) + curr_digit;

		// checking if the reverse overflowed or not.
		// The values of (rev_num - curr_digit)/10 and
		// prev_rev_num must be same if there was no
		// problem.
		if ((rev_num - curr_digit) /
			10 != prev_rev_num)
		{
			cout << "WARNING OVERFLOWED!!!"
				<< endl;
			return 0;
		}

		prev_rev_num = rev_num;
		num = num / 10;
	}

	return (negativeFlag == true) ?
						-rev_num : rev_num;
}

// Driver Code
int main()
{
	int num = 12345;
	cout << "Reverse of no. is "
		<< reversDigits(num) << endl;

	num = 1000000045;
	cout << "Reverse of no. is "
		<< reversDigits(num) << endl;

	return 0;
}
```
### Java Code :- 
```Java
// Java program to reverse digits of a number

class ReverseDigits
{
	/* Iterative function to reverse digits of num*/
	static int reversDigits(int num)
	{
		// Handling negative numbers
		boolean negativeFlag = false;
		if (num < 0)
		{
			negativeFlag = true;
			num = -num ;
		}
	
		int prev_rev_num = 0, rev_num = 0;
		while (num != 0)
		{
			int curr_digit = num%10;
	
			rev_num = (rev_num*10) + curr_digit;
	
			// checking if the reverse overflowed or not.
			// The values of (rev_num - curr_digit)/10 and
			// prev_rev_num must be same if there was no
			// problem.
			if ((rev_num - curr_digit)/10 != prev_rev_num)
			{
				System.out.println("WARNING OVERFLOWED!!!");
				return 0;
			}
	
			prev_rev_num = rev_num;
			num = num/10;
		}
	
		return (negativeFlag == true)? -rev_num : rev_num;
	}
	
	public static void main (String[] args)
	{
		int num = 12345;
		System.out.println("Reverse of no. is " + reversDigits(num));
	
		num = 1000000045;
		System.out.println("Reverse of no. is " + reversDigits(num));
	}
}
```
- Output: 
Reverse of no. is 54321
WARNING OVERFLOWED!!!
Reverse of no. is 0
## Maximum profit by buying and selling a share at most k times
- In share trading, a buyer buys shares and sells on a future date. Given the stock price of n days, the trader is allowed to make at most k transactions, where a new
transaction can only start after the previous transaction is complete, find out the maximum profit that a share trader could have made. 
**Examples:**
Input:  
Price = [10, 22, 5, 75, 65, 80]
    K = 2
Output:  87
Trader earns 87 as sum of 12 and 75
Buy at price 10, sell at 22, buy at 
5 and sell at 80

Input:  
Price = [12, 14, 17, 10, 14, 13, 12, 15]
    K = 3
Output:  12
Trader earns 12 as the sum of 5, 4 and 3
Buy at price 12, sell at 17, buy at 10 
and sell at 14 and buy at 12 and sell
at 15
 
Input:  
Price = [100, 30, 15, 10, 8, 25, 80]
    K = 3
Output:  72
Only one transaction. Buy at price 8 
and sell at 80.

Input:  
Price = [90, 80, 70, 60, 50]
    K = 1
Output:  0
Not possible to earn. 

-  The problem can be solved by using dynamic programming. 
Let profit[t][i] represent maximum profit using at most t transactions up to day i (including day i). Then the relation is:
profit[t][i] = max(profit[t][i-1], max(price[i] – price[j] + profit[t-1][j])) 
          for all j in range [0, i-1] 
profit[t][i] will be maximum of – 

- profit[t][i-1] which represents not doing any transaction on the ith day.
- Maximum profit gained by selling on ith day. In order to sell shares on ith day, we need to purchase it on any one of [0, i – 1] days. If we buy shares on jth day and sell
it on ith day, max profit will be price[i] – price[j] + profit[t-1][j] where j varies from 0 to i-1. Here profit[t-1][j] is best we could have done with one less transaction
till jth day.

**Below is Dynamic Programming based implementation.** <br>
### C++ Code :- 
```C++
// C++ program to find out maximum profit by
// buying and selling a share atmost k times
// given stock price of n days
#include <climits>
#include <iostream>
using namespace std;

// Function to find out maximum profit by buying
// & selling a share atmost k times given stock
// price of n days
int maxProfit(int price[], int n, int k)
{
	// table to store results of subproblems
	// profit[t][i] stores maximum profit using
	// atmost t transactions up to day i (including
	// day i)
	int profit[k + 1][n + 1];

	// For day 0, you can't earn money
	// irrespective of how many times you trade
	for (int i = 0; i <= k; i++)
		profit[i][0] = 0;

	// profit is 0 if we don't do any transaction
	// (i.e. k =0)
	for (int j = 0; j <= n; j++)
		profit[0][j] = 0;

	// fill the table in bottom-up fashion
	for (int i = 1; i <= k; i++) {
		for (int j = 1; j < n; j++) {
			int max_so_far = INT_MIN;

			for (int m = 0; m < j; m++)
				max_so_far = max(max_so_far,
								price[j] - price[m] + profit[i - 1][m]);

			profit[i][j] = max(profit[i][j - 1], max_so_far);
		}
	}

	return profit[k][n - 1];
}

// Driver code
int main()
{
	int k = 2;
	int price[] = { 10, 22, 5, 75, 65, 80 };
	int n = sizeof(price) / sizeof(price[0]);

	cout << "Maximum profit is: "
		<< maxProfit(price, n, k);

	return 0;
}
```
### Java Code :- 
```Java
// Java program to find out maximum
// profit by buying and selling a
// share atmost k times given
// stock price of n days

class GFG {
	
	// Function to find out
	// maximum profit by
	// buying & selling a
	// share atmost k times
	// given stock price of n days
	static int maxProfit(int[] price,
						int n,
						int k)
	{
		
		// table to store results
		// of subproblems
		// profit[t][i] stores
		// maximum profit using
		// atmost t transactions up
		// to day i (including day i)
		int[][] profit = new int[k + 1][n + 1];

		// For day 0, you can't
		// earn money irrespective
		// of how many times you trade
		for (int i = 0; i <= k; i++)
			profit[i][0] = 0;

		// profit is 0 if we don't
		// do any transaction
		// (i.e. k =0)
		for (int j = 0; j <= n; j++)
			profit[0][j] = 0;

		// fill the table in
		// bottom-up fashion
		for (int i = 1; i <= k; i++)
		{
			for (int j = 1; j < n; j++)
			{
				int max_so_far = 0;

				for (int m = 0; m < j; m++)
				max_so_far = Math.max(max_so_far, price[j] -
							price[m] + profit[i - 1][m]);

				profit[i][j] = Math.max(profit[i] [j - 1],
											max_so_far);
			}
		}

		return profit[k][n - 1];
	}

	// Driver code
	public static void main(String []args)
	{
		int k = 2;
		int[] price = { 10, 22, 5, 75, 65, 80 };
		int n = price.length;
		System.out.println("Maximum profit is: " +
							maxProfit(price, n, k));
	}
}
```
**Output :** <br>
Maximum profit is: 87 <br>
**Optimized Solution:** <br>
The above solution has time complexity of O(k.n2). It can be reduced if we are able to calculate the maximum profit gained by selling shares on the ith day in constant time.
profit[t][i] = max(profit [t][i-1], max(price[i] – price[j] + profit[t-1][j])) 
                            for all j in range [0, i-1]
If we carefully notice, 
max(price[i] – price[j] + profit[t-1][j]) 
for all j in range [0, i-1]
can be rewritten as, 
= price[i] + max(profit[t-1][j] – price[j]) 
for all j in range [0, i-1] 
= price[i] + max(prevDiff, profit[t-1][i-1] – price[i-1]) 
where prevDiff is max(profit[t-1][j] – price[j]) 
for all j in range [0, i-2]
So, if we have already calculated max(profit[t-1][j] – price[j]) for all j in range [0, i-2], we can calculate it for j = i – 1 in constant time. In other words, we don’t have
to look back in the range [0, i-1] anymore to find out best day to buy. We can determine that in constant time using below revised relation.
profit[t][i] = max(profit[t][i-1], price[i] + max(prevDiff, profit [t-1][i-1] – price[i-1]) 
where prevDiff is max(profit[t-1][j] – price[j]) for all j in range [0, i-2]

### C++ Code :- 
```C++
// C++ program to find out maximum profit by buying
// and/ selling a share atmost k times given stock
// price of n days
#include <climits>
#include <iostream>
using namespace std;

// Function to find out maximum profit by buying &
// selling/ a share atmost k times given stock price
// of n days
int maxProfit(int price[], int n, int k)
{
	// table to store results of subproblems
	// profit[t][i] stores maximum profit using atmost
	// t transactions up to day i (including day i)
	int profit[k + 1][n + 1];

	// For day 0, you can't earn money
	// irrespective of how many times you trade
	for (int i = 0; i <= k; i++)
		profit[i][0] = 0;

	// profit is 0 if we don't do any transaction
	// (i.e. k =0)
	for (int j = 0; j <= n; j++)
		profit[0][j] = 0;

	// fill the table in bottom-up fashion
	for (int i = 1; i <= k; i++) {
		int prevDiff = INT_MIN;
		for (int j = 1; j < n; j++) {
			prevDiff = max(prevDiff,
						profit[i - 1][j - 1] - price[j - 1]);
			profit[i][j] = max(profit[i][j - 1],
							price[j] + prevDiff);
		}
	}

	return profit[k][n - 1];
}

// Driver Code
int main()
{
	int k = 3;
	int price[] = { 12, 14, 17, 10, 14, 13, 12, 15 };

	int n = sizeof(price) / sizeof(price[0]);

	cout << "Maximum profit is: "
		<< maxProfit(price, n, k);

	return 0;
}
```
### Java Code :- 
```Java
// Java program to find out maximum
// profit by buying and selling a
// share atmost k times given stock
// price of n days
import java.io.*;

class GFG {
	
	// Function to find out maximum profit by
	// buying & selling/ a share atmost k times
	// given stock price of n days
	static int maxProfit(int price[],
						int n, int k)
	{
		
		// table to store results of subproblems
		// profit[t][i] stores maximum profit
		// using atmost t transactions up to day
		// i (including day i)
		int profit[][] = new int[k + 1][ n + 1];

		// For day 0, you can't earn money
		// irrespective of how many times you trade
		for (int i = 0; i <= k; i++)
			profit[i][0] = 0;

		// profit is 0 if we don't do any
		// transaction (i.e. k =0)
		for (int j = 0; j <= n; j++)
			profit[0][j] = 0;

		// fill the table in bottom-up fashion
		for (int i = 1; i <= k; i++)
		{
			int prevDiff = Integer.MIN_VALUE;
			for (int j = 1; j < n; j++)
			{
				prevDiff = Math.max(prevDiff,
						profit[i - 1][j - 1] -
						price[j - 1]);
				profit[i][j] = Math.max(profit[i][j - 1],
							price[j] + prevDiff);
			}
		}

		return profit[k][n - 1];
	}

// Driver code
public static void main (String[] args)
	{
		int k = 3;
		int price[] = {12, 14, 17, 10, 14, 13, 12, 15};

		int n = price.length;

		System.out.println("Maximum profit is: " +
							maxProfit(price, n, k));
	}
}
```
**Output :** <br>
Maximum profit is: 12 <br>
- The time complexity of the above solution is O(kn) and space complexity is O(nk). Space complexity can further be reduced to O(n) as we use the result from the last
transaction. But to make the article easily readable, we have used O(kn) space.








