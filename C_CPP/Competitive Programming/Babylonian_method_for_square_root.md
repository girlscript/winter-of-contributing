What is the Babylonian method for finding square root?

The iterative method is called the Babylonian method for finding square roots, or sometimes Hero's method.

How does the Babylonian method work?
The (Babylonian, Greek, or Indian; take your pick!) method itself is very simple: if you want to calculate √p, choose any initial value as your first guess, call it x, and then iterate by repeatedly finding a new value for x according to the following formula.
Algorithm: 
This method can be derived from (but predates) Newton–Raphson method. 
 

1 Start with an arbitrary positive start value x (the closer to the 
   root, the better).
2 Initialize y = 1.
3. Do following until desired approximation is achieved.
  a) Get the next approximation for root using average of x and y
  b) Set y = n/x
Implementation: 
 
 #include <iostream>
using namespace std;
class gfg {
	/*Returns the square root of n. Note that the function */
public:
	float squareRoot(float n)
	{
		/*We are using n itself as initial approximation
		This can definitely be improved */
		float x = n;
		float y = 1;
		float e = 0.000001; /* e decides the accuracy level*/
		while (x - y > e) {
			x = (x + y) / 2;
			y = n / x;
		}
		return x;
	}
};

/* Driver program to test above function*/
int main()
{
	gfg g;
	int n = 50;
	cout << "Square root of " << n << " is " << g.squareRoot(n);
	getchar();
}

Output : 

Square root of 50 is 7.071068
Time Complexity: O(n1/2)
Auxiliary Space: O(1)
Example:

n = 4 /*n itself is used for initial approximation*/
Initialize x = 4, y = 1
Next Approximation x = (x + y)/2 (= 2.500000), 
y = n/x  (=1.600000)
Next Approximation x = 2.050000,
y = 1.951220
Next Approximation x = 2.000610,
y = 1.999390
Next Approximation x = 2.000000, 
y = 2.000000
Terminate as (x - y) > e now.
If we are sure that n is a perfect square, then we can use following method. The method can go in infinite loop for non-perfect-square numbers. For example, for 3 the below while loop will never terminate. 
 // C++ program for Babylonian
// method for square root
#include <iostream>
using namespace std;

class gfg {

	/* Returns the square root of
n. Note that the function
will not work for numbers
which are not perfect
squares*/
public:
	float squareRoot(float n)
	{
		/* We are using n itself as an initial
		approximation. This can definitely be
		improved */
		float x = n;
		float y = 1;

		while (x > y) {
			x = (x + y) / 2;
			y = n / x;
		}
		return x;
	}
};

/* Driver code*/
int main()
{
	gfg g;
	int n = 49;
	cout << "Square root of " << n << " is " << g.squareRoot(n);
	getchar();
}

// This code is edited by Dark_Dante_
Output : 
 

 root of 49 is 7
Time Complexity: O(n1/2)

Auxiliary Space: O(1)
References; 
http://en.wikipedia.org/wiki/Square_root 
http://en.wikipedia.org/wiki/Babylonian_method#Babylonian_method