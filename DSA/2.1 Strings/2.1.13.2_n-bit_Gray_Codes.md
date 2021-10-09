## n-bit Gray Codes

An n-bit gray code sequence is a sequence of 2n integers where:
* Every integer is in the inclusive range [0, 2^n - 1],
* The first integer is 0,
* An integer appears no more than once in the sequence,
* The binary representation of every pair of adjacent integers differs by exactly one bit, and
* The binary representation of the first and last integers differs by exactly one bit

## How to generate n-bit Gray code?

The prefix and reflect method are recursively used to generate the Gray code of a number. For generating gray code:

* We find the number of bits required to represent a number.
* Next, we find the code for 0, i.e., 0000, which is the same as binary.
* Now, we take the previous code, i.e., 0000, and change the most significant bit of it.
* We perform this process reclusively until all the codes are not uniquely identified.
* If by changing the most significant bit, we find the same code obtained previously, then the second most significant bit will be changed, and so on.

<p>
   <img src = "https://static.javatpoint.com/tutorial/digital-electronics/images/gray-code.png" widht = "600" height = "300">
</p>

   Image Source:- [Javatpoint](https://www.javatpoint.com/gray-code-in-digital-electronics)
   
Therefore, Gray codes are as follows:-

![Screenshot from 2021-10-09 19-43-50](https://user-images.githubusercontent.com/52233275/136661628-90fb86c4-25da-4f4c-bb0a-356708f68d88.png)

Image Source:- [Tutorialspoint](https://www.tutorialspoint.com/what-is-gray-code)

We can construct Gray codes using other methods. For example, 3 bit Gray codes can be contracted using K-map which is given as following below:

<p>
   <img src = "https://www.tutorialspoint.com/assets/questions/media/18156/43_2.jpg">
</p>

Image Source:- [Tutorialspoint](https://www.tutorialspoint.com/what-is-gray-code)

## Algorithm

n-bit Gray Codes can be generated from list of (n-1)-bit Gray codes using following steps:-
1. Let the list of (n-1)-bit Gray codes be L1. Create another list L2 which is reverse of L1.
2. Modify the list L1 by prefixing a ‘0’ in all codes of L1.
3. Modify the list L2 by prefixing a ‘1’ in all codes of L2.
4. Concatenate L1 and L2. The concatenated list is required list of n-bit Gray codes.

For example, following are steps for generating the 3-bit Gray code list from the list of 2-bit Gray code list. 

L1 = {00, 01, 11, 10} (List of 2-bit Gray Codes)

L2 = {10, 11, 01, 00} (Reverse of L1) 

Prefix all entries of L1 with ‘0’, L1 becomes {000, 001, 011, 010} 

Prefix all entries of L2 with ‘1’, L2 becomes {110, 111, 101, 100} 

Concatenate L1 and L2, we get {000, 001, 011, 010, 110, 111, 101, 100}

To generate n-bit Gray codes, we start from list of 1 bit Gray codes. The list of 1 bit Gray code is {0, 1}. We repeat above steps to generate 2 bit Gray codes from 1 bit Gray codes, then 3-bit Gray codes from 2-bit Gray codes till the number of bits becomes equal to n. 

## Example

   Input: n = 2
    
   Output: [0,1,3,2]
    
   **Explanation:**
      
   The binary representation of [0,1,3,2] is [00,01,11,10].
     
   - 00 and 01 differ by one bit

   - 01 and 11 differ by one bit

   - 11 and 10 differ by one bit
     
   - 10 and 00 differ by one bit
    
   [0,2,3,1] is also a valid gray code sequence, whose binary representation is [00,10,11,01].
     
   - 00 and 10 differ by one bit
     
   - 10 and 11 differ by one bit
     
   - 11 and 01 differ by one bit
     
   - 01 and 00 differ by one bit
     
 ## Practical Applications
 
 * n-bit gray code forms a Hamiltonian cycle on a hypercube, where each bit corresponds to one dimension.
 * They are used to minimize the errors in digital-to-analog signals conversion (for example, in sensors).
 * They are also used in genetic algorithms theory.
 * They can be used to solve the Towers of Hanoi problem.

## Implementation

* Method - 1:- **Recursive Approach**
  
  The idea is to recursively append the bit 0 and 1 each time until the number of bits is not equal to N. 
  
  **Base Condition:** The base case for this problem will be when the value of N = 0 or 1. 
  
  **Recursive Condition:** Otherwise, for any value greater than 1, recursively generate the gray codes of the N – 1 bits and then for each of the gray code generated add the prefix 0 and 1.

  ```cpp
  // C++ program to generate
  // n-bit Gray codes

  #include <bits/stdc++.h>
  using namespace std;

  // This function generates all n
  // bit Gray codes and prints the
  // generated codes
  vector<string> generateGray(int n)
  {
	    // Base case
	    if (n <= 0)
		    return {"0"};

	    if (n == 1)
	    {
	      return {"0","1"};
	    }

	    //Recursive case
	    vector<string> recAns= generateGray(n-1);
		  vector<string> mainAns;
	
	    // Append 0 to the first half
	    for(int i=0;i<recAns.size();i++)
	    {
	      string s=recAns[i];
	      mainAns.push_back("0"+s);
	    }
	
	    // Append 1 to the second half
	    for(int i=recAns.size()-1;i>=0;i--)
	    {
	      string s=recAns[i];
	      mainAns.push_back("1"+s);
	    }
	    return mainAns;
  }

    // Function to generate the
    // Gray code of N bits
    void generateGrayarr(int n)
    {
	    vector<string> arr;
	    arr=generateGray(n);
	    // print contents of arr
	    for (int i = 0 ; i < arr.size(); i++ )
		      cout << arr[i] << endl; 
    }

  int main()
  {
	  generateGrayarr(3);
	  return 0;
  }

  ```
  
  **Output**
  
  ```
  000
  001
  011
  010
  110
  111
  101
  100
  ```
  `Time Complexity: O(2^N)`
  
  `Auxiliary Space: O(2N)`
  
  
* Method 2:- **Using bitset**

  We should first find binary no from 1 to n and then convert it into string and then print it using substring function of string.
  
  ```cpp
   // C++ implementation of the above approach
   #include <bits/stdc++.h>
   using namespace std;

   void GreyCode(int n)
   {
		// power of 2
		for (int i = 0; i < (1 << n); i++)
		{
		      // Generating the decimal
		      // values of gray code then using
		      // bitset to convert them to binary form
		      int val = (i ^ (i >> 1));
		
		      // Using bitset
		      bitset<32> r(val);
		
		      // Converting to string
		      string s = r.to_string();
		      cout << s.substr(32 - n) << " ";
		}
   }

   int main()
   {
	  int n;
	  n = 4;

	  // Function call
	  GreyCode(n);
	
	  return 0;
   }

  ```
  
  **Output**
  
  ```
  0000 0001 0011 0010 0110 0111 0101 0100 1100 1101 1111 1110 1010 1011 1001 1000
  ```
  
  `Time Complexity: O(2^N)` 
  
  `Auxiliary Space: O(N)`
  
  
References:-

* [GeeksforGeeks](https://www.geeksforgeeks.org/generate-n-bit-gray-codes/)
