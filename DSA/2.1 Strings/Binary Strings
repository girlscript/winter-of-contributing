# Binary Strings

Here we have been given a Binary string and we have to find the largest Prime Number possible by the decimal representation of a subsequence of the given binary string. If no prime number can be obtained, we have to print -1.

**Examples:**

> **Input:**  S = “1001”  
> **Output:**  5  
> **Explanation:** Out of all subsequences of the string “1001”, the largest prime number that can be obtained is “101” (= 5).
> 
> **Input:**  “1011”  
> **Output:** 11  
> **Explanation:**  Out of all subsequences of the string “1011”, the largest prime number that can be obtained is “1011” (= 11).


Follow the steps below to solve this problem:

-   Initializing a  vector of pairs , let  **vec,**  for storing pairs of strings and their equivalent decimal values, in  **Pair.first**  and  **Pair.second**  respectively.
-   Initializing a variable, let  **ans,**  to store the required answer.
-   Iterating a loop from  **i = 0**  to  length of the string  **s:**
    -   Iterating a loop from **j = 0** to the length of  **vec:**
        -   Storing the **jth** pair in **temp.**
        -   If the  **ith**  character of string  **s** is **‘1**‘:
            -   Adding the character in  **temp.first.**
            -   Updating the value of  **temp.second**  by  left shifting the current value and adding  **1** to it.
        -   Otherwise:
            -   Adding the character in  **temp.first.**
            -   Updating the value of  **temp.second**  by  left shifting the current value and adding  **0** to it.
        -   Storing this  **temp**  pair into  **vec**.
        -   If the  **temp.second** is  prime:
            -   Storing max of  **ans**  and  **temp.second**  in  **ans**.
    -   If  **ans**  is equal to  **0**:
        -   No prime number can be obtained from the string  **s**.
    -   Otherwise:
        -   Printing  **ans**.

Implementation of the above approach:

```
// C++ Program to implement the above approach

#include <iostream>
#include <vector>
using namespace std;

// Function to check if a number is prime or not 
bool isPrime(int x)
{
	if (x <= 1)
		return false;

	for (int i = 2; i * i <= x; i++) {
		if (x % i == 0)

			// Return not prime
			return false;
	}

	return true;
}

// Function to find the largest prime number possible from a subsequence
void largestPrime(string s)
{

	// Stores pairs of subsequences and their respective decimal value
	vector<pair<string, int> > vec{ { "", 0 } };

	// Stores the answer
	int ans = 0;

	// Traverse the string
	for (int i = 0; i < s.length(); i++) {
		// Stores the size of the vector
		int n = vec.size();

		// Traverse the vector
		for (int j = 0; j < n; j++) {

			// Extract the current pair
			pair<string, int> temp = vec[j];

			// Get the binary string from the pair
			string str = temp.first;

			// Stores equivalent decimal values
			int val = temp.second;

			// If the current character is '1'
			if (s[i] == '1') {
				// Add the character
				// to the subsequence
				temp.first = str + '1';

// Update the value by left shifting the current value and adding 1 to it
				temp.second = ((val << 1) + 1);
			}
			else {

				// Add the character to the subsequence
				temp.first = str + '0';
// Update the value by left shifting the current value and adding 0 to it
				temp.second = ((val << 1) + 0);
			}

			// Store the subsequence in the vector
			vec.push_back(temp);
// Check if the decimal representation of current subsequence is prime
			int check = temp.second;
			
			// If prime
			if (isPrime(check)) {
				// Update the answer
				// with the largest one
				ans = max(ans, check);
			}
		}
	}

	// If no prime number could be obtained
	if (ans == 0)
		cout << -1 << endl;
	else
		cout << ans << endl;
}

int main()
{
	// Input String
	string s = "110";

	largestPrime(s);

	return 0;
}
```

```
Output:

3
```



_**Time Complexity**: O(2N  * √N), where  **N**  is the length of the string._  
_**Auxiliary Space:** O(2N  * N)_
