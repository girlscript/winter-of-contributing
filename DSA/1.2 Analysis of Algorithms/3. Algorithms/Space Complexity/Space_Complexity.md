# What is Space Complexity

Space complexity is the amount of memory used by the algorithm (including the input values to the algorithm) to execute and produce the result.
Sometime Auxiliary Space is confused with Space Complexity. But Auxiliary Space is the extra space or the temporary space used by the algorithm during it's execution.

Space Complexity = Auxiliary Space + Input space

# Why do you need to calculate space complexity?

Just like Time Complexity, Space-complexity also plays a crucial role in determining the efficiency of an algorithm/program. If an algorithm takes up a lot of time, you can still wait, run/execute it to get the desired output. But, if a program takes up a lot of memory space, the compiler will not let you run it.

# Examples of expressing space complexity using big-O notation.

1. O(1) – constant complexity – takes the same amount of space regardless of the input size
2. O(log n) – logarithmic complexity – takes space proportional to the log of the input size
3. O(n) – linear complexity – takes space directly proportional to the input size
4. O(n log n) – log-linear/quasilinear complexity – also called “linearithmic”, its space complexity grows proportionally to the input size and a logarithmic factor
5. O(n^2) – square/polynomial complexity – space complexity grows proportionally to the square of the input size

# Let's understand with the help of example

consider a simple Java operation that sums two integers.


package gwoc;

public class Space_Complexity {

	public static int sum(int a, int b) {
	    return a + b;
	}
	public static void main(String [] args) {
		System.out.println(sum(4,5));
	}
	
}

Output for this code is :
9

## Explanation :

In this particular method, three variables are used and allocated in memory:

1. the first int argument, a
2. the second int argument, b
3. the returned sum result which is also an int like a and b

In Java, a single integer variable occupies four bytes of memory. In this example, we have three integer variables. Therefore, this algorithm always takes 12 bytes of memory to complete (3*4 bytes).

We can clearly see that the space complexity is constant, so, it can be expressed in big-O notation as O(1).
