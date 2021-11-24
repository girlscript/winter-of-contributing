# Babylonian_Method

## What is the Babylonian method for finding square root?

The iterative method is called the Babylonian method for finding square roots, or sometimes Hero's method.

## How does the Babylonian method work?
The (Babylonian, Greek, or Indian; take your pick!) method itself is very simple: if you want to calculate √p, choose any initial value as your first guess, call it x, and then iterate by repeatedly finding a new value for x according to the following formula.
Algorithm: 

Now we will see that method can be derived from Newton–Raphson method. 
 
```

1 First we Start with an arbitrary positive start value x (the closer to the 
   root, the better).
   
2 Then Initialize y = 1.

3. now we Do following until desired approximation is achieved.
  a) Get the next approximation for root using average of x and y
  b) Set y = n/x

```
## Implementation of codes: 
 
 ```
 
 #include <iostream>
using namespace std;
class gfg {
	
public:
	float squareRoot(float n)
	{
		/*Here we are using n itself as initial approximation
		This can definitely be improved */
		float x = n;
		float y = 1;
		float e = 0.000001; /* here the e decides the accuracy level*/
		while (x - y > e) {
			x = (x + y) / 2;
			y = n / x;
		}
		return x;
	}
};

/* Now we Require Driver program to test  */
int main()
{
	gfg g;
	int n = 50;
	cout << "Square root of " << n << " is " << g.squareRoot(n);
	getchar();
}

```

### Here we wil observe that  

## Output : 

```

Square root of 50 is 7.071068

```

Time Complexity: O(n1/2)
Auxiliary Space: O(1)

## Now we will take an Example:

```

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

```

If we are sure that n is a perfect square, then we can implement the following method. The method can go in infinite loop for non-perfect-square numbers. For example, for 3 the below while loop will never terminate. 

From here we will see the C++ program

```

#include <iostream>
using namespace std;

class gfg {

	
public:
	float squareRoot(float n)
	{
		/* We are using n  as an initial
		approximation. This can  be
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

```

## Output : 
 
```

 root of 49 is 7
 
 ```
## Time Complexity: O(n1/2)

## Auxiliary Space: O(1)

### References; 
http://en.wikipedia.org/wiki/Square_root 
http://en.wikipedia.org/wiki/Babylonian_method#Babylonian_method
