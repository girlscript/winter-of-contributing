#include<iostream>
using namespace std;

#define N 500

int multiply(int x, int ans[], int size);

// This function finds factorial of large numbers and prints them
void factorial(int n)
{
	int ans[N];

	// Initialize result
	ans[0] = 1;
	int size = 1;

	// Apply simple factorial formula n! = 1 * 2 * 3 * 4...*n
	for (int x=2; x<=n; x++)
		size = multiply(x, ans, size);

	cout << "Factorial of given number is \n";
	for (int i=size-1; i>=0; i--)
		cout << ans[i];
}
//multiplying N with each digit of ans array and increasing the size of the array
int multiply(int x, int ans[], int size)
{
	int carry = 0; // Initialize carry

	//multiplying N with each digit of ans array
	for (int i=0; i<size; i++)
	{
		int prod = ans[i] * x + carry;

		// Store last digit of 'prod' in ans[]
		ans[i] = prod % 10;

		// Put rest in carry
		carry = prod/10;
	}

	// Put carry in res and increase result size
	while (carry)
	{
		ans[size] = carry%10;
		carry = carry/10;
		size++;
	}
	return size;
}

// Driver program
int main()
{
	factorial(100);
	return 0;
}
