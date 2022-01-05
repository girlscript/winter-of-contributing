# Euclid Algorithm for calculation of GCD

The Greatest Common Divisor(GCD) of two numbers is the largest number that divides 
both of them.
The basic way to calculate the GCD is to calculate all the factors of the given numbers then multiply the common prime factors of them.

## EXAMPLE 1 :
12 = 2 x 3 x 3
16 = 2 x 2 x 2 x 2

### Algorithm for Euclidean Method of GCD :

If we keep reducing the smaller number from the bigger number, we end up with GCD.
If we divide the smaller number, the algorithm stops when we find the remainder 0.

#### Below is the implementation of the above algorithm in JAVA

```java
import java.util.Scanner;

public class eulid_algorithm_documentation {

	public static void main(String[] args) {
		//Creating the Scanner object for taking input
		Scanner sc = new Scanner(System.in);
		System.out.println("Enter the two Numbers");
		int a = sc.nextInt();
		int b = sc.nextInt();
		int answer = gcd(a, b);
		System.out.println("The GCD of " + a + " and " + b + " is " + answer);

	}

	public static int gcd(int num1, int num2) {
		if (num1 == 0)
			return num2;

		return gcd(num2 % num1, num1);
	}

}

```

   #####  Sample Input and Output :
        
    Enter the two Numbers
    12 16
    The GCD of 12 and 16 is 4

  ###### Time Complexity :

  ```O(Log min(a, b))```

